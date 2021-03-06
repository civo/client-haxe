// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core__Callback_CallbackList_Impl_
#include <tink/core/_Callback/CallbackList_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Callback_Callback_Impl_
#include <tink/core/_Callback/Callback_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Callback_ListCell
#include <tink/core/_Callback/ListCell.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fd28a8b3e9ec0864_159_add,"tink.core._Callback.CallbackList_Impl_","add",0x29b71553,"tink.core._Callback.CallbackList_Impl_.add","tink/core/Callback.hx",159,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_fd28a8b3e9ec0864_166_invoke,"tink.core._Callback.CallbackList_Impl_","invoke",0x9c17df86,"tink.core._Callback.CallbackList_Impl_.invoke","tink/core/Callback.hx",166,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_fd28a8b3e9ec0864_170_clear,"tink.core._Callback.CallbackList_Impl_","clear",0x81bd453f,"tink.core._Callback.CallbackList_Impl_.clear","tink/core/Callback.hx",170,0x0104eb06)
namespace tink{
namespace core{
namespace _Callback{

void CallbackList_Impl__obj::__construct() { }

Dynamic CallbackList_Impl__obj::__CreateEmpty() { return new CallbackList_Impl__obj; }

void *CallbackList_Impl__obj::_hx_vtable = 0;

Dynamic CallbackList_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CallbackList_Impl__obj > _hx_result = new CallbackList_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CallbackList_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x17f0bab2;
}

::Dynamic CallbackList_Impl__obj::add(::Array< ::Dynamic> this1, ::Dynamic cb){
            	HX_GC_STACKFRAME(&_hx_pos_fd28a8b3e9ec0864_159_add)
HXLINE( 160)		 ::tink::core::_Callback::ListCell node =  ::tink::core::_Callback::ListCell_obj::__alloc( HX_CTX ,cb,this1);
HXLINE( 161)		this1->push(node);
HXLINE( 162)		return node;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CallbackList_Impl__obj,add,return )

void CallbackList_Impl__obj::invoke(::Array< ::Dynamic> this1, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_fd28a8b3e9ec0864_166_invoke)
HXDLIN( 166)		int _g = 0;
HXDLIN( 166)		::Array< ::Dynamic> _g1 = this1->copy();
HXDLIN( 166)		while((_g < _g1->length)){
HXDLIN( 166)			 ::tink::core::_Callback::ListCell cell = _g1->__get(_g).StaticCast<  ::tink::core::_Callback::ListCell >();
HXDLIN( 166)			_g = (_g + 1);
HXLINE( 167)			if (hx::IsNotNull( cell->cb )) {
HXLINE( 167)				::tink::core::_Callback::Callback_Impl__obj::invoke(cell->cb,data);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CallbackList_Impl__obj,invoke,(void))

void CallbackList_Impl__obj::clear(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_fd28a8b3e9ec0864_170_clear)
HXDLIN( 170)		int _g = 0;
HXDLIN( 170)		::Array< ::Dynamic> _g1 = this1->splice(0,this1->length);
HXDLIN( 170)		while((_g < _g1->length)){
HXDLIN( 170)			 ::tink::core::_Callback::ListCell cell = _g1->__get(_g).StaticCast<  ::tink::core::_Callback::ListCell >();
HXDLIN( 170)			_g = (_g + 1);
HXLINE( 171)			cell->clear();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallbackList_Impl__obj,clear,(void))


CallbackList_Impl__obj::CallbackList_Impl__obj()
{
}

bool CallbackList_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invoke") ) { outValue = invoke_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *CallbackList_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CallbackList_Impl__obj_sStaticStorageInfo = 0;
#endif

hx::Class CallbackList_Impl__obj::__mClass;

static ::String CallbackList_Impl__obj_sStaticFields[] = {
	HX_("add",21,f2,49,00),
	HX_("invoke",78,77,e0,9f),
	HX_("clear",8d,71,5b,48),
	::String(null())
};

void CallbackList_Impl__obj::__register()
{
	CallbackList_Impl__obj _hx_dummy;
	CallbackList_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("tink.core._Callback.CallbackList_Impl_",a0,82,ff,67);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CallbackList_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CallbackList_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CallbackList_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallbackList_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallbackList_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Callback
