/* -*- C++ -*- $Id$ */

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#ifndef _TAO_IDL_ORIG_DOMAINC_H_
#define _TAO_IDL_ORIG_DOMAINC_H_

#include "ace/pre.h"
#include "corbafwd.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "PolicyC.h"
#include "Request_Info.h"

class IR_InterfaceDef;

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
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */



#if !defined (_CORBA_DOMAINMANAGER___PTR_CH_)
#define _CORBA_DOMAINMANAGER___PTR_CH_

  class CORBA_DomainManager;
  typedef CORBA_DomainManager *CORBA_DomainManager_ptr;

#endif /* end #if !defined */


#if !defined (_CORBA_DOMAINMANAGER___VAR_CH_)
#define _CORBA_DOMAINMANAGER___VAR_CH_

  class TAO_Export CORBA_DomainManager_var : public TAO_Base_var
  {
  public:
    CORBA_DomainManager_var (void); // default constructor
    CORBA_DomainManager_var (CORBA_DomainManager_ptr p) : ptr_ (p) {}
    CORBA_DomainManager_var (const CORBA_DomainManager_var &); // copy constructor
    ~CORBA_DomainManager_var (void); // destructor

    CORBA_DomainManager_var &operator= (CORBA_DomainManager_ptr);
    CORBA_DomainManager_var &operator= (const CORBA_DomainManager_var &);
    CORBA_DomainManager_ptr operator-> (void) const;

    operator const CORBA_DomainManager_ptr &() const;
    operator CORBA_DomainManager_ptr &();
    // in, inout, out, _retn
    CORBA_DomainManager_ptr in (void) const;
    CORBA_DomainManager_ptr &inout (void);
    CORBA_DomainManager_ptr &out (void);
    CORBA_DomainManager_ptr _retn (void);
    CORBA_DomainManager_ptr ptr (void) const;

  private:
    CORBA_DomainManager_ptr ptr_;
    // Unimplemented - prevents widening assignment.
    CORBA_DomainManager_var (const TAO_Base_var &rhs);
    CORBA_DomainManager_var &operator= (const TAO_Base_var &rhs);
  };


#endif /* end #if !defined */


#if !defined (_CORBA_DOMAINMANAGER___OUT_CH_)
#define _CORBA_DOMAINMANAGER___OUT_CH_

  class TAO_Export CORBA_DomainManager_out
  {
  public:
    CORBA_DomainManager_out (CORBA_DomainManager_ptr &);
    CORBA_DomainManager_out (CORBA_DomainManager_var &);
    CORBA_DomainManager_out (const CORBA_DomainManager_out &);
    CORBA_DomainManager_out &operator= (const CORBA_DomainManager_out &);
    CORBA_DomainManager_out &operator= (const CORBA_DomainManager_var &);
    CORBA_DomainManager_out &operator= (CORBA_DomainManager_ptr);
    operator CORBA_DomainManager_ptr &();
    CORBA_DomainManager_ptr &ptr (void);
    CORBA_DomainManager_ptr operator-> (void);

  private:
    CORBA_DomainManager_ptr &ptr_;
  };


#endif /* end #if !defined */


#if !defined (_CORBA_DOMAINMANAGER_CH_)
#define _CORBA_DOMAINMANAGER_CH_

