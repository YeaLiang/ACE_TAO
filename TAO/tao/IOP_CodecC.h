// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:153

#ifndef _TAO_IDL_ORIG_IOP_CODECC_H_
#define _TAO_IDL_ORIG_IOP_CODECC_H_

#include /**/ "ace/pre.h"


#include "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/TAO_Export.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Environment.h"
#include "tao/Object.h"
#include "tao/Typecode.h"
#include "tao/Any.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/VarOut_T.h"

#include "tao/Typecode_typesC.h"
#include "tao/OctetSeqC.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Export

#if defined (TAO_EXPORT_NESTED_CLASSES)
#  if defined (TAO_EXPORT_NESTED_MACRO)
#    undef TAO_EXPORT_NESTED_MACRO
#  endif /* defined (TAO_EXPORT_NESTED_MACRO) */
#  define TAO_EXPORT_NESTED_MACRO TAO_Export
#endif /* TAO_EXPORT_NESTED_CLASSES */

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option push -w-rvl -w-rch -w-ccc -w-inl
#endif /* __BORLANDC__ */

// TAO_IDL - Generated from 
// be\be_visitor_root/root_ch.cpp:62

namespace TAO
{
  class Collocation_Proxy_Broker;
  
  template<typename T> class Narrow_Utils;
  template<typename T> class AbstractBase_Narrow_Utils;
}

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:48

namespace IOP
{
  
  // TAO_IDL - Generated from
  // be\be_interface.cpp:598

#if !defined (_IOP_CODEC__VAR_OUT_CH_)
#define _IOP_CODEC__VAR_OUT_CH_
  
  class Codec;
  typedef Codec *Codec_ptr;
  
  typedef
    TAO_Objref_Var_T<
        Codec
      >
    Codec_var;
  
  typedef
    TAO_Objref_Out_T<
        Codec
      >
    Codec_out;

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // be\be_visitor_interface/interface_ch.cpp:54

#if !defined (_IOP_CODEC_CH_)
#define _IOP_CODEC_CH_
  
  class TAO_Export Codec
    : public virtual CORBA::Object
  {
  public:
    typedef Codec_ptr _ptr_type;
    typedef Codec_var _var_type;
    
    // The static operations.
    static Codec_ptr _duplicate (Codec_ptr obj);
    
    static Codec_ptr _narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static Codec_ptr _unchecked_narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static Codec_ptr _nil (void)
    {
      return static_cast<Codec_ptr> (0);
    }
    
    static void _tao_any_destructor (void *);
    
    // TAO_IDL - Generated from
    // be\be_visitor_exception/exception_ch.cpp:51

#if !defined (_IOP_CODEC_INVALIDTYPEFORENCODING_CH_)
#define _IOP_CODEC_INVALIDTYPEFORENCODING_CH_
    
    class TAO_Export InvalidTypeForEncoding : public CORBA::UserException
    {
    public:
      
      InvalidTypeForEncoding (void);
      InvalidTypeForEncoding (const InvalidTypeForEncoding &);
      ~InvalidTypeForEncoding (void);

      InvalidTypeForEncoding &operator= (const InvalidTypeForEncoding &);
      
      static void _tao_any_destructor (void *);
      
      static InvalidTypeForEncoding *_downcast (CORBA::Exception *);
      static const InvalidTypeForEncoding *_downcast (CORBA::Exception const *);
      
      static CORBA::Exception *_alloc (void);
      
      virtual CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void) const;

      virtual void _tao_encode (
          TAO_OutputCDR &
          ACE_ENV_ARG_DECL
        ) const;
      
      virtual void _tao_decode (
          TAO_InputCDR &
          ACE_ENV_ARG_DECL
        );
      
      // TAO_IDL - Generated from
      // be\be_visitor_exception/exception_ch.cpp:127
      
      virtual CORBA::TypeCode_ptr _type (void) const;
    };
    
    // TAO_IDL - Generated from
    // be\be_visitor_typecode/typecode_decl.cpp:44
    
    static ::CORBA::TypeCode_ptr _tc_InvalidTypeForEncoding;

#endif /* end #if !defined */
    
    // TAO_IDL - Generated from
    // be\be_visitor_exception/exception_ch.cpp:51

#if !defined (_IOP_CODEC_FORMATMISMATCH_CH_)
#define _IOP_CODEC_FORMATMISMATCH_CH_
    
