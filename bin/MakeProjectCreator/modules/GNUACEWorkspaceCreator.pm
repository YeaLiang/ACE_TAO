package GNUACEWorkspaceCreator;

# ************************************************************
# Description   : A GNU Workspace (GNUmakefile) creator for ACE
# Author        : Chad Elliott
# Create Date   : 5/13/2002
# ************************************************************

# ************************************************************
# Pragmas
# ************************************************************

use strict;
use File::Basename;

use GNUACEProjectCreator;
use WorkspaceCreator;

use vars qw(@ISA);
@ISA = qw(WorkspaceCreator);

# ************************************************************
# Data Section
# ************************************************************

my(@targets)  = ('all', 'debug', 'profile', 'optimize',
                 'install', 'deinstall', 'clean', 'realclean',
                 'clobber', 'depend', 'rcs_info', 'idl_stubs',
                 'reverseclean',
                );

# ************************************************************
# Subroutine Section
# ************************************************************

sub generate_implicit_project_dependencies {
  #my($self) = shift;
  return 1;
}


sub workspace_file_name {
  my($self) = shift;
  return $self->get_modified_workspace_name('GNUmakefile', '');
}


sub workspace_per_project {
  #my($self) = shift;
  return 1;
}


sub pre_workspace {
  my($self) = shift;
  my($fh)   = shift;
  my($crlf) = $self->crlf();

  print $fh "" .
      "# -*- makefile -*-" . $crlf .
      "#-------------------------------------------------------------------------" . $crlf .
      "#       GNU ACE Workspace" . $crlf .
      "#" . $crlf .
      "# \@file GNUmakefile" . $crlf .
      "#" . $crlf .
      "# \$Id\$" . $crlf .
      "#" . $crlf .
      "# This file was automatically generated by MPC.  Any changes made " . $crlf .
      "# directly to this file will be lost the next time it is generated." . $crlf .
      "#" . $crlf .
      "#-------------------------------------------------------------------------" . $crlf .
      "MAKEFILE = GNUmakefile" . $crlf;
}


sub write_comps {
  my($self)     = shift;
  my($fh)       = shift;
  my($crlf)     = $self->crlf();
  my($projects) = $self->get_projects();
  my(%targnum)  = ();
  my($pjs)      = $self->get_project_info();
  my(@list)     = $self->number_target_deps($projects, $pjs, \%targnum);

  ## Only use the list if there is more than one project  
  if ($#list > 0) {  
    my($count) = 0;  

    print $fh $crlf .
        "ifeq (\$(findstring k,\$(MAKEFLAGS)),k)$crlf" .
        "  KEEP_GOING = -$crlf" .
        "endif$crlf$crlf";

    print $fh "# List of targets.$crlf";
    print $fh "targets =";
    foreach my $target (@targets) {
      print $fh " \\" . $crlf . "  " . $target;
    }
    print $fh "$crlf$crlf";

    print $fh "# List of projects.$crlf";
    print $fh "projects =";
    foreach my $project (@list) {
      print $fh " \\" . $crlf . "  " . $project;
    }
    print $fh "$crlf$crlf";

    print $fh "# Phony targets, these targets aren't real files.$crlf";
    print $fh ".PHONY: \$(targets) \$(foreach ext, \$(targets), \$(addsuffix -\$(ext), \$(projects)))$crlf$crlf";

    print $fh "# Default target.$crlf";
    print $fh "all: \$(addsuffix -all, \$(projects))$crlf$crlf";

    print $fh "" .
        "# This is the rule for all the standard targets listed above.$crlf" .
        "# The dependencies are formed by adding '-<target name>' to$crlf" .
        "# each project, e.g., GNUmakefile.project-all.$crlf";
    print $fh "\$(targets): %: \$(addsuffix -%, \$(projects))$crlf$crlf";


    print $fh "\$(foreach ext, \$(targets), \$(addsuffix -\$(ext), \$(projects))):" . $crlf;
    print $fh "\t\@echo \$(KEEP_GOING)\$(MAKE) -f \$(notdir \$(word 1,\$(subst -, ,\$@))) \\" . $crlf .
              "\t       -C \$(dir \$(word 1,\$(subst -, ,\$@))) \$(word 2,\$(subst -, ,\$@));" . $crlf;
     print $fh "\t\$(KEEP_GOING)\@\$(MAKE) -f \$(notdir \$(word 1,\$(subst -, ,\$@))) \\" . $crlf .
              "\t       -C \$(dir \$(word 1,\$(subst -, ,\$@))) \$(word 2,\$(subst -, ,\$@));" . $crlf . $crlf;


    ## Print out each of the individual targets
    foreach my $project (@list) {
      if (defined $targnum{$project}) {
        print $fh "\$(foreach ext, \$(targets), \$(addsuffix -\$(ext), " .
                  $project . ")): \\" . $crlf . "  " . $project . "-%:";
        foreach my $number (@{$targnum{$project}}) {
          print $fh ' \\' . $crlf . '    ' .  $list[$number] . '-%';
        }
        print $fh $crlf . $crlf;
      }
    }
  }
  else {
    ## Otherwise, just list the call to make without a for loop
    my($dir)  = dirname($list[0]);
    my($base) = basename($list[0]);
    print $fh "TARGETS_NESTED = @targets$crlf" .
              $crlf .
              "\$(TARGETS_NESTED):$crlf" .
              "\t\@\$(MAKE) -f $base " . ($dir ne '.' ? "-C $dir " : '') .
              "\$(\@);$crlf$crlf" .
              $$pjs{$list[0]}->[0] . ": all$crlf$crlf" .
              "reverseclean:$crlf" .
              "\t\@\$(MAKE) -f $base " . ($dir ne '.' ? "-C $dir " : '') .
              "realclean$crlf$crlf";
  }
}

1;
