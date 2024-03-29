// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif
#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyConst
#include <tink/core/_Lazy/LazyConst.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif
#ifndef INCLUDED_tink_io_PipeResult
#include <tink/io/PipeResult.h>
#endif
#ifndef INCLUDED_tink_io_PipeResultTools
#include <tink/io/PipeResultTools.h>
#endif
#ifndef INCLUDED_tink_streams_Conclusion
#include <tink/streams/Conclusion.h>
#endif
#ifndef INCLUDED_tink_streams_Single
#include <tink/streams/Single.h>
#endif
#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_921022ef068a1d3e_31_toResult,"tink.io.PipeResultTools","toResult",0xeeaa3ea2,"tink.io.PipeResultTools.toResult","tink/io/PipeResult.hx",31,0x8758c9a7)
HX_LOCAL_STACK_FRAME(_hx_pos_921022ef068a1d3e_28_toResult,"tink.io.PipeResultTools","toResult",0xeeaa3ea2,"tink.io.PipeResultTools.toResult","tink/io/PipeResult.hx",28,0x8758c9a7)
namespace tink{
namespace io{

void PipeResultTools_obj::__construct() { }

Dynamic PipeResultTools_obj::__CreateEmpty() { return new PipeResultTools_obj; }

void *PipeResultTools_obj::_hx_vtable = 0;

Dynamic PipeResultTools_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PipeResultTools_obj > _hx_result = new PipeResultTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PipeResultTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x25ab83f8;
}

 ::tink::io::PipeResult PipeResultTools_obj::toResult( ::tink::streams::Conclusion c, ::Dynamic result,::Dynamic buffered){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0,::Dynamic,buffered) HXARGC(1)
            		::Dynamic _hx_run(::Dynamic s){
            			HX_GC_STACKFRAME(&_hx_pos_921022ef068a1d3e_31_toResult)
HXLINE(  31)			if (hx::IsNull( buffered )) {
HXLINE(  32)				return s;
            			}
            			else {
HXLINE(  33)				::Dynamic v = buffered;
HXDLIN(  33)				return ::tink::streams::StreamObject_obj::prepend(s, ::tink::streams::Single_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,v)));
            			}
HXLINE(  31)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_921022ef068a1d3e_28_toResult)
HXLINE(  30)		 ::Dynamic mk =  ::Dynamic(new _hx_Closure_0(buffered));
HXLINE(  36)		switch((int)(c->_hx_getIndex())){
            			case (int)0: {
HXLINE(  40)				::Dynamic rest = c->_hx_getObject(0);
HXDLIN(  40)				return ::tink::io::PipeResult_obj::SinkEnded(result,mk(rest));
            			}
            			break;
            			case (int)1: {
HXLINE(  38)				::Dynamic rest1 = c->_hx_getObject(1);
HXDLIN(  38)				 ::tink::core::TypedError e = c->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN(  38)				return ::tink::io::PipeResult_obj::SinkFailed(e,mk(rest1));
            			}
            			break;
            			case (int)2: {
HXLINE(  37)				 ::tink::core::TypedError e1 = c->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN(  37)				return ::tink::io::PipeResult_obj::SourceFailed(e1);
            			}
            			break;
            			case (int)3: {
HXLINE(  39)				return ::tink::io::PipeResult_obj::AllWritten_dyn();
            			}
            			break;
            		}
HXLINE(  36)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PipeResultTools_obj,toResult,return )


PipeResultTools_obj::PipeResultTools_obj()
{
}

bool PipeResultTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toResult") ) { outValue = toResult_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *PipeResultTools_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PipeResultTools_obj_sStaticStorageInfo = 0;
#endif

hx::Class PipeResultTools_obj::__mClass;

static ::String PipeResultTools_obj_sStaticFields[] = {
	HX_("toResult",b8,10,c3,2f),
	::String(null())
};

void PipeResultTools_obj::__register()
{
	PipeResultTools_obj _hx_dummy;
	PipeResultTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("tink.io.PipeResultTools",c4,97,f2,bf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PipeResultTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(PipeResultTools_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PipeResultTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PipeResultTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PipeResultTools_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace io