    class TAO_Export FormatMismatch : public CORBA::UserException
    {
    public:
      
      FormatMismatch (void);
      FormatMismatch (const FormatMismatch &);
      ~FormatMismatch (void);

      FormatMismatch &operator= (const FormatMismatch &);
      
      static void _tao_any_destructor (void *);
      
      static FormatMismatch *_downcast (CORBA::Exception *);
      static const FormatMismatch *_downcast (CORBA::Exception const *);
      
      static CORBA::Exception *_alloc (void);
      
      virtual CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void) const;

      virtual void _tao_encode (
          TAO_OutputCDR &
          ACE_ENV_ARG_DECL
        ) const;
      
      virtual void _tao_decode (
          TAO_InputCDR &
          ACE_ENV_ARG_DECL
        );
      
      // TAO_IDL - Generated from
      // be\be_visitor_exception/exception_ch.cpp:127
      
      virtual CORBA::TypeCode_ptr _type (void) const;
    };
    
    // TAO_IDL - Generated from
    // be\be_visitor_typecode/typecode_decl.cpp:44
    
    static ::CORBA::TypeCode_ptr _tc_FormatMismatch;

#endif /* end #if !defined */
    
    // TAO_IDL - Generated from
    // be\be_visitor_exception/exception_ch.cpp:51

#if !defined (_IOP_CODEC_TYPEMISMATCH_CH_)
#define _IOP_CODEC_TYPEMISMATCH_CH_
    
    class TAO_Export TypeMismatch : public CORBA::UserException
    {
    public:
      
      TypeMismatch (void);
      TypeMismatch (const TypeMismatch &);
      ~TypeMismatch (void);

      TypeMismatch &operator= (const TypeMismatch &);
      
      static void _tao_any_destructor (void *);
      
      static TypeMismatch *_downcast (CORBA::Exception *);
      static const TypeMismatch *_downcast (CORBA::Exception const *);
      
      static CORBA::Exception *_alloc (void);
      
      virtual CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void) const;

      virtual void _tao_encode (
          TAO_OutputCDR &
          ACE_ENV_ARG_DECL
        ) const;
      
      virtual void _tao_decode (
          TAO_InputCDR &
          ACE_ENV_ARG_DECL
        );
      
      // TAO_IDL - Generated from
      // be\be_visitor_exception/exception_ch.cpp:127
      
      virtual CORBA::TypeCode_ptr _type (void) const;
    };
    
    // TAO_IDL - Generated from
    // be\be_visitor_typecode/typecode_decl.cpp:44
    
    static ::CORBA::TypeCode_ptr _tc_TypeMismatch;

