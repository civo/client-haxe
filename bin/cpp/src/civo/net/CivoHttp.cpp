// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_civo_net_CivoHttp
#include <civo/net/CivoHttp.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_tink__Url_Url_Impl_
#include <tink/_Url/Url_Impl_.h>
#endif
#ifndef INCLUDED_tink_chunk_ByteChunk
#include <tink/chunk/ByteChunk.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkBase
#include <tink/chunk/ChunkBase.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core_NamedWith
#include <tink/core/NamedWith.h>
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
#ifndef INCLUDED_tink_core__Lazy_LazyConst
#include <tink/core/_Lazy/LazyConst.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif
#ifndef INCLUDED_tink_http_Fetch
#include <tink/http/Fetch.h>
#endif
#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
#endif
#ifndef INCLUDED_tink_http_HeaderField
#include <tink/http/HeaderField.h>
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
#ifndef INCLUDED_tink_http__Header_HeaderValue_Impl_
#include <tink/http/_Header/HeaderValue_Impl_.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_b1d8ae0ee4ee4976_12_url,"civo.net.CivoHttp","url",0x3b1902c8,"civo.net.CivoHttp.url","civo/net/CivoHttp.hx",12,0xc7c40895)
HX_LOCAL_STACK_FRAME(_hx_pos_b1d8ae0ee4ee4976_16_get,"civo.net.CivoHttp","get",0x3b0e57ef,"civo.net.CivoHttp.get","civo/net/CivoHttp.hx",16,0xc7c40895)
HX_LOCAL_STACK_FRAME(_hx_pos_b1d8ae0ee4ee4976_20_put,"civo.net.CivoHttp","put",0x3b153a28,"civo.net.CivoHttp.put","civo/net/CivoHttp.hx",20,0xc7c40895)
HX_LOCAL_STACK_FRAME(_hx_pos_b1d8ae0ee4ee4976_24_post,"civo.net.CivoHttp","post",0x77791ae7,"civo.net.CivoHttp.post","civo/net/CivoHttp.hx",24,0xc7c40895)
HX_LOCAL_STACK_FRAME(_hx_pos_b1d8ae0ee4ee4976_28_delete,"civo.net.CivoHttp","delete",0x892d4672,"civo.net.CivoHttp.delete","civo/net/CivoHttp.hx",28,0xc7c40895)
HX_LOCAL_STACK_FRAME(_hx_pos_b1d8ae0ee4ee4976_46_request,"civo.net.CivoHttp","request",0xb025d728,"civo.net.CivoHttp.request","civo/net/CivoHttp.hx",46,0xc7c40895)
HX_LOCAL_STACK_FRAME(_hx_pos_b1d8ae0ee4ee4976_31_request,"civo.net.CivoHttp","request",0xb025d728,"civo.net.CivoHttp.request","civo/net/CivoHttp.hx",31,0xc7c40895)
namespace civo{
namespace net{

void CivoHttp_obj::__construct() { }

Dynamic CivoHttp_obj::__CreateEmpty() { return new CivoHttp_obj; }

void *CivoHttp_obj::_hx_vtable = 0;

Dynamic CivoHttp_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CivoHttp_obj > _hx_result = new CivoHttp_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CivoHttp_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0d3590c5;
}

::String CivoHttp_obj::url(::String path){
            	HX_STACKFRAME(&_hx_pos_b1d8ae0ee4ee4976_12_url)
HXDLIN(  12)		return (HX_("https://api.civo.com/v2",b6,86,01,6a) + path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CivoHttp_obj,url,return )

::Dynamic CivoHttp_obj::get(::String token,::String path, ::Dynamic handler, ::Dynamic params){
            	HX_STACKFRAME(&_hx_pos_b1d8ae0ee4ee4976_16_get)
HXDLIN(  16)		return ::civo::net::CivoHttp_obj::request(HX_("GET",76,1c,36,00),token,path,handler,params);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CivoHttp_obj,get,return )

::Dynamic CivoHttp_obj::put(::String token,::String path, ::Dynamic handler, ::Dynamic params){
            	HX_STACKFRAME(&_hx_pos_b1d8ae0ee4ee4976_20_put)
HXDLIN(  20)		return ::civo::net::CivoHttp_obj::request(HX_("PUT",af,fe,3c,00),token,path,handler,params);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CivoHttp_obj,put,return )

::Dynamic CivoHttp_obj::post(::String token,::String path, ::Dynamic handler, ::Dynamic params){
            	HX_STACKFRAME(&_hx_pos_b1d8ae0ee4ee4976_24_post)
HXDLIN(  24)		return ::civo::net::CivoHttp_obj::request(HX_("POST",60,4c,1d,35),token,path,handler,params);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CivoHttp_obj,post,return )

::Dynamic CivoHttp_obj::_hx_delete(::String token,::String path, ::Dynamic handler, ::Dynamic params){
            	HX_STACKFRAME(&_hx_pos_b1d8ae0ee4ee4976_28_delete)
HXDLIN(  28)		return ::civo::net::CivoHttp_obj::request(HX_("DELETE",2b,6c,5b,1d),token,path,handler,params);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CivoHttp_obj,_hx_delete,return )

::Dynamic CivoHttp_obj::request(::String method,::String token,::String path, ::Dynamic handler, ::Dynamic params){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,handler) HXARGC(1)
            		void _hx_run( ::tink::core::Outcome o){
            			HX_GC_STACKFRAME(&_hx_pos_b1d8ae0ee4ee4976_46_request)
HXLINE(  46)			switch((int)(o->_hx_getIndex())){
            				case (int)0: {
HXLINE(  47)					 ::tink::http::Message res = ( ( ::tink::http::Message)(o->_hx_getObject(0)) );
HXDLIN(  47)					{
HXLINE(  48)						::String body1;
HXDLIN(  48)						bool body2;
HXDLIN(  48)						if (hx::IsNotNull( res->body )) {
HXLINE(  48)							body2 = (::tink::chunk::ChunkObject_obj::toString(res->body) != HX_("",00,00,00,00));
            						}
            						else {
HXLINE(  48)							body2 = false;
            						}
HXDLIN(  48)						if (body2) {
HXLINE(  48)							body1 = ( (::String)( ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,::tink::chunk::ChunkObject_obj::toString(res->body))->doParse()) );
            						}
            						else {
HXLINE(  48)							body1 = null();
            						}
HXLINE(  49)						handler(( ( ::tink::http::ResponseHeaderBase)(res->header) )->statusCode,body1);
            					}
            				}
            				break;
            				case (int)1: {
HXLINE(  50)					 ::tink::core::TypedError res1 = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXDLIN(  50)					{
HXLINE(  51)						::String body3;
HXDLIN(  51)						bool body4;
HXDLIN(  51)						if (hx::IsNotNull( res1->data )) {
HXLINE(  51)							body4 = hx::IsNotEq( res1->data,HX_("",00,00,00,00) );
            						}
            						else {
HXLINE(  51)							body4 = false;
            						}
HXDLIN(  51)						if (body4) {
HXLINE(  51)							body3 = ( (::String)( ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,( (::String)(res1->data) ))->doParse()) );
            						}
            						else {
HXLINE(  51)							body3 = res1->message;
            						}
HXLINE(  52)						handler(res1->code,body3);
            					}
            				}
            				break;
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_b1d8ae0ee4ee4976_31_request)
HXLINE(  32)		::String uri = ::civo::net::CivoHttp_obj::url(path);
HXLINE(  34)		::String body;
HXDLIN(  34)		if (hx::IsNotNull( params )) {
HXLINE(  34)			 ::Dynamic replacer = null();
HXDLIN(  34)			::String space = null();
HXDLIN(  34)			body = ::haxe::format::JsonPrinter_obj::print(params,replacer,space);
            		}
            		else {
HXLINE(  34)			body = HX_("",00,00,00,00);
            		}
HXLINE(  36)		::String this1 = HX_("Content-Type",ce,69,5d,3c).toLowerCase();
HXDLIN(  36)		 ::tink::http::HeaderField headers =  ::tink::http::HeaderField_obj::__alloc( HX_CTX ,this1,HX_("application/json",87,d8,7f,4e));
HXLINE(  37)		::String this2 = HX_("Content-Length",fa,f8,b6,65).toLowerCase();
HXDLIN(  37)		 ::tink::http::HeaderField headers1 =  ::tink::http::HeaderField_obj::__alloc( HX_CTX ,this2,::tink::http::_Header::HeaderValue_Impl__obj::ofInt(body.length));
HXLINE(  38)		::String this3 = HX_("Authorization",d9,69,3c,31).toLowerCase();
HXLINE(  35)		::Array< ::Dynamic> headers2 = ::Array_obj< ::Dynamic>::__new(3)->init(0,headers)->init(1,headers1)->init(2, ::tink::http::HeaderField_obj::__alloc( HX_CTX ,this3,(HX_("Bearer ",ff,ad,19,40) + token)));
HXLINE(  41)		 ::Dynamic url = ::tink::_Url::Url_Impl__obj::fromString(uri);
HXDLIN(  41)		return ::tink::core::_Future::FutureObject_obj::handle(::tink::http::_Fetch::FetchResponse_Impl__obj::all(::tink::http::Fetch_obj::fetch(url, ::Dynamic(hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("method",e1,f6,5a,09),method)
            			->setFixed(1,HX_("body",a2,7a,1b,41), ::tink::streams::Single_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::chunk::ByteChunk_obj::of(::haxe::io::Bytes_obj::ofString(body,null())))))
            			->setFixed(2,HX_("headers",46,52,08,63),headers2)))), ::Dynamic(new _hx_Closure_0(handler)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CivoHttp_obj,request,return )


CivoHttp_obj::CivoHttp_obj()
{
}

bool CivoHttp_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { outValue = url_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"put") ) { outValue = put_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"post") ) { outValue = post_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"delete") ) { outValue = _hx_delete_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { outValue = request_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *CivoHttp_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CivoHttp_obj_sStaticStorageInfo = 0;
#endif

hx::Class CivoHttp_obj::__mClass;

static ::String CivoHttp_obj_sStaticFields[] = {
	HX_("url",6f,2b,59,00),
	HX_("get",96,80,4e,00),
	HX_("put",cf,62,55,00),
	HX_("post",60,84,5c,4a),
	HX_("delete",2b,c0,d8,6a),
	HX_("request",4f,df,84,44),
	::String(null())
};

void CivoHttp_obj::__register()
{
	CivoHttp_obj _hx_dummy;
	CivoHttp_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("civo.net.CivoHttp",47,57,ed,63);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CivoHttp_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CivoHttp_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CivoHttp_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CivoHttp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CivoHttp_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace civo
} // end namespace net
