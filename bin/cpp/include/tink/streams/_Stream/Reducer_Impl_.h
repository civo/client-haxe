// Generated by Haxe 4.0.2
#ifndef INCLUDED_tink_streams__Stream_Reducer_Impl_
#define INCLUDED_tink_streams__Stream_Reducer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,streams,_Stream,Reducer_Impl_)

namespace tink{
namespace streams{
namespace _Stream{


class HXCPP_CLASS_ATTRIBUTES Reducer_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Reducer_Impl__obj OBJ_;
		Reducer_Impl__obj();

	public:
		enum { _hx_ClassId = 0x440cc44a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.streams._Stream.Reducer_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"tink.streams._Stream.Reducer_Impl_"); }

		inline static hx::ObjectPtr< Reducer_Impl__obj > __new() {
			hx::ObjectPtr< Reducer_Impl__obj > __this = new Reducer_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< Reducer_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			Reducer_Impl__obj *__this = (Reducer_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Reducer_Impl__obj), false, "tink.streams._Stream.Reducer_Impl_"));
			*(void **)__this = Reducer_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Reducer_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Reducer_Impl_",8c,e1,73,76); }

		static  ::Dynamic ofSafe( ::Dynamic f);
		static ::Dynamic ofSafe_dyn();

};

} // end namespace tink
} // end namespace streams
} // end namespace _Stream

#endif /* INCLUDED_tink_streams__Stream_Reducer_Impl_ */ 