#endif /* end #if !defined */
    
    // TAO_IDL - Generated from
    // be\be_visitor_operation/operation_ch.cpp:46
    
    virtual ::CORBA::OctetSeq * encode (
        const ::CORBA::Any & data
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::IOP::Codec::InvalidTypeForEncoding
      )) = 0;
    
    // TAO_IDL - Generated from
    // be\be_visitor_operation/operation_ch.cpp:46
    
    virtual CORBA::Any * decode (
        const ::CORBA::OctetSeq & data
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::IOP::Codec::FormatMismatch
      )) = 0;
    
    // TAO_IDL - Generated from
    // be\be_visitor_operation/operation_ch.cpp:46
    
    virtual ::CORBA::OctetSeq * encode_value (
        const ::CORBA::Any & data
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::IOP::Codec::InvalidTypeForEncoding
      )) = 0;
    
    // TAO_IDL - Generated from
    // be\be_visitor_operation/operation_ch.cpp:46
    
    virtual CORBA::Any * decode_value (
        const ::CORBA::OctetSeq & data,
        ::CORBA::TypeCode_ptr tc
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::IOP::Codec::FormatMismatch,
        ::IOP::Codec::TypeMismatch
      )) = 0;
    
    // TAO_IDL - Generated from
    // be\be_visitor_interface/interface_ch.cpp:208
    
    virtual CORBA::Boolean _is_a (
        const char *type_id
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    virtual const char* _interface_repository_id (void) const;
    virtual CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    Codec (void);
    
    virtual ~Codec (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Codec (const Codec &);
    
    void operator= (const Codec &);
  };

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // be\be_visitor_typecode/typecode_decl.cpp:44
  
  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_Codec;
  
  // TAO_IDL - Generated from
  // be\be_visitor_typedef/typedef_ch.cpp:379
  
  typedef CORBA::Short EncodingFormat;
  typedef CORBA::Short_out EncodingFormat_out;
  
  // TAO_IDL - Generated from
  // be\be_visitor_typecode/typecode_decl.cpp:44
  
  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_EncodingFormat;
  
  // TAO_IDL - Generated from
  // be\be_visitor_constant/constant_ch.cpp:52
  
  const IOP::EncodingFormat ENCODING_CDR_ENCAPS = 0;
  
  // TAO_IDL - Generated from
  // be\be_type.cpp:258
  
  struct Encoding;
  
  typedef
    TAO_Fixed_Var_T<
        Encoding
      >
    Encoding_var;
  
  typedef
    Encoding &
    Encoding_out;
  
  // TAO_IDL - Generated from
  // be\be_visitor_structure/structure_ch.cpp:52
  
  struct TAO_Export Encoding
  {
    typedef Encoding_var _var_type;
    
    static void _tao_any_destructor (void *);
    IOP::EncodingFormat format;
    CORBA::Octet major_version;
    CORBA::Octet minor_version;
  };
  
  // TAO_IDL - Generated from
  // be\be_visitor_typecode/typecode_decl.cpp:44
  
  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_Encoding;
  
  // TAO_IDL - Generated from
  // be\be_interface.cpp:598

#if !defined (_IOP_CODECFACTORY__VAR_OUT_CH_)
#define _IOP_CODECFACTORY__VAR_OUT_CH_
  
  class CodecFactory;
  typedef CodecFactory *CodecFactory_ptr;
  
  typedef
    TAO_Objref_Var_T<
        CodecFactory
      >
    CodecFactory_var;
  
  typedef
    TAO_Objref_Out_T<
        CodecFactory
      >
    CodecFactory_out;

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // be\be_visitor_interface/interface_ch.cpp:54

#if !defined (_IOP_CODECFACTORY_CH_)
#define _IOP_CODECFACTORY_CH_
  
  class TAO_Export CodecFactory
    : public virtual CORBA::Object
  {
  public:
    typedef CodecFactory_ptr _ptr_type;
    typedef CodecFactory_var _var_type;
    
    // The static operations.
    static CodecFactory_ptr _duplicate (CodecFactory_ptr obj);
    
    static CodecFactory_ptr _narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static CodecFactory_ptr _unchecked_narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static CodecFactory_ptr _nil (void)
    {
      return static_cast<CodecFactory_ptr> (0);
    }
    
    static void _tao_any_destructor (void *);
    
    // TAO_IDL - Generated from
    // be\be_visitor_exception/exception_ch.cpp:51

#if !defined (_IOP_CODECFACTORY_UNKNOWNENCODING_CH_)
#define _IOP_CODECFACTORY_UNKNOWNENCODING_CH_
    
    class TAO_Export UnknownEncoding : public CORBA::UserException
    {
    public:
      
      UnknownEncoding (void);
      UnknownEncoding (const UnknownEncoding &);
      ~UnknownEncoding (void);

      UnknownEncoding &operator= (const UnknownEncoding &);
      
      static void _tao_any_destructor (void *);
      
      static UnknownEncoding *_downcast (CORBA::Exception *);
      static const UnknownEncoding *_downcast (CORBA::Exception const *);
      
      static CORBA::Exception *_alloc (void);
      
      virtual CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void) const;

      virtual void _tao_encode (
          TAO_OutputCDR &
          ACE_ENV_ARG_DECL
        ) const;
      
      virtual void _tao_decode (
          TAO_InputCDR &
          ACE_ENV_ARG_DECL
        );
      
      // TAO_IDL - Generated from
      // be\be_visitor_exception/exception_ch.cpp:127
      
      virtual CORBA::TypeCode_ptr _type (void) const;
    };
    
    // TAO_IDL - Generated from
    // be\be_visitor_typecode/typecode_decl.cpp:44
    
    static ::CORBA::TypeCode_ptr _tc_UnknownEncoding;

#endif /* end #if !defined */
    
    // TAO_IDL - Generated from
    // be\be_visitor_operation/operation_ch.cpp:46
    
    virtual ::IOP::Codec_ptr create_codec (
        const ::IOP::Encoding & enc
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::IOP::CodecFactory::UnknownEncoding
      )) = 0;
    
    // TAO_IDL - Generated from
    // be\be_visitor_interface/interface_ch.cpp:208
    
    virtual CORBA::Boolean _is_a (
        const char *type_id
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    virtual const char* _interface_repository_id (void) const;
    virtual CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    CodecFactory (void);
    
    virtual ~CodecFactory (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    CodecFactory (const CodecFactory &);
    
    void operator= (const CodecFactory &);
  };

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // be\be_visitor_typecode/typecode_decl.cpp:44
  
  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_CodecFactory;

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:66

} // module IOP

