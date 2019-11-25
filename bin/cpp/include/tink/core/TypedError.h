// Generated by Haxe 4.0.2
#ifndef INCLUDED_tink_core_TypedError
#define INCLUDED_tink_core_TypedError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS2(tink,core,TypedError)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES TypedError_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TypedError_obj OBJ_;
		TypedError_obj();

	public:
		enum { _hx_ClassId = 0x6f97a5ef };

		void __construct( ::Dynamic __o_code,::String message, ::Dynamic pos);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core.TypedError")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"tink.core.TypedError"); }
		static hx::ObjectPtr< TypedError_obj > __new( ::Dynamic __o_code,::String message, ::Dynamic pos);
		static hx::ObjectPtr< TypedError_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic __o_code,::String message, ::Dynamic pos);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TypedError_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TypedError",1e,0f,9b,3c); }

		static  ::tink::core::TypedError withData( ::Dynamic code,::String message, ::Dynamic data, ::Dynamic pos);
		static ::Dynamic withData_dyn();

		static  ::tink::core::TypedError typed( ::Dynamic code,::String message, ::Dynamic data, ::Dynamic pos);
		static ::Dynamic typed_dyn();

		::String message;
		int code;
		 ::Dynamic data;
		 ::Dynamic pos;
		::Array< ::Dynamic> callStack;
		::Array< ::Dynamic> exceptionStack;
};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_TypedError */ 
