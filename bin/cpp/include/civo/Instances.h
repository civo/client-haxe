// Generated by Haxe 4.0.2
#ifndef INCLUDED_civo_Instances
#define INCLUDED_civo_Instances

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(civo,Instances)

namespace civo{


class HXCPP_CLASS_ATTRIBUTES Instances_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Instances_obj OBJ_;
		Instances_obj();

	public:
		enum { _hx_ClassId = 0x6cf15397 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="civo.Instances")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"civo.Instances"); }

		inline static hx::ObjectPtr< Instances_obj > __new() {
			hx::ObjectPtr< Instances_obj > __this = new Instances_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< Instances_obj > __alloc(hx::Ctx *_hx_ctx) {
			Instances_obj *__this = (Instances_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Instances_obj), false, "civo.Instances"));
			*(void **)__this = Instances_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Instances_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Instances",1e,63,ed,ec); }

		static void __boot();
		static ::String path;
		static void available_sizes(::String token, ::Dynamic handler);
		static ::Dynamic available_sizes_dyn();

		static void create(::String token, ::Dynamic params, ::Dynamic handler);
		static ::Dynamic create_dyn();

		static void list(::String token, ::Dynamic params, ::Dynamic handler);
		static ::Dynamic list_dyn();

		static void get(::String token,::String instance_id, ::Dynamic handler);
		static ::Dynamic get_dyn();

		static void _hx_delete(::String token,::String instance_id, ::Dynamic handler);
		static ::Dynamic _hx_delete_dyn();

		static void retag(::String token,::String instance_id,::String tags, ::Dynamic handler);
		static ::Dynamic retag_dyn();

		static void hard_reboots(::String token,::String instance_id, ::Dynamic handler);
		static ::Dynamic hard_reboots_dyn();

		static void soft_reboots(::String token,::String instance_id, ::Dynamic handler);
		static ::Dynamic soft_reboots_dyn();

		static void stop(::String token,::String instance_id, ::Dynamic handler);
		static ::Dynamic stop_dyn();

		static void start(::String token,::String instance_id, ::Dynamic handler);
		static ::Dynamic start_dyn();

		static void resize(::String token,::String instance_id,::String size, ::Dynamic handler);
		static ::Dynamic resize_dyn();

		static void firewall(::String token,::String instance_id,::String firewall_id, ::Dynamic handler);
		static ::Dynamic firewall_dyn();

		static void move_ip(::String token,::String instance_id,::String ip_address, ::Dynamic handler);
		static ::Dynamic move_ip_dyn();

};

} // end namespace civo

#endif /* INCLUDED_civo_Instances */ 
