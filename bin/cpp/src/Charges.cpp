// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_Charges
#include <Charges.h>
#endif
#ifndef INCLUDED_civo_net_CivoHttp
#include <civo/net/CivoHttp.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fe9cdebb418aaadb_8_list,"Charges","list",0x859d7fcd,"Charges.list","Charges.hx",8,0xd89db4bf)

void Charges_obj::__construct() { }

Dynamic Charges_obj::__CreateEmpty() { return new Charges_obj; }

void *Charges_obj::_hx_vtable = 0;

Dynamic Charges_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Charges_obj > _hx_result = new Charges_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Charges_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4c2bdb97;
}

void Charges_obj::list(::String token, ::Dynamic handler,::String from,::String to){
            	HX_STACKFRAME(&_hx_pos_fe9cdebb418aaadb_8_list)
HXDLIN(   8)		::civo::net::CivoHttp_obj::get(token,HX_("/charges",30,7f,b4,4f),handler, ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("to",7b,65,00,00),to)
            			->setFixed(1,HX_("from",6a,a5,c2,43),from)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Charges_obj,list,(void))


Charges_obj::Charges_obj()
{
}

bool Charges_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Charges_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Charges_obj_sStaticStorageInfo = 0;
#endif

hx::Class Charges_obj::__mClass;

static ::String Charges_obj_sStaticFields[] = {
	HX_("list",5e,1c,b3,47),
	::String(null())
};

void Charges_obj::__register()
{
	Charges_obj _hx_dummy;
	Charges_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("Charges",5f,b3,c2,9c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Charges_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Charges_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Charges_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Charges_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Charges_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

