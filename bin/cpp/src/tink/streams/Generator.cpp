// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_core__Future_Future_Impl_
#include <tink/core/_Future/Future_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams_Conclusion
#include <tink/streams/Conclusion.h>
#endif
#ifndef INCLUDED_tink_streams_Generator
#include <tink/streams/Generator.h>
#endif
#ifndef INCLUDED_tink_streams_Handled
#include <tink/streams/Handled.h>
#endif
#ifndef INCLUDED_tink_streams_Step
#include <tink/streams/Step.h>
#endif
#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1ef6669a934db1b9_680_new,"tink.streams.Generator","new",0x822fb86e,"tink.streams.Generator.new","tink/streams/Stream.hx",680,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_1ef6669a934db1b9_687_forEach,"tink.streams.Generator","forEach",0xd64a30b8,"tink.streams.Generator.forEach","tink/streams/Stream.hx",687,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_1ef6669a934db1b9_689_forEach,"tink.streams.Generator","forEach",0xd64a30b8,"tink.streams.Generator.forEach","tink/streams/Stream.hx",689,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_1ef6669a934db1b9_685_forEach,"tink.streams.Generator","forEach",0xd64a30b8,"tink.streams.Generator.forEach","tink/streams/Stream.hx",685,0x006f1625)
namespace tink{
namespace streams{

void Generator_obj::__construct(::Dynamic upcoming){
            	HX_STACKFRAME(&_hx_pos_1ef6669a934db1b9_680_new)
HXDLIN( 680)		super::__construct();
HXDLIN( 680)		this->upcoming = upcoming;
            	}

Dynamic Generator_obj::__CreateEmpty() { return new Generator_obj; }

void *Generator_obj::_hx_vtable = 0;

Dynamic Generator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Generator_obj > _hx_result = new Generator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Generator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0e8c5e2e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0e8c5e2e;
	} else {
		return inClassId==(int)0x21b4f512;
	}
}

::Dynamic Generator_obj::forEach( ::Dynamic handler){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_2, ::tink::streams::Generator,_gthis, ::Dynamic,handler) HXARGC(1)
            		void _hx_run( ::Dynamic cb){
            			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_1, ::tink::streams::Generator,_gthis, ::Dynamic,handler, ::Dynamic,cb) HXARGC(1)
            			void _hx_run( ::tink::streams::Step e){
            				HX_STACKFRAME(&_hx_pos_1ef6669a934db1b9_687_forEach)
HXLINE( 687)				switch((int)(e->_hx_getIndex())){
            					case (int)0: {
            						HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_hx_Closure_0, ::tink::streams::Generator,_gthis,::Dynamic,then, ::Dynamic,handler, ::Dynamic,cb) HXARGC(1)
            						void _hx_run( ::tink::streams::Handled s){
            							HX_STACKFRAME(&_hx_pos_1ef6669a934db1b9_689_forEach)
HXLINE( 689)							switch((int)(s->_hx_getIndex())){
            								case (int)0: {
HXLINE( 691)									cb(::tink::streams::Conclusion_obj::Halted(_gthis));
            								}
            								break;
            								case (int)1: {
HXLINE( 693)									cb(::tink::streams::Conclusion_obj::Halted(then));
            								}
            								break;
            								case (int)2: {
HXLINE( 695)									::tink::core::_Future::FutureObject_obj::handle(::tink::streams::StreamObject_obj::forEach(then,handler),cb);
            								}
            								break;
            								case (int)3: {
HXLINE( 696)									 ::tink::core::TypedError e1 = s->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXLINE( 697)									cb(::tink::streams::Conclusion_obj::Clogged(e1,_gthis));
            								}
            								break;
            							}
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE( 688)						::Dynamic then = e->_hx_getObject(1);
HXDLIN( 688)						 ::Dynamic v = e->_hx_getObject(0);
HXLINE( 689)						::tink::core::_Future::FutureObject_obj::handle(handler(v), ::Dynamic(new _hx_Closure_0(_gthis,then,handler,cb)));
            					}
            					break;
            					case (int)1: {
HXLINE( 699)						 ::tink::core::TypedError e2 = e->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXLINE( 700)						cb(::tink::streams::Conclusion_obj::Failed(e2));
            					}
            					break;
            					case (int)2: {
HXLINE( 702)						cb(::tink::streams::Conclusion_obj::Depleted_dyn());
            					}
            					break;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_1ef6669a934db1b9_687_forEach)
HXLINE( 687)			::tink::core::_Future::FutureObject_obj::handle(_gthis->upcoming, ::Dynamic(new _hx_Closure_1(_gthis,handler,cb)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_1ef6669a934db1b9_685_forEach)
HXDLIN( 685)		 ::tink::streams::Generator _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 686)		return ::tink::core::_Future::Future_Impl__obj::async( ::Dynamic(new _hx_Closure_2(_gthis,handler)),true);
            	}



hx::ObjectPtr< Generator_obj > Generator_obj::__new(::Dynamic upcoming) {
	hx::ObjectPtr< Generator_obj > __this = new Generator_obj();
	__this->__construct(upcoming);
	return __this;
}

hx::ObjectPtr< Generator_obj > Generator_obj::__alloc(hx::Ctx *_hx_ctx,::Dynamic upcoming) {
	Generator_obj *__this = (Generator_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Generator_obj), true, "tink.streams.Generator"));
	*(void **)__this = Generator_obj::_hx_vtable;
	__this->__construct(upcoming);
	return __this;
}

Generator_obj::Generator_obj()
{
}

void Generator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Generator);
	HX_MARK_MEMBER_NAME(upcoming,"upcoming");
	HX_MARK_END_CLASS();
}

void Generator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(upcoming,"upcoming");
}

hx::Val Generator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"forEach") ) { return hx::Val( forEach_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"upcoming") ) { return hx::Val( upcoming ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Generator_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"upcoming") ) { upcoming=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Generator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("upcoming",dc,87,9d,1c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Generator_obj_sMemberStorageInfo[] = {
	{hx::fsObject /* ::Dynamic */ ,(int)offsetof(Generator_obj,upcoming),HX_("upcoming",dc,87,9d,1c)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Generator_obj_sStaticStorageInfo = 0;
#endif

static ::String Generator_obj_sMemberFields[] = {
	HX_("upcoming",dc,87,9d,1c),
	HX_("forEach",aa,29,be,c4),
	::String(null()) };

hx::Class Generator_obj::__mClass;

void Generator_obj::__register()
{
	Generator_obj _hx_dummy;
	Generator_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("tink.streams.Generator",7c,a9,3b,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Generator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Generator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Generator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Generator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
