// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_io_ParseResult
#include <tink/io/ParseResult.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
namespace tink{
namespace io{

::tink::io::ParseResult ParseResult_obj::Broke( ::tink::core::TypedError e)
{
	return hx::CreateEnum< ParseResult_obj >(HX_("Broke",d9,33,21,4c),2,1)->_hx_init(0,e);
}

::tink::io::ParseResult ParseResult_obj::Invalid( ::tink::core::TypedError e,::Dynamic rest)
{
	return hx::CreateEnum< ParseResult_obj >(HX_("Invalid",d7,02,99,08),1,2)->_hx_init(0,e)->_hx_init(1,rest);
}

::tink::io::ParseResult ParseResult_obj::Parsed( ::Dynamic data,::Dynamic rest)
{
	return hx::CreateEnum< ParseResult_obj >(HX_("Parsed",f1,10,1d,22),0,2)->_hx_init(0,data)->_hx_init(1,rest);
}

bool ParseResult_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Broke",d9,33,21,4c)) { outValue = ParseResult_obj::Broke_dyn(); return true; }
	if (inName==HX_("Invalid",d7,02,99,08)) { outValue = ParseResult_obj::Invalid_dyn(); return true; }
	if (inName==HX_("Parsed",f1,10,1d,22)) { outValue = ParseResult_obj::Parsed_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ParseResult_obj)

int ParseResult_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Broke",d9,33,21,4c)) return 2;
	if (inName==HX_("Invalid",d7,02,99,08)) return 1;
	if (inName==HX_("Parsed",f1,10,1d,22)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ParseResult_obj,Broke,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ParseResult_obj,Invalid,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ParseResult_obj,Parsed,return)

int ParseResult_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Broke",d9,33,21,4c)) return 1;
	if (inName==HX_("Invalid",d7,02,99,08)) return 2;
	if (inName==HX_("Parsed",f1,10,1d,22)) return 2;
	return super::__FindArgCount(inName);
}

hx::Val ParseResult_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Broke",d9,33,21,4c)) return Broke_dyn();
	if (inName==HX_("Invalid",d7,02,99,08)) return Invalid_dyn();
	if (inName==HX_("Parsed",f1,10,1d,22)) return Parsed_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String ParseResult_obj_sStaticFields[] = {
	HX_("Parsed",f1,10,1d,22),
	HX_("Invalid",d7,02,99,08),
	HX_("Broke",d9,33,21,4c),
	::String(null())
};

hx::Class ParseResult_obj::__mClass;

Dynamic __Create_ParseResult_obj() { return new ParseResult_obj; }

void ParseResult_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("tink.io.ParseResult",c4,44,ed,6f), hx::TCanCast< ParseResult_obj >,ParseResult_obj_sStaticFields,0,
	&__Create_ParseResult_obj, &__Create,
	&super::__SGetClass(), &CreateParseResult_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ParseResult_obj::__GetStatic;
}

void ParseResult_obj::__boot()
{
}


} // end namespace tink
} // end namespace io
