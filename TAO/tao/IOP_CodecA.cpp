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

#include "IOP_CodecC.h"
#include "tao/Typecode.h"
#include "tao/CDR.h"
#include "tao/Any.h"
#include "tao/Any_Impl_T.h"
#include "tao/Any_Dual_Impl_T.h"

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_IOP_Codec[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  26,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x494f502f), 
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x633a312e), 
  ACE_NTOHL (0x30000000),  // repository ID = IDL:omg.org/IOP/Codec:1.0
    6,
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x63000000),  // name = Codec
  };

static CORBA::TypeCode _tc_TAO_tc_IOP_Codec (
    CORBA::tk_objref,
    sizeof (_oc_IOP_Codec),
    (char *) &_oc_IOP_Codec,
    0,
    0
  );

namespace IOP
{
  ::CORBA::TypeCode_ptr _tc_Codec =
    &_tc_TAO_tc_IOP_Codec;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_IOP_EncodingFormat[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  35,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x494f502f), 
  ACE_NTOHL (0x456e636f), 
  ACE_NTOHL (0x64696e67), 
  ACE_NTOHL (0x466f726d), 
  ACE_NTOHL (0x61743a31), 
  ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/IOP/EncodingFormat:1.0
    15,
  ACE_NTOHL (0x456e636f), 
  ACE_NTOHL (0x64696e67), 
  ACE_NTOHL (0x466f726d), 
  ACE_NTOHL (0x61740000),  // name = EncodingFormat
    CORBA::tk_short,

};

static CORBA::TypeCode _tc_TAO_tc_IOP_EncodingFormat (
    CORBA::tk_alias,
    sizeof (_oc_IOP_EncodingFormat),
    (char *) &_oc_IOP_EncodingFormat,
    0,
    0
  );

namespace IOP
{
  ::CORBA::TypeCode_ptr _tc_EncodingFormat =
    &_tc_TAO_tc_IOP_EncodingFormat;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_IOP_Encoding[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  29,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x494f502f), 
  ACE_NTOHL (0x456e636f), 
  ACE_NTOHL (0x64696e67), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/IOP/Encoding:1.0
    9,
  ACE_NTOHL (0x456e636f), 
  ACE_NTOHL (0x64696e67), 
  ACE_NTOHL (0x0),  // name = Encoding
  3, // member count
    7,
  ACE_NTOHL (0x666f726d), 
  ACE_NTOHL (0x61740000),  // name = format
    CORBA::tk_alias, // typecode kind for typedefs
  68, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    35,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x494f502f), 
    ACE_NTOHL (0x456e636f), 
    ACE_NTOHL (0x64696e67), 
    ACE_NTOHL (0x466f726d), 
    ACE_NTOHL (0x61743a31), 
    ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/IOP/EncodingFormat:1.0
        15,
    ACE_NTOHL (0x456e636f), 
    ACE_NTOHL (0x64696e67), 
    ACE_NTOHL (0x466f726d), 
    ACE_NTOHL (0x61740000),  // name = EncodingFormat
        CORBA::tk_short,


  14,
  ACE_NTOHL (0x6d616a6f), 
  ACE_NTOHL (0x725f7665), 
  ACE_NTOHL (0x7273696f), 
  ACE_NTOHL (0x6e000000),  // name = major_version
    CORBA::tk_octet,

  14,
  ACE_NTOHL (0x6d696e6f), 
  ACE_NTOHL (0x725f7665), 
  ACE_NTOHL (0x7273696f), 
  ACE_NTOHL (0x6e000000),  // name = minor_version
    CORBA::tk_octet,

};

static CORBA::TypeCode _tc_TAO_tc_IOP_Encoding (
    CORBA::tk_struct,
    sizeof (_oc_IOP_Encoding),
    (char *) &_oc_IOP_Encoding,
    0,
    0
  );

namespace IOP
{
  ::CORBA::TypeCode_ptr _tc_Encoding =
    &_tc_TAO_tc_IOP_Encoding;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_IOP_CodecFactory[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  33,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x494f502f), 
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x63466163), 
  ACE_NTOHL (0x746f7279), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/IOP/CodecFactory:1.0
    13,
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x63466163), 
  ACE_NTOHL (0x746f7279), 
  ACE_NTOHL (0x0),  // name = CodecFactory
  };

static CORBA::TypeCode _tc_TAO_tc_IOP_CodecFactory (
    CORBA::tk_objref,
    sizeof (_oc_IOP_CodecFactory),
    (char *) &_oc_IOP_CodecFactory,
    0,
    0
  );

