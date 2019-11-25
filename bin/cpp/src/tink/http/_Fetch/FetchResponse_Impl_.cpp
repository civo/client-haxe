// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif
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
#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
#endif
#ifndef INCLUDED_tink_http_IncomingResponse
#include <tink/http/IncomingResponse.h>
#endif
#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif
#ifndef INCLUDED_tink_http_ResponseHeaderBase
#include <tink/http/ResponseHeaderBase.h>
#endif
#ifndef INCLUDED_tink_http__Fetch_FetchResponse_Impl_
#include <tink/http/_Fetch/FetchResponse_Impl_.h>
#endif
#ifndef INCLUDED_tink_io_RealSourceTools
#include <tink/io/RealSourceTools.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1110096440d632d3_137_all,"tink.http._Fetch.FetchResponse_Impl_","all",0x12f1dd65,"tink.http._Fetch.FetchResponse_Impl_.all","tink/http/Fetch.hx",137,0xb84ee46e)
HX_LOCAL_STACK_FRAME(_hx_pos_1110096440d632d3_135_all,"tink.http._Fetch.FetchResponse_Impl_","all",0x12f1dd65,"tink.http._Fetch.FetchResponse_Impl_.all","tink/http/Fetch.hx",135,0xb84ee46e)
HX_LOCAL_STACK_FRAME(_hx_pos_1110096440d632d3_134_all,"tink.http._Fetch.FetchResponse_Impl_","all",0x12f1dd65,"tink.http._Fetch.FetchResponse_Impl_.all","tink/http/Fetch.hx",134,0xb84ee46e)
namespace tink{
namespace http{
namespace _Fetch{

void FetchResponse_Impl__obj::__construct() { }

Dynamic FetchResponse_Impl__obj::__CreateEmpty() { return new FetchResponse_Impl__obj; }

void *FetchResponse_Impl__obj::_hx_vtable = 0;

Dynamic FetchResponse_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FetchResponse_Impl__obj > _hx_result = new FetchResponse_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FetchResponse_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x28b265e6;
}

::Dynamic FetchResponse_Impl__obj::all(::Dynamic this1){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		::Dynamic _hx_run( ::tink::http::IncomingResponse r){
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::tink::http::IncomingResponse,r) HXARGC(1)
            			::Dynamic _hx_run(::Dynamic chunk){
            				HX_GC_STACKFRAME(&_hx_pos_1110096440d632d3_137_all)
HXLINE( 137)				if ((( ( ::tink::http::ResponseHeaderBase)(r->header) )->statusCode >= 400)) {
HXLINE( 138)					 ::Dynamic r1 = ( ( ::tink::http::ResponseHeaderBase)(r->header) )->statusCode;
HXDLIN( 138)					::String r2 = ( ( ::tink::http::ResponseHeaderBase)(r->header) )->reason;
HXDLIN( 138)					::String e = ::tink::chunk::ChunkObject_obj::toString(chunk);
HXDLIN( 138)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Failure(::tink::core::TypedError_obj::withData(r1,r2,e,hx::SourceInfo(HX_("tink/http/Fetch.hx",6e,e4,4e,b8),138,HX_("tink.http._Fetch.FetchResponse_Impl_",b2,d2,9b,e7),HX_("all",21,f9,49,00))))));
            				}
            				else {
HXLINE( 140)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success( ::tink::http::Message_obj::__alloc( HX_CTX ,r->header,chunk))));
            				}
HXLINE( 137)				return null();
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_STACKFRAME(&_hx_pos_1110096440d632d3_135_all)
HXLINE( 135)			return ::tink::core::_Promise::Promise_Impl__obj::next(::tink::io::RealSourceTools_obj::all(r->body), ::Dynamic(new _hx_Closure_0(r)),null());
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_1110096440d632d3_134_all)
HXDLIN( 134)		return ::tink::core::_Promise::Promise_Impl__obj::next(this1, ::Dynamic(new _hx_Closure_1()),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FetchResponse_Impl__obj,all,return )


FetchResponse_Impl__obj::FetchResponse_Impl__obj()
{
}

bool FetchResponse_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { outValue = all_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *FetchResponse_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FetchResponse_Impl__obj_sStaticStorageInfo = 0;
#endif

hx::Class FetchResponse_Impl__obj::__mClass;

static ::String FetchResponse_Impl__obj_sStaticFields[] = {
	HX_("all",21,f9,49,00),
	::String(null())
};

void FetchResponse_Impl__obj::__register()
{
	FetchResponse_Impl__obj _hx_dummy;
	FetchResponse_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("tink.http._Fetch.FetchResponse_Impl_",b2,d2,9b,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FetchResponse_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FetchResponse_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FetchResponse_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FetchResponse_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FetchResponse_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
} // end namespace _Fetch
