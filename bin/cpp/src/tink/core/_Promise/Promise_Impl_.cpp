// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
#endif
#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_core__Future_SyncFuture
#include <tink/core/_Future/SyncFuture.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyConst
#include <tink/core/_Lazy/LazyConst.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif
#ifndef INCLUDED_tink_core__Promise_Promise_Impl_
#include <tink/core/_Promise/Promise_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_58_next,"tink.core._Promise.Promise_Impl_","next",0x21fa5785,"tink.core._Promise.Promise_Impl_.next","tink/core/Promise.hx",58,0x59ef4bb6)
namespace tink{
namespace core{
namespace _Promise{

void Promise_Impl__obj::__construct() { }

Dynamic Promise_Impl__obj::__CreateEmpty() { return new Promise_Impl__obj; }

void *Promise_Impl__obj::_hx_vtable = 0;

Dynamic Promise_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Promise_Impl__obj > _hx_result = new Promise_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Promise_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x433cbcae;
}

::Dynamic Promise_Impl__obj::next(::Dynamic this1, ::Dynamic f, ::Dynamic __o_gather){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            		::Dynamic _hx_run( ::tink::core::Outcome o){
            			HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_58_next)
HXDLIN(  58)			switch((int)(o->_hx_getIndex())){
            				case (int)0: {
HXLINE(  59)					 ::Dynamic d = o->_hx_getObject(0);
HXDLIN(  59)					return f(d);
            				}
            				break;
            				case (int)1: {
HXLINE(  60)					 ::tink::core::TypedError f1 = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXDLIN(  60)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Failure(f1)));
            				}
            				break;
            			}
HXLINE(  58)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            		 ::Dynamic gather = __o_gather;
            		if (hx::IsNull(__o_gather)) gather = true;
            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_58_next)
HXDLIN(  58)		 ::Dynamic gather1 = gather;
HXLINE(  50)		if (hx::IsNull( gather1 )) {
HXLINE(  50)			gather1 = true;
            		}
HXLINE(  58)		::Dynamic ret = ::tink::core::_Future::FutureObject_obj::flatMap(this1, ::Dynamic(new _hx_Closure_0(f)));
HXDLIN(  58)		if (( (bool)(gather1) )) {
HXDLIN(  58)			return ::tink::core::_Future::FutureObject_obj::gather(ret);
            		}
            		else {
HXDLIN(  58)			return ret;
            		}
HXDLIN(  58)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Promise_Impl__obj,next,return )


Promise_Impl__obj::Promise_Impl__obj()
{
}

bool Promise_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { outValue = next_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Promise_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Promise_Impl__obj_sStaticStorageInfo = 0;
#endif

hx::Class Promise_Impl__obj::__mClass;

static ::String Promise_Impl__obj_sStaticFields[] = {
	HX_("next",f3,84,02,49),
	::String(null())
};

void Promise_Impl__obj::__register()
{
	Promise_Impl__obj _hx_dummy;
	Promise_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("tink.core._Promise.Promise_Impl_",1c,97,51,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Promise_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Promise_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Promise_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Promise_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Promise_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Promise