namespace IOP
{
  ::CORBA::TypeCode_ptr _tc_CodecFactory =
    &_tc_TAO_tc_IOP_CodecFactory;
}

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<IOP::Codec>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<IOP::Codec>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<IOP::Codec>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    IOP::Codec_ptr _tao_elem
  )
{
  IOP::Codec_ptr _tao_objptr =
    IOP::Codec::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    IOP::Codec_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<IOP::Codec>::insert (
      _tao_any,
      IOP::Codec::_tao_any_destructor,
      IOP::_tc_Codec,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    IOP::Codec_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<IOP::Codec>::extract (
        _tao_any,
        IOP::Codec::_tao_any_destructor,
        IOP::_tc_Codec,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_exception/any_op_cs.cpp:50

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Dual_Impl_T<IOP::Codec::InvalidTypeForEncoding>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Dual_Impl_T<IOP::Codec::InvalidTypeForEncoding>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const IOP::Codec::InvalidTypeForEncoding &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<IOP::Codec::InvalidTypeForEncoding>::insert_copy (
      _tao_any,
      IOP::Codec::InvalidTypeForEncoding::_tao_any_destructor,
      IOP::Codec::_tc_InvalidTypeForEncoding,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    IOP::Codec::InvalidTypeForEncoding *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<IOP::Codec::InvalidTypeForEncoding>::insert (
      _tao_any,
      IOP::Codec::InvalidTypeForEncoding::_tao_any_destructor,
      IOP::Codec::_tc_InvalidTypeForEncoding,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    IOP::Codec::InvalidTypeForEncoding *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const IOP::Codec::InvalidTypeForEncoding *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const IOP::Codec::InvalidTypeForEncoding *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<IOP::Codec::InvalidTypeForEncoding>::extract (
        _tao_any,
        IOP::Codec::InvalidTypeForEncoding::_tao_any_destructor,
        IOP::Codec::_tc_InvalidTypeForEncoding,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_exception/any_op_cs.cpp:50

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Dual_Impl_T<IOP::Codec::FormatMismatch>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Dual_Impl_T<IOP::Codec::FormatMismatch>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const IOP::Codec::FormatMismatch &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<IOP::Codec::FormatMismatch>::insert_copy (
      _tao_any,
      IOP::Codec::FormatMismatch::_tao_any_destructor,
      IOP::Codec::_tc_FormatMismatch,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    IOP::Codec::FormatMismatch *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<IOP::Codec::FormatMismatch>::insert (
      _tao_any,
      IOP::Codec::FormatMismatch::_tao_any_destructor,
      IOP::Codec::_tc_FormatMismatch,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    IOP::Codec::FormatMismatch *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const IOP::Codec::FormatMismatch *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const IOP::Codec::FormatMismatch *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<IOP::Codec::FormatMismatch>::extract (
        _tao_any,
        IOP::Codec::FormatMismatch::_tao_any_destructor,
        IOP::Codec::_tc_FormatMismatch,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_exception/any_op_cs.cpp:50

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Dual_Impl_T<IOP::Codec::TypeMismatch>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Dual_Impl_T<IOP::Codec::TypeMismatch>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const IOP::Codec::TypeMismatch &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<IOP::Codec::TypeMismatch>::insert_copy (
      _tao_any,
      IOP::Codec::TypeMismatch::_tao_any_destructor,
      IOP::Codec::_tc_TypeMismatch,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    IOP::Codec::TypeMismatch *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<IOP::Codec::TypeMismatch>::insert (
      _tao_any,
      IOP::Codec::TypeMismatch::_tao_any_destructor,
      IOP::Codec::_tc_TypeMismatch,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    IOP::Codec::TypeMismatch *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const IOP::Codec::TypeMismatch *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const IOP::Codec::TypeMismatch *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<IOP::Codec::TypeMismatch>::extract (
        _tao_any,
        IOP::Codec::TypeMismatch::_tao_any_destructor,
        IOP::Codec::_tc_TypeMismatch,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_structure/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const IOP::Encoding &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<IOP::Encoding>::insert_copy (
      _tao_any,
      IOP::Encoding::_tao_any_destructor,
      IOP::_tc_Encoding,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    IOP::Encoding *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<IOP::Encoding>::insert (
      _tao_any,
      IOP::Encoding::_tao_any_destructor,
      IOP::_tc_Encoding,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    IOP::Encoding *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const IOP::Encoding *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const IOP::Encoding *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<IOP::Encoding>::extract (
        _tao_any,
        IOP::Encoding::_tao_any_destructor,
        IOP::_tc_Encoding,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<IOP::CodecFactory>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<IOP::CodecFactory>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<IOP::CodecFactory>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    IOP::CodecFactory_ptr _tao_elem
  )
{
  IOP::CodecFactory_ptr _tao_objptr =
    IOP::CodecFactory::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    IOP::CodecFactory_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<IOP::CodecFactory>::insert (
      _tao_any,
      IOP::CodecFactory::_tao_any_destructor,
      IOP::_tc_CodecFactory,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    IOP::CodecFactory_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<IOP::CodecFactory>::extract (
        _tao_any,
        IOP::CodecFactory::_tao_any_destructor,
        IOP::_tc_CodecFactory,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_exception/any_op_cs.cpp:50

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Dual_Impl_T<IOP::CodecFactory::UnknownEncoding>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Dual_Impl_T<IOP::CodecFactory::UnknownEncoding>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const IOP::CodecFactory::UnknownEncoding &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<IOP::CodecFactory::UnknownEncoding>::insert_copy (
      _tao_any,
      IOP::CodecFactory::UnknownEncoding::_tao_any_destructor,
      IOP::CodecFactory::_tc_UnknownEncoding,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    IOP::CodecFactory::UnknownEncoding *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<IOP::CodecFactory::UnknownEncoding>::insert (
      _tao_any,
      IOP::CodecFactory::UnknownEncoding::_tao_any_destructor,
      IOP::CodecFactory::_tc_UnknownEncoding,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    IOP::CodecFactory::UnknownEncoding *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const IOP::CodecFactory::UnknownEncoding *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const IOP::CodecFactory::UnknownEncoding *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<IOP::CodecFactory::UnknownEncoding>::extract (
        _tao_any,
        IOP::CodecFactory::UnknownEncoding::_tao_any_destructor,
        IOP::CodecFactory::_tc_UnknownEncoding,
        _tao_elem
      );
}
