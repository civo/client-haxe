// Generated by Haxe 4.0.2
#ifndef INCLUDED_tink_core__Future_LazyTrigger
#define INCLUDED_tink_core__Future_LazyTrigger

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core_FutureTrigger
#include <tink/core/FutureTrigger.h>
#endif
HX_DECLARE_CLASS2(tink,core,FutureTrigger)
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Future,LazyTrigger)

namespace tink{
namespace core{
namespace _Future{


class HXCPP_CLASS_ATTRIBUTES LazyTrigger_obj : public  ::tink::core::FutureTrigger_obj
{
	public:
		typedef  ::tink::core::FutureTrigger_obj super;
		typedef LazyTrigger_obj OBJ_;
		LazyTrigger_obj();

	public:
		enum { _hx_ClassId = 0x713e6f13 };

		void __construct( ::Dynamic op);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core._Future.LazyTrigger")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"tink.core._Future.LazyTrigger"); }
		static hx::ObjectPtr< LazyTrigger_obj > __new( ::Dynamic op);
		static hx::ObjectPtr< LazyTrigger_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic op);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LazyTrigger_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LazyTrigger",04,bb,53,a1); }

		 ::Dynamic op;
		Dynamic op_dyn() { return op;}
		 ::tink::core::FutureTrigger eager();

		::Dynamic map( ::Dynamic f);

		::Dynamic flatMap( ::Dynamic f);

		::Dynamic handle( ::Dynamic cb);

};

} // end namespace tink
} // end namespace core
} // end namespace _Future

#endif /* INCLUDED_tink_core__Future_LazyTrigger */ 
