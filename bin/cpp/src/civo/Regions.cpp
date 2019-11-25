// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_civo_Regions
#include <civo/Regions.h>
#endif
#ifndef INCLUDED_civo_net_CivoHttp
#include <civo/net/CivoHttp.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_13e0ab666b742139_19_available_regions,"civo.Regions","available_regions",0x8e92822b,"civo.Regions.available_regions","civo/Regions.hx",19,0xae80272f)
HX_LOCAL_STACK_FRAME(_hx_pos_13e0ab666b742139_16_boot,"civo.Regions","boot",0x227d5890,"civo.Regions.boot","civo/Regions.hx",16,0xae80272f)
namespace civo{

void Regions_obj::__construct() { }

Dynamic Regions_obj::__CreateEmpty() { return new Regions_obj; }

void *Regions_obj::_hx_vtable = 0;

Dynamic Regions_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Regions_obj > _hx_result = new Regions_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Regions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x060c3188;
}

::String Regions_obj::path;

void Regions_obj::available_regions(::String token, ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_13e0ab666b742139_19_available_regions)
HXDLIN(  19)		::civo::net::CivoHttp_obj::get(token,::civo::Regions_obj::path,handler,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Regions_obj,available_regions,(void))


Regions_obj::Regions_obj()
{
}

bool Regions_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { outValue = ( path ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"available_regions") ) { outValue = available_regions_dyn(); return true; }
	}
	return false;
}

bool Regions_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Regions_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Regions_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Regions_obj::path,HX_("path",a5,e5,51,4a)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Regions_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Regions_obj::path,"path");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Regions_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Regions_obj::path,"path");
};

#endif

hx::Class Regions_obj::__mClass;

static ::String Regions_obj_sStaticFields[] = {
	HX_("path",a5,e5,51,4a),
	HX_("available_regions",49,39,e4,73),
	::String(null())
};

void Regions_obj::__register()
{
	Regions_obj _hx_dummy;
	Regions_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("civo.Regions",d0,e8,3e,f0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Regions_obj::__GetStatic;
	__mClass->mSetStaticField = &Regions_obj::__SetStatic;
	__mClass->mMarkFunc = Regions_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Regions_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Regions_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Regions_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Regions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Regions_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Regions_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_13e0ab666b742139_16_boot)
HXDLIN(  16)		path = HX_("/regions",b0,08,df,fa);
            	}
}

} // end namespace civo
