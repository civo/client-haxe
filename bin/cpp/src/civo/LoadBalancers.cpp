// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_civo_LoadBalancers
#include <civo/LoadBalancers.h>
#endif
#ifndef INCLUDED_civo_net_CivoHttp
#include <civo/net/CivoHttp.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3b11393aee184902_17_list,"civo.LoadBalancers","list",0xeb509b24,"civo.LoadBalancers.list","civo/LoadBalancers.hx",17,0x19d24e57)
HX_LOCAL_STACK_FRAME(_hx_pos_3b11393aee184902_21_create,"civo.LoadBalancers","create",0x611ea342,"civo.LoadBalancers.create","civo/LoadBalancers.hx",21,0x19d24e57)
HX_LOCAL_STACK_FRAME(_hx_pos_3b11393aee184902_25_update,"civo.LoadBalancers","update",0x6c14c24f,"civo.LoadBalancers.update","civo/LoadBalancers.hx",25,0x19d24e57)
HX_LOCAL_STACK_FRAME(_hx_pos_3b11393aee184902_29_delete,"civo.LoadBalancers","delete",0x4fe7fc71,"civo.LoadBalancers.delete","civo/LoadBalancers.hx",29,0x19d24e57)
HX_LOCAL_STACK_FRAME(_hx_pos_3b11393aee184902_14_boot,"civo.LoadBalancers","boot",0xe4b902f8,"civo.LoadBalancers.boot","civo/LoadBalancers.hx",14,0x19d24e57)
namespace civo{

void LoadBalancers_obj::__construct() { }

Dynamic LoadBalancers_obj::__CreateEmpty() { return new LoadBalancers_obj; }

void *LoadBalancers_obj::_hx_vtable = 0;

Dynamic LoadBalancers_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LoadBalancers_obj > _hx_result = new LoadBalancers_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LoadBalancers_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x37f22578;
}

::String LoadBalancers_obj::path;

void LoadBalancers_obj::list(::String token, ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_3b11393aee184902_17_list)
HXDLIN(  17)		::civo::net::CivoHttp_obj::get(token,::civo::LoadBalancers_obj::path,handler,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoadBalancers_obj,list,(void))

void LoadBalancers_obj::create(::String token, ::Dynamic params, ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_3b11393aee184902_21_create)
HXDLIN(  21)		::civo::net::CivoHttp_obj::post(token,::civo::LoadBalancers_obj::path,handler,params);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(LoadBalancers_obj,create,(void))

void LoadBalancers_obj::update(::String token,::String lb_id, ::Dynamic params, ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_3b11393aee184902_25_update)
HXDLIN(  25)		::civo::net::CivoHttp_obj::put(token,(((HX_("",00,00,00,00) + ::civo::LoadBalancers_obj::path) + HX_("/",2f,00,00,00)) + lb_id),handler,params);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(LoadBalancers_obj,update,(void))

void LoadBalancers_obj::_hx_delete(::String token,::String lb_id, ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_3b11393aee184902_29_delete)
HXDLIN(  29)		::civo::net::CivoHttp_obj::_hx_delete(token,(((HX_("",00,00,00,00) + ::civo::LoadBalancers_obj::path) + HX_("/",2f,00,00,00)) + lb_id),handler,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(LoadBalancers_obj,_hx_delete,(void))


LoadBalancers_obj::LoadBalancers_obj()
{
}

bool LoadBalancers_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { outValue = ( path ); return true; }
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"delete") ) { outValue = _hx_delete_dyn(); return true; }
	}
	return false;
}

bool LoadBalancers_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *LoadBalancers_obj_sMemberStorageInfo = 0;
static hx::StaticInfo LoadBalancers_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &LoadBalancers_obj::path,HX_("path",a5,e5,51,4a)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void LoadBalancers_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoadBalancers_obj::path,"path");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LoadBalancers_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoadBalancers_obj::path,"path");
};

#endif

hx::Class LoadBalancers_obj::__mClass;

static ::String LoadBalancers_obj_sStaticFields[] = {
	HX_("path",a5,e5,51,4a),
	HX_("list",5e,1c,b3,47),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("delete",2b,c0,d8,6a),
	::String(null())
};

void LoadBalancers_obj::__register()
{
	LoadBalancers_obj _hx_dummy;
	LoadBalancers_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("civo.LoadBalancers",68,57,73,59);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LoadBalancers_obj::__GetStatic;
	__mClass->mSetStaticField = &LoadBalancers_obj::__SetStatic;
	__mClass->mMarkFunc = LoadBalancers_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LoadBalancers_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LoadBalancers_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LoadBalancers_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LoadBalancers_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LoadBalancers_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LoadBalancers_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3b11393aee184902_14_boot)
HXDLIN(  14)		path = HX_("/loadbalancers",68,bf,69,f6);
            	}
}

} // end namespace civo
