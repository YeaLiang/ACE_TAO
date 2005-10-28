// -*- C++ -*-
// $Id$

// ============================================================================
//
// = LIBRARY
//    interop_test/wchar
//
// = FILENAME
//    server.cpp
//
// = DESCRIPTION
//    C++ server side for testing interoperability with wchar data.
//
// = AUTHOR
//    Phil Mesnier <mesnier_p@ociweb.com>
//
// ============================================================================
#include "interop_wchar_i.h"
#include "ace/Get_Opt.h"
#include "ace/Argv_Type_Converter.h"

const ACE_TCHAR *ior_output_file = ACE_TEXT("IOR");
int verbose = 0;

int
parse_args (int argc, ACE_TCHAR* argv[])
{

  ACE_Get_Arg_Opt<char> get_opts (argc, argv, ACE_TEXT("o:v"));
  int c;

  while ((c = get_opts ()) != -1)
    switch (c)
      {
      case 'o':
        ior_output_file = get_opts.opt_arg ();
        break;
      case 'v':
        verbose = 1;
        break;
      case '?':
      default:
        ACE_ERROR_RETURN ((LM_ERROR,
                           "usage:  %s "
                           "-o <iorfile> "
                           "-v "
                           "\n",
                           argv [0]),
                          -1);
      }
  // Indicates sucessful parsing of the command line
  return 0;
}

int
ACE_TMAIN( int argc, ACE_TCHAR *argv[] )
{
  ACE_Argv_Type_Converter command_line(argc, argv);

  if (parse_args(command_line.get_argc(), command_line.get_TCHAR_argv()))
    {
      ACE_ERROR_RETURN ((LM_ERROR,
                        ACE_TEXT ("failed to parse args")),
                        1);
    }

#if (!defined ACE_HAS_WCHAR) && (!defined ACE_HAS_XPG4_MULTIBYTE_CHAR)
  // the run_test script looks for the ior file. By touching it here, the
  // script can run at full speed, rather than timing out waiting for a
  // file that will never come.
  FILE *output_file = ACE_OS::fopen (ior_output_file, ACE_TEXT("w"));
  if (output_file == 0)
    ACE_ERROR_RETURN ((LM_ERROR,
                       ACE_TEXT("Cannot open output file ")
                       ACE_TEXT("for writing IOR: %s"),
                       ior_output_file),
                      1);
  ACE_OS::fprintf (output_file, "no ior\n");
  ACE_OS::fclose (output_file);
  ACE_ERROR_RETURN ((LM_ERROR,"This test requires wchar support\n"),0);
#else
  ACE_DECLARE_NEW_ENV;
  ACE_TRY
    {
        // Initialize orb
        CORBA::ORB_var orb = CORBA::ORB_init( command_line.get_argc(), command_line.get_ASCII_argv() );

        //Get reference to Root POA
        CORBA::Object_var obj =
        orb->resolve_initial_references( "RootPOA"
                                         ACE_ENV_ARG_PARAMETER );
        ACE_TRY_CHECK;

        PortableServer::POA_var poa =
          PortableServer::POA::_narrow( obj.in()
                                        ACE_ENV_ARG_PARAMETER );
        ACE_TRY_CHECK;

        PortableServer::POAManager_var mgr =
          poa->the_POAManager( ACE_ENV_SINGLE_ARG_PARAMETER );
        ACE_TRY_CHECK;

        // Activate POA Manager
        mgr->activate( ACE_ENV_SINGLE_ARG_PARAMETER );
        ACE_TRY_CHECK;

        // Create an object
        interop_WChar_Passer_i servant(orb.in(), verbose);

        // Register the servant with the RootPOA, obtain its object
        // reference, stringify it, and write it to a file.
        obj = poa->servant_to_reference( &servant
                                         ACE_ENV_ARG_PARAMETER );
        ACE_TRY_CHECK;

        CORBA::String_var str =
          orb->object_to_string( obj.in()
                                 ACE_ENV_ARG_PARAMETER );
        ACE_TRY_CHECK;

        FILE *output_file = ACE_OS::fopen (ior_output_file, ACE_TEXT("w"));
        if (output_file == 0)
          ACE_ERROR_RETURN ((LM_ERROR,
                             ACE_TEXT("Cannot open output file ")
                             ACE_TEXT("for writing IOR: %s"),
                            ior_output_file),
                            1);
        ACE_OS::fprintf (output_file, "%s", str.in ());
        ACE_OS::fclose (output_file);

        // Accept requests
        orb->run( ACE_ENV_SINGLE_ARG_PARAMETER );
        ACE_TRY_CHECK;
        orb->destroy( ACE_ENV_SINGLE_ARG_PARAMETER );
        ACE_TRY_CHECK;
      }
    ACE_CATCH(CORBA::Exception, ex)
      {
        ACE_PRINT_EXCEPTION(ex, "uncaught exception");
        return 1;
      }
    ACE_ENDTRY;

    return 0;
#endif /* ACE_HAS_WCHAR */
}
