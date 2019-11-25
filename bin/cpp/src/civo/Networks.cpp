// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_civo_Networks
#include <civo/Networks.h>
#endif
#ifndef INCLUDED_civo_net_CivoHttp
#include <civo/net/CivoHttp.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_40a91f996b796ab5_16_create,"civo.Networks","create",0x690eb116,"civo.Networks.create","civo/Networks.hx",16,0x00d57dc9)
HX_LOCAL_STACK_FRAME(_hx_pos_40a91f996b796ab5_20_list,"civo.Networks","list",0x3f73cbf8,"civo.Networks.list","civo/Networks.hx",20,0x00d57dc9)
HX_LOCAL_STACK_FRAME(_hx_pos_40a91f996b796ab5_24_rename,"civo.Networks","rename",0xf2267598,"civo.Networks.rename","civo/Networks.hx",24,0x00d57dc9)
HX_LOCAL_STACK_FRAME(_hx_pos_40a91f996b796ab5_28_delete,"civo.Networks","delete",0x57d80a45,"civo.Networks.delete","civo/Networks.hx",28,0x00d57dc9)
HX_LOCAL_STACK_FRAME(_hx_pos_40a91f996b796ab5_13_boot,"civo.Networks","boot",0x38dc33cc,"civo.Networks.boot","civo/Networks.hx",13,0x00d57dc9)
namespace civo{

void Networks_obj::__construct() { }

Dynamic Networks_obj::__CreateEmpty() { return new Networks_obj; }

void *Networks_obj::_hx_vtable = 0;

Dynamic Networks_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Networks_obj > _hx_result = new Networks_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Networks_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7459c304;
}

::String Networks_obj::path;

void Networks_obj::create(::String token,::String label, ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_40a91f996b796ab5_16_create)
HXDLIN(  16)		::civo::net::CivoHttp_obj::post(token,::civo::Networks_obj::path,handler, ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("label",f4,0d,af,6f),label)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Networks_obj,create,(void))

void Networks_obj::list(::String token, ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_40a91f996b796ab5_20_list)
HXDLIN(  20)		::civo::net::CivoHttp_obj::get(token,::civo::Networks_obj::path,handler,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Networks_obj,list,(void))

void Networks_obj::rename(::String token,::String network_id,::String label, ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_40a91f996b796ab5_24_rename)
HXDLIN(  24)		::civo::net::CivoHttp_obj::put(token,(((HX_("",00,00,00,00) + ::civo::Networks_obj::path) + HX_("/",2f,00,00,00)) + network_id),handler, ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("label",f4,0d,af,6f),label)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Networks_obj,rename,(void))

void Networks_obj::_hx_delete(::String token,::String network_id, ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_40a91f996b796ab5_28_delete)
HXDLIN(  28)		::civo::net::CivoHttp_obj::_hx_delete(token,(((HX_("",00,00,00,00) + ::civo::Networks_obj::path) + HX_("/",2f,00,00,00)) + network_id),handler,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Networks_obj,_hx_delete,(void))


Networks_obj::Networks_obj()
{
}

bool Networks_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { outValue = ( path ); return true; }
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rename") ) { outValue = rename_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"delete") ) { outValue = _hx_delete_dyn(); return true; }
	}
	return false;
}

bool Networks_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Networks_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Networks_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Networks_obj::path,HX_("path",a5,e5,51,4a)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Networks_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Networks_obj::path,"path");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Networks_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Networks_obj::path,"path");
};

#endif

hx::Class Networks_obj::__mClass;

static ::String Networks_obj_sStaticFields[] = {
	HX_("path",a5,e5,51,4a),
	HX_("create",fc,66,0f,7c),
	HX_("list",5e,1c,b3,47),
	HX_("rename",7e,2b,27,05),
	HX_("delete",2b,c0,d8,6a),
	::String(null())
};

void Networks_obj::__register()
{
	Networks_obj _hx_dummy;
	Networks_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("civo.Networks",14,d7,45,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Networks_obj::__GetStatic;
	__mClass->mSetStaticField = &Networks_obj::__SetStatic;
	__mClass->mMarkFunc = Networks_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Networks_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Networks_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Networks_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Networks_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Networks_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Networks_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_40a91f996b796ab5_13_boot)
HXDLIN(  13)		path = HX_("/networks",34,9b,c1,e5);
            	}
}

} // end namespace civo
