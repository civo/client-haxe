// Generated by Haxe 4.0.2
#ifndef INCLUDED_tink_http__Header_HeaderValue_Impl_
#define INCLUDED_tink_http__Header_HeaderValue_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,http,_Header,HeaderValue_Impl_)

namespace tink{
namespace http{
namespace _Header{


class HXCPP_CLASS_ATTRIBUTES HeaderValue_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef HeaderValue_Impl__obj OBJ_;
		HeaderValue_Impl__obj();

	public:
		enum { _hx_ClassId = 0x3c46a4da };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.http._Header.HeaderValue_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"tink.http._Header.HeaderValue_Impl_"); }

		inline static hx::ObjectPtr< HeaderValue_Impl__obj > __new() {
			hx::ObjectPtr< HeaderValue_Impl__obj > __this = new HeaderValue_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< HeaderValue_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			HeaderValue_Impl__obj *__this = (HeaderValue_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HeaderValue_Impl__obj), false, "tink.http._Header.HeaderValue_Impl_"));
			*(void **)__this = HeaderValue_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HeaderValue_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HeaderValue_Impl_",24,b6,26,b3); }

		static ::String ofInt(int i);
		static ::Dynamic ofInt_dyn();

};

} // end namespace tink
} // end namespace http
} // end namespace _Header

#endif /* INCLUDED_tink_http__Header_HeaderValue_Impl_ */ 
