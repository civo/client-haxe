// Generated by Haxe 4.0.2
#ifndef INCLUDED_Charges
#define INCLUDED_Charges

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Charges)



class HXCPP_CLASS_ATTRIBUTES Charges_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Charges_obj OBJ_;
		Charges_obj();

	public:
		enum { _hx_ClassId = 0x4c2bdb97 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Charges")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"Charges"); }

		inline static hx::ObjectPtr< Charges_obj > __new() {
			hx::ObjectPtr< Charges_obj > __this = new Charges_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< Charges_obj > __alloc(hx::Ctx *_hx_ctx) {
			Charges_obj *__this = (Charges_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Charges_obj), false, "Charges"));
			*(void **)__this = Charges_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Charges_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Charges",5f,b3,c2,9c); }

		static void list(::String token, ::Dynamic handler,::String from,::String to);
		static ::Dynamic list_dyn();

};


#endif /* INCLUDED_Charges */ 