// TAO_IDL - Generated from
// be\be_visitor_traits.cpp:59

// Traits specializations.
namespace TAO
{

#if !defined (_IOP_CODEC__TRAITS_CH_)
#define _IOP_CODEC__TRAITS_CH_
  
  ACE_TEMPLATE_SPECIALIZATION
  struct TAO_Export Objref_Traits< ::IOP::Codec>
  {
    static ::IOP::Codec_ptr duplicate (
        ::IOP::Codec_ptr
      );
    static void release (
        ::IOP::Codec_ptr
      );
    static ::IOP::Codec_ptr nil (void);
    static CORBA::Boolean marshal (
        ::IOP::Codec_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */

#if !defined (_IOP_CODECFACTORY__TRAITS_CH_)
#define _IOP_CODECFACTORY__TRAITS_CH_
  
  ACE_TEMPLATE_SPECIALIZATION
  struct TAO_Export Objref_Traits< ::IOP::CodecFactory>
  {
    static ::IOP::CodecFactory_ptr duplicate (
        ::IOP::CodecFactory_ptr
      );
    static void release (
        ::IOP::CodecFactory_ptr
      );
    static ::IOP::CodecFactory_ptr nil (void);
    static CORBA::Boolean marshal (
        ::IOP::CodecFactory_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */
}

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, IOP::Codec_ptr); // copying
TAO_Export void operator<<= (CORBA::Any &, IOP::Codec_ptr *); // non-copying
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::Codec_ptr &);

// TAO_IDL - Generated from
// be\be_visitor_exception/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, const IOP::Codec::InvalidTypeForEncoding &); // copying version
TAO_Export void operator<<= (CORBA::Any &, IOP::Codec::InvalidTypeForEncoding*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::Codec::InvalidTypeForEncoding *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const IOP::Codec::InvalidTypeForEncoding *&);

// TAO_IDL - Generated from
// be\be_visitor_exception/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, const IOP::Codec::FormatMismatch &); // copying version
TAO_Export void operator<<= (CORBA::Any &, IOP::Codec::FormatMismatch*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::Codec::FormatMismatch *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const IOP::Codec::FormatMismatch *&);

// TAO_IDL - Generated from
// be\be_visitor_exception/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, const IOP::Codec::TypeMismatch &); // copying version
TAO_Export void operator<<= (CORBA::Any &, IOP::Codec::TypeMismatch*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::Codec::TypeMismatch *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const IOP::Codec::TypeMismatch *&);

// TAO_IDL - Generated from
// be\be_visitor_structure/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, const IOP::Encoding &); // copying version
TAO_Export void operator<<= (CORBA::Any &, IOP::Encoding*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::Encoding *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const IOP::Encoding *&);

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, IOP::CodecFactory_ptr); // copying
TAO_Export void operator<<= (CORBA::Any &, IOP::CodecFactory_ptr *); // non-copying
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::CodecFactory_ptr &);

// TAO_IDL - Generated from
// be\be_visitor_exception/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, const IOP::CodecFactory::UnknownEncoding &); // copying version
TAO_Export void operator<<= (CORBA::Any &, IOP::CodecFactory::UnknownEncoding*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::CodecFactory::UnknownEncoding *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const IOP::CodecFactory::UnknownEncoding *&);

// TAO_IDL - Generated from
// be\be_visitor_structure/cdr_op_ch.cpp:54

TAO_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const IOP::Encoding &);
TAO_Export CORBA::Boolean operator>> (TAO_InputCDR &, IOP::Encoding &);

// TAO_IDL - Generated from
// be\be_codegen.cpp:961

#if defined (__ACE_INLINE__)
#include "IOP_CodecC.inl"
#endif /* defined INLINE */

#if defined(_MSC_VER)
#pragma warning(pop)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option pop
#endif /* __BORLANDC__ */

#include /**/ "ace/post.h"

#endif /* ifndef */


