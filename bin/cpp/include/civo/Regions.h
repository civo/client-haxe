// Generated by Haxe 4.0.2
#ifndef INCLUDED_civo_Regions
#define INCLUDED_civo_Regions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(civo,Regions)

namespace civo{


class HXCPP_CLASS_ATTRIBUTES Regions_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Regions_obj OBJ_;
		Regions_obj();

	public:
		enum { _hx_ClassId = 0x060c3188 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="civo.Regions")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"civo.Regions"); }

		inline static hx::ObjectPtr< Regions_obj > __new() {
			hx::ObjectPtr< Regions_obj > __this = new Regions_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< Regions_obj > __alloc(hx::Ctx *_hx_ctx) {
			Regions_obj *__this = (Regions_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Regions_obj), false, "civo.Regions"));
			*(void **)__this = Regions_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Regions_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Regions",df,3c,ed,47); }

		static void __boot();
		static ::String path;
		static void available_regions(::String token, ::Dynamic handler);
		static ::Dynamic available_regions_dyn();

};

} // end namespace civo

#endif /* INCLUDED_civo_Regions */ 