class TAO_Export CORBA_DomainManager : public virtual CORBA_Object
  {
  public:
  #if !defined(__GNUC__) || !defined (ACE_HAS_GNUG_PRE_2_8)
    typedef CORBA_DomainManager_ptr _ptr_type;
    typedef CORBA_DomainManager_var _var_type;
  #endif /* ! __GNUC__ || g++ >= 2.8 */

    // the static operations
    static CORBA_DomainManager_ptr _duplicate (CORBA_DomainManager_ptr obj);
    static CORBA_DomainManager_ptr _narrow (
        CORBA::Object_ptr obj,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );
    static CORBA_DomainManager_ptr _unchecked_narrow (
        CORBA::Object_ptr obj,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );
    static CORBA_DomainManager_ptr _nil (void)
      {
        return (CORBA_DomainManager_ptr)0;
      }

    static void _tao_any_destructor (void*);

    virtual CORBA_Policy_ptr get_domain_policy (
        CORBA::PolicyType policy_type,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    virtual CORBA::Boolean _is_a (
        const CORBA::Char *type_id,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );
    virtual void *_tao_QueryInterface (ptr_arith_t type);

    virtual const char* _interface_repository_id (void) const;

  protected:
    CORBA_DomainManager (void);
    CORBA_DomainManager (TAO_Stub *objref,
        CORBA::Boolean _tao_collocated = 0
      );
    virtual ~CORBA_DomainManager (void);
  private:
    CORBA_DomainManager (const CORBA_DomainManager &);
    void operator= (const CORBA_DomainManager &);
#if (TAO_HAS_INTERCEPTORS == 1)
        // Generation of interceptors related RequestInfo classes per operation.
    // This needed to be able to store the arguments, exceptiosn, constexts
    // and build the lists dynamically on demand so that unnecessary time overhead
    // of building these lists when they arent used is avoided.
            class TAO_ClientRequest_Info_CORBA_DomainManager_get_domain_policy : public TAO_ClientRequest_Info
    {
    public:
      friend class CORBA_DomainManager;
      TAO_ClientRequest_Info_CORBA_DomainManager_get_domain_policy (
        const char *_tao_operation,
        IOP::ServiceContextList &_tao_service_context_list,
        CORBA::Object *_tao_target            ,      CORBA::PolicyType& policy_type      ,
            CORBA::Environment &ACE_TRY_ENV =
        TAO_default_environment ()
      );

       virtual Dynamic::ParameterList * arguments (
        CORBA::Environment &ACE_TRY_ENV =
           TAO_default_environment ())
       ACE_THROW_SPEC ((CORBA::SystemException));

        virtual Dynamic::ExceptionList * exceptions (
      CORBA::Environment &ACE_TRY_ENV =
         TAO_default_environment ())
     ACE_THROW_SPEC ((CORBA::SystemException));

    virtual CORBA::Any * result (
    CORBA::Environment &ACE_TRY_ENV =
       TAO_default_environment ())
   ACE_THROW_SPEC ((CORBA::SystemException));


private:
TAO_ClientRequest_Info_CORBA_DomainManager_get_domain_policy (const TAO_ClientRequest_Info_CORBA_DomainManager_get_domain_policy &);
void operator= (const TAO_ClientRequest_Info_CORBA_DomainManager_get_domain_policy &);
CORBA::PolicyType & policy_type_;
void result (CORBA_Policy_ptr  result);
 // update the result
CORBA_Policy_ptr  result_;
};

#endif /* TAO_HAS_INTERCEPTORS */

};


#endif /* end #if !defined */

#if (TAO_HAS_MINIMUM_CORBA == 0)

class CORBA_ConstructionPolicy;
typedef CORBA_ConstructionPolicy *CORBA_ConstructionPolicy_ptr;

class TAO_Export CORBA_ConstructionPolicy_var : public TAO_Base_var
{
public:
  CORBA_ConstructionPolicy_var (void); // default constructor
  CORBA_ConstructionPolicy_var (CORBA_ConstructionPolicy_ptr p) : ptr_ (p) {}
  CORBA_ConstructionPolicy_var (const CORBA_ConstructionPolicy_var &); // copy constructor
  ~CORBA_ConstructionPolicy_var (void); // destructor

  CORBA_ConstructionPolicy_var &operator= (CORBA_ConstructionPolicy_ptr);
  CORBA_ConstructionPolicy_var &operator= (const CORBA_ConstructionPolicy_var &);
  CORBA_ConstructionPolicy_ptr operator-> (void) const;

  operator const CORBA_ConstructionPolicy_ptr &() const;
  operator CORBA_ConstructionPolicy_ptr &();
  // in, inout, out, _retn
  CORBA_ConstructionPolicy_ptr in (void) const;
  CORBA_ConstructionPolicy_ptr &inout (void);
  CORBA_ConstructionPolicy_ptr &out (void);
  CORBA_ConstructionPolicy_ptr _retn (void);
  CORBA_ConstructionPolicy_ptr ptr (void) const;

private:
  CORBA_ConstructionPolicy_ptr ptr_;
  // Unimplemented - prevents widening assignment.
  CORBA_ConstructionPolicy_var (const TAO_Base_var &rhs);
  CORBA_ConstructionPolicy_var &operator= (const TAO_Base_var &rhs);
};

class TAO_Export CORBA_ConstructionPolicy_out
{
public:
  CORBA_ConstructionPolicy_out (CORBA_ConstructionPolicy_ptr &);
  CORBA_ConstructionPolicy_out (CORBA_ConstructionPolicy_var &);
  CORBA_ConstructionPolicy_out (const CORBA_ConstructionPolicy_out &);
  CORBA_ConstructionPolicy_out &operator= (const CORBA_ConstructionPolicy_out &);
  CORBA_ConstructionPolicy_out &operator= (const CORBA_ConstructionPolicy_var &);
  CORBA_ConstructionPolicy_out &operator= (CORBA_ConstructionPolicy_ptr);
  operator CORBA_ConstructionPolicy_ptr &();
  CORBA_ConstructionPolicy_ptr &ptr (void);
  CORBA_ConstructionPolicy_ptr operator-> (void);

private:
  CORBA_ConstructionPolicy_ptr &ptr_;
};

class TAO_Export CORBA_ConstructionPolicy: public virtual CORBA_Policy
{
public:
#if !defined(__GNUC__) || !defined (ACE_HAS_GNUG_PRE_2_8)
  typedef CORBA_ConstructionPolicy_ptr _ptr_type;
  typedef CORBA_ConstructionPolicy_var _var_type;
#endif /* ! __GNUC__ || g++ >= 2.8 */

  // the static operations
  static CORBA_ConstructionPolicy_ptr _duplicate (CORBA_ConstructionPolicy_ptr obj);
  static CORBA_ConstructionPolicy_ptr _narrow (
      CORBA::Object_ptr obj,
      CORBA::Environment &ACE_TRY_ENV =
        TAO_default_environment ()
    );
  static CORBA_ConstructionPolicy_ptr _unchecked_narrow (
      CORBA::Object_ptr obj,
      CORBA::Environment &ACE_TRY_ENV =
        TAO_default_environment ()
    );
  static CORBA_ConstructionPolicy_ptr _nil (void)
    {
      return (CORBA_ConstructionPolicy_ptr)0;
    }

  static void _tao_any_destructor (void*);

  virtual void make_domain_manager (
      IR_InterfaceDef* object_type,
      CORBA::Boolean constr_policy,
      CORBA::Environment &ACE_TRY_ENV =
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

  virtual CORBA::Boolean _is_a (
      const CORBA::Char *type_id,
      CORBA::Environment &ACE_TRY_ENV =
        TAO_default_environment ()
    );
  virtual void *_tao_QueryInterface (ptr_arith_t type);

  virtual const char* _interface_repository_id (void) const;

protected:
  CORBA_ConstructionPolicy (void);
  CORBA_ConstructionPolicy (TAO_Stub *objref,
      CORBA::Boolean _tao_collocated = 0
    );
  virtual ~CORBA_ConstructionPolicy (void);
private:
  CORBA_ConstructionPolicy (const CORBA_ConstructionPolicy &);
  void operator= (const CORBA_ConstructionPolicy &);

#if (TAO_HAS_INTERCEPTORS == 1) && (TAO_HAS_INTERFACE_REPOSITORY == 1)

  // Generation of interceptors related RequestInfo classes per operation.
  // This needed to be able to store the arguments, exceptiosn, constexts
  // and build the lists dynamically on demand so that unnecessary time overhead
  // of building these lists when they arent used is avoided.
  class TAO_ClientRequest_Info_CORBA_ConstructionPolicy_make_domain_manager 
    : public TAO_ClientRequest_Info
  {
  public:
    friend class CORBA_ConstructionPolicy;
    TAO_ClientRequest_Info_CORBA_ConstructionPolicy_make_domain_manager (
        const char *_tao_operation,
        IOP::ServiceContextList &_tao_service_context_list,
        CORBA::Object *_tao_target,
        IR_InterfaceDef *object_type,
        CORBA::Boolean &constr_policy,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual Dynamic::ParameterList * arguments (
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((CORBA::SystemException));

    virtual Dynamic::ExceptionList * exceptions (
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((CORBA::SystemException));

    virtual CORBA::Any * result (
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((CORBA::SystemException));

  private:
    TAO_ClientRequest_Info_CORBA_ConstructionPolicy_make_domain_manager (
        const TAO_ClientRequest_Info_CORBA_ConstructionPolicy_make_domain_manager &
      );
    void operator= (
        const TAO_ClientRequest_Info_CORBA_ConstructionPolicy_make_domain_manager &
      );
    IR_InterfaceDef *object_type_;
    CORBA::Boolean &constr_policy_;
  };

#endif /* TAO_HAS_INTERCEPTORS && TAO_HAS_INTERFACE_REPOSITORY */

};


#endif /* TAO_HAS_MINIMUM_CORBA */

#if !defined (TAO_USE_SEQUENCE_TEMPLATES)

#if !defined (__TAO_UNBOUNDED_OBJECT_SEQUENCE_CORBA_DOMAINMANAGERLIST_CH_)
#define __TAO_UNBOUNDED_OBJECT_SEQUENCE_CORBA_DOMAINMANAGERLIST_CH_

  class _TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList : public TAO_Unbounded_Base_Sequence
  {
  public:
    // = Initialization and termination methods.

    _TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList (void);
    _TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList (CORBA::ULong maximum);
    _TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList (CORBA::ULong maximum,
      CORBA::ULong length,
      CORBA_DomainManager* *value,
      CORBA::Boolean release = 0);
    _TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList(const _TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList &rhs);
    virtual ~_TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList (void);
    _TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList &operator= (const _TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList &rhs);
    TAO_Object_Manager<CORBA_DomainManager,CORBA_DomainManager_var> operator[] (CORBA::ULong index) const;
    static CORBA_DomainManager **allocbuf (CORBA::ULong nelems);
    static void freebuf (CORBA_DomainManager **buffer);
    // The Base_Sequence functions, please see tao/Sequence.h
    virtual void _allocate_buffer (CORBA::ULong length);
    virtual void _deallocate_buffer (void);
    CORBA_DomainManager* *get_buffer (CORBA::Boolean orphan = 0);
    const CORBA_DomainManager* *get_buffer (void) const;
    virtual void _shrink_buffer (CORBA::ULong nl, CORBA::ULong ol);
    virtual void _downcast (
        void* target,
        CORBA_Object *src,
        CORBA_Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );
    virtual CORBA_Object* _upcast (void *src) const;

  };

#endif /* end #if !defined */


#endif /* !TAO_USE_SEQUENCE_TEMPLATES */

#if !defined (_CORBA_DOMAINMANAGERLIST_CH_)
#define _CORBA_DOMAINMANAGERLIST_CH_

class CORBA_DomainManagerList;
class CORBA_DomainManagerList_var;

// *************************************************************
// CORBA_DomainManagerList
// *************************************************************

class TAO_Export CORBA_DomainManagerList : public
#if !defined (TAO_USE_SEQUENCE_TEMPLATES)
  _TAO_Unbounded_Object_Sequence_CORBA_DomainManagerList
#else /* TAO_USE_SEQUENCE_TEMPLATES */
  TAO_Unbounded_Object_Sequence<CORBA_DomainManager,CORBA_DomainManager_var>
#endif /* !TAO_USE_SEQUENCE_TEMPLATES */
{
public:
  CORBA_DomainManagerList (void); // default ctor
  CORBA_DomainManagerList (CORBA::ULong max); // uses max size
  CORBA_DomainManagerList (
    CORBA::ULong max,
    CORBA::ULong length,
    CORBA_DomainManager_ptr *buffer,
    CORBA::Boolean release=0
  );
  CORBA_DomainManagerList (const CORBA_DomainManagerList &); // copy ctor
  ~CORBA_DomainManagerList (void);
  static void _tao_any_destructor (void*);

#if !defined(__GNUC__) || !defined (ACE_HAS_GNUG_PRE_2_8)
  typedef CORBA_DomainManagerList_var _var_type;
#endif /* ! __GNUC__ || g++ >= 2.8 */

};

#endif /* end #if !defined */


#if !defined (_CORBA_DOMAINMANAGERLIST___VAR_CH_)
#define _CORBA_DOMAINMANAGERLIST___VAR_CH_

// *************************************************************
// class CORBA_DomainManagerList_var
// *************************************************************

class TAO_Export CORBA_DomainManagerList_var
{
public:
  CORBA_DomainManagerList_var (void); // default constructor
  CORBA_DomainManagerList_var (CORBA_DomainManagerList *);
  CORBA_DomainManagerList_var (const CORBA_DomainManagerList_var &); // copy constructor
  ~CORBA_DomainManagerList_var (void); // destructor

  CORBA_DomainManagerList_var &operator= (CORBA_DomainManagerList *);
  CORBA_DomainManagerList_var &operator= (const CORBA_DomainManagerList_var &);
  CORBA_DomainManagerList *operator-> (void);
  const CORBA_DomainManagerList *operator-> (void) const;

  operator const CORBA_DomainManagerList &() const;
  operator CORBA_DomainManagerList &();
  operator CORBA_DomainManagerList &() const;
  operator CORBA_DomainManagerList *&(); // variable-size base types only

  TAO_Object_Manager<CORBA_DomainManager, CORBA_DomainManager_var> operator[] (CORBA::ULong index);
  // in, inout, out, _retn
  const CORBA_DomainManagerList &in (void) const;
  CORBA_DomainManagerList &inout (void);
  CORBA_DomainManagerList *&out (void);
  CORBA_DomainManagerList *_retn (void);
  CORBA_DomainManagerList *ptr (void) const;

private:
  CORBA_DomainManagerList *ptr_;
};


#endif /* end #if !defined */


#if !defined (_CORBA_DOMAINMANAGERLIST___OUT_CH_)
#define _CORBA_DOMAINMANAGERLIST___OUT_CH_

class TAO_Export CORBA_DomainManagerList_out
{
public:
  CORBA_DomainManagerList_out (CORBA_DomainManagerList *&);
  CORBA_DomainManagerList_out (CORBA_DomainManagerList_var &);
  CORBA_DomainManagerList_out (const CORBA_DomainManagerList_out &);
  CORBA_DomainManagerList_out &operator= (const CORBA_DomainManagerList_out &);
  CORBA_DomainManagerList_out &operator= (CORBA_DomainManagerList *);
  operator CORBA_DomainManagerList *&();
  CORBA_DomainManagerList *&ptr (void);
  CORBA_DomainManagerList *operator-> (void);
  TAO_Object_Manager<CORBA_DomainManager, CORBA_DomainManager_var> operator[] (CORBA::ULong index);

private:
  CORBA_DomainManagerList *&ptr_;
  // assignment from T_var not allowed
  void operator= (const CORBA_DomainManagerList_var &);
};


#endif /* end #if !defined */

extern TAO_Export CORBA_DomainManager_ptr (*_TAO_collocation_CORBA_DomainManager_Stub_Factory_function_pointer) (
    CORBA::Object_ptr obj
  );
// Any operators for interface CORBA_DomainManager
TAO_Export void operator<<= (CORBA::Any &, CORBA_DomainManager_ptr);
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, CORBA_DomainManager *&);

#if (TAO_HAS_MINIMUM_CORBA == 0)

extern TAO_Export CORBA_ConstructionPolicy_ptr (*_TAO_collocation_CORBA_ConstructionPolicy_Stub_Factory_function_pointer) (
    CORBA::Object_ptr obj
  );

#ifndef __ACE_INLINE__

// Any operators for interface CORBA_ConstructionPolicy
TAO_Export void operator<<= (CORBA::Any &, CORBA_ConstructionPolicy_ptr);
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, CORBA_ConstructionPolicy *&);

TAO_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const CORBA_ConstructionPolicy_ptr );
TAO_Export CORBA::Boolean operator>> (TAO_InputCDR &, CORBA_ConstructionPolicy_ptr &);

#endif /* __ACE_INLINE__ */

#endif /* TAO_HAS_MINIMUM_CORBA */

TAO_Export void operator<<= (CORBA::Any &, const CORBA_DomainManagerList &); // copying version
TAO_Export void operator<<= (CORBA::Any &, CORBA_DomainManagerList*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, CORBA_DomainManagerList *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const CORBA_DomainManagerList *&);

#ifndef __ACE_INLINE__

TAO_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const CORBA_DomainManager_ptr );
TAO_Export CORBA::Boolean operator>> (TAO_InputCDR &, CORBA_DomainManager_ptr &);

#if !defined _TAO_CDR_OP_CORBA_DomainManagerList_H_
#define _TAO_CDR_OP_CORBA_DomainManagerList_H_

TAO_Export CORBA::Boolean operator<< (
    TAO_OutputCDR &,
    const CORBA_DomainManagerList &
  );
TAO_Export CORBA::Boolean operator>> (
    TAO_InputCDR &,
    CORBA_DomainManagerList &
  );

#endif /* _TAO_CDR_OP_CORBA_DomainManagerList_H_ */


#endif /* __ACE_INLINE__ */


#if defined (__ACE_INLINE__)
#include "DomainC.i"
#endif /* defined INLINE */

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#include "ace/post.h"
#endif /* ifndef */
