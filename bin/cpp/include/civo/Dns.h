// Generated by Haxe 4.0.2
#ifndef INCLUDED_civo_Dns
#define INCLUDED_civo_Dns

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(civo,Dns)

namespace civo{


class HXCPP_CLASS_ATTRIBUTES Dns_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Dns_obj OBJ_;
		Dns_obj();

	public:
		enum { _hx_ClassId = 0x2156330a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="civo.Dns")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"civo.Dns"); }

		inline static hx::ObjectPtr< Dns_obj > __new() {
			hx::ObjectPtr< Dns_obj > __this = new Dns_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< Dns_obj > __alloc(hx::Ctx *_hx_ctx) {
			Dns_obj *__this = (Dns_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Dns_obj), false, "civo.Dns"));
			*(void **)__this = Dns_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Dns_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Dns",89,f9,33,00); }

		static void __boot();
		static ::String path;
		static void list_domains(::String token, ::Dynamic handler);
		static ::Dynamic list_domains_dyn();

		static void create_domain(::String token,::String name, ::Dynamic handler);
		static ::Dynamic create_domain_dyn();

		static void update_domain(::String token,::String domain_id,::String domain_name, ::Dynamic handler);
		static ::Dynamic update_domain_dyn();

		static void delete_domain(::String token,::String domain_id, ::Dynamic handler);
		static ::Dynamic delete_domain_dyn();

		static void list_dns(::String token,::String domain_id, ::Dynamic handler);
		static ::Dynamic list_dns_dyn();

		static void create_dns(::String token,::String domain_id, ::Dynamic params, ::Dynamic handler);
		static ::Dynamic create_dns_dyn();

		static void update_dns(::String token,::String domain_id,::String dns_id, ::Dynamic params, ::Dynamic handler);
		static ::Dynamic update_dns_dyn();

		static void delete_dns(::String token,::String domain_id,::String dns_id, ::Dynamic handler);
		static ::Dynamic delete_dns_dyn();

};

} // end namespace civo

#endif /* INCLUDED_civo_Dns */ 
