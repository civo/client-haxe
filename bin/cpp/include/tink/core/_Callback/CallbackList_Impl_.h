// Generated by Haxe 4.0.2
#ifndef INCLUDED_tink_core__Callback_CallbackList_Impl_
#define INCLUDED_tink_core__Callback_CallbackList_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS3(tink,core,_Callback,CallbackList_Impl_)
HX_DECLARE_CLASS3(tink,core,_Callback,ListCell)

namespace tink{
namespace core{
namespace _Callback{


class HXCPP_CLASS_ATTRIBUTES CallbackList_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CallbackList_Impl__obj OBJ_;
		CallbackList_Impl__obj();

	public:
		enum { _hx_ClassId = 0x17f0bab2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Callback.CallbackList_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"tink.core._Callback.CallbackList_Impl_"); }

		inline static hx::ObjectPtr< CallbackList_Impl__obj > __new() {
			hx::ObjectPtr< CallbackList_Impl__obj > __this = new CallbackList_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< CallbackList_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			CallbackList_Impl__obj *__this = (CallbackList_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CallbackList_Impl__obj), false, "tink.core._Callback.CallbackList_Impl_"));
			*(void **)__this = CallbackList_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CallbackList_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CallbackList_Impl_",c3,7d,56,00); }

		static ::Dynamic add(::Array< ::Dynamic> this1, ::Dynamic cb);
		static ::Dynamic add_dyn();

		static void invoke(::Array< ::Dynamic> this1, ::Dynamic data);
		static ::Dynamic invoke_dyn();

		static void clear(::Array< ::Dynamic> this1);
		static ::Dynamic clear_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Callback

#endif /* INCLUDED_tink_core__Callback_CallbackList_Impl_ */ 
