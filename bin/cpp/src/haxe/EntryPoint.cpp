// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_haxe_EntryPoint
#include <haxe/EntryPoint.h>
#endif
#ifndef INCLUDED_haxe_MainLoop
#include <haxe/MainLoop.h>
#endif
#ifndef INCLUDED_sys_thread_Lock
#include <sys/thread/Lock.h>
#endif
#ifndef INCLUDED_sys_thread_Mutex
#include <sys/thread/Mutex.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5139e607710b8dde_85_processEvents,"haxe.EntryPoint","processEvents",0x04eb4e60,"haxe.EntryPoint.processEvents","/usr/share/haxe/std/haxe/EntryPoint.hx",85,0x94eb0472)
HX_LOCAL_STACK_FRAME(_hx_pos_5139e607710b8dde_124_run,"haxe.EntryPoint","run",0xf0324cc3,"haxe.EntryPoint.run","/usr/share/haxe/std/haxe/EntryPoint.hx",124,0x94eb0472)
HX_LOCAL_STACK_FRAME(_hx_pos_5139e607710b8dde_37_boot,"haxe.EntryPoint","boot",0x3138e7ba,"haxe.EntryPoint.boot","/usr/share/haxe/std/haxe/EntryPoint.hx",37,0x94eb0472)
HX_LOCAL_STACK_FRAME(_hx_pos_5139e607710b8dde_38_boot,"haxe.EntryPoint","boot",0x3138e7ba,"haxe.EntryPoint.boot","/usr/share/haxe/std/haxe/EntryPoint.hx",38,0x94eb0472)
HX_LOCAL_STACK_FRAME(_hx_pos_5139e607710b8dde_40_boot,"haxe.EntryPoint","boot",0x3138e7ba,"haxe.EntryPoint.boot","/usr/share/haxe/std/haxe/EntryPoint.hx",40,0x94eb0472)
HX_LOCAL_STACK_FRAME(_hx_pos_5139e607710b8dde_41_boot,"haxe.EntryPoint","boot",0x3138e7ba,"haxe.EntryPoint.boot","/usr/share/haxe/std/haxe/EntryPoint.hx",41,0x94eb0472)
namespace haxe{

void EntryPoint_obj::__construct() { }

Dynamic EntryPoint_obj::__CreateEmpty() { return new EntryPoint_obj; }

void *EntryPoint_obj::_hx_vtable = 0;

Dynamic EntryPoint_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EntryPoint_obj > _hx_result = new EntryPoint_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EntryPoint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x063dd2e8;
}

 ::sys::thread::Lock EntryPoint_obj::sleepLock;

 ::sys::thread::Mutex EntryPoint_obj::mutex;

::Array< ::Dynamic> EntryPoint_obj::pending;

int EntryPoint_obj::threadCount;

Float EntryPoint_obj::processEvents(){
            	HX_STACKFRAME(&_hx_pos_5139e607710b8dde_85_processEvents)
HXLINE(  87)		while(true){
HXLINE(  89)			::haxe::EntryPoint_obj::mutex->acquire();
HXLINE(  90)			 ::Dynamic f = ::haxe::EntryPoint_obj::pending->shift();
HXLINE(  91)			::haxe::EntryPoint_obj::mutex->release();
HXLINE(  95)			if (hx::IsNull( f )) {
HXLINE(  96)				goto _hx_goto_0;
            			}
HXLINE(  97)			f();
            		}
            		_hx_goto_0:;
HXLINE(  99)		Float time = ::haxe::MainLoop_obj::tick();
HXLINE( 100)		bool _hx_tmp;
HXDLIN( 100)		if (!(::haxe::MainLoop_obj::hasEvents())) {
HXLINE( 100)			_hx_tmp = (::haxe::EntryPoint_obj::threadCount == 0);
            		}
            		else {
HXLINE( 100)			_hx_tmp = false;
            		}
HXDLIN( 100)		if (_hx_tmp) {
HXLINE( 101)			return ( (Float)(-1) );
            		}
HXLINE( 102)		return time;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EntryPoint_obj,processEvents,return )

void EntryPoint_obj::run(){
            	HX_STACKFRAME(&_hx_pos_5139e607710b8dde_124_run)
HXDLIN( 124)		while(true){
HXLINE( 125)			Float nextTick = ::haxe::EntryPoint_obj::processEvents();
HXLINE( 126)			if ((nextTick < 0)) {
HXLINE( 127)				goto _hx_goto_2;
            			}
HXLINE( 128)			if ((nextTick > 0)) {
HXLINE( 129)				::haxe::EntryPoint_obj::sleepLock->wait(nextTick);
            			}
            		}
            		_hx_goto_2:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EntryPoint_obj,run,(void))


EntryPoint_obj::EntryPoint_obj()
{
}

bool EntryPoint_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { outValue = ( mutex ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pending") ) { outValue = ( pending ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sleepLock") ) { outValue = ( sleepLock ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"threadCount") ) { outValue = ( threadCount ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"processEvents") ) { outValue = processEvents_dyn(); return true; }
	}
	return false;
}

bool EntryPoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { mutex=ioValue.Cast<  ::sys::thread::Mutex >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pending") ) { pending=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sleepLock") ) { sleepLock=ioValue.Cast<  ::sys::thread::Lock >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"threadCount") ) { threadCount=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *EntryPoint_obj_sMemberStorageInfo = 0;
static hx::StaticInfo EntryPoint_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::sys::thread::Lock */ ,(void *) &EntryPoint_obj::sleepLock,HX_("sleepLock",a2,5c,2f,5d)},
	{hx::fsObject /*  ::sys::thread::Mutex */ ,(void *) &EntryPoint_obj::mutex,HX_("mutex",7f,8f,5b,10)},
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &EntryPoint_obj::pending,HX_("pending",57,98,ec,2b)},
	{hx::fsInt,(void *) &EntryPoint_obj::threadCount,HX_("threadCount",a5,dd,53,9e)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void EntryPoint_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EntryPoint_obj::sleepLock,"sleepLock");
	HX_MARK_MEMBER_NAME(EntryPoint_obj::mutex,"mutex");
	HX_MARK_MEMBER_NAME(EntryPoint_obj::pending,"pending");
	HX_MARK_MEMBER_NAME(EntryPoint_obj::threadCount,"threadCount");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EntryPoint_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EntryPoint_obj::sleepLock,"sleepLock");
	HX_VISIT_MEMBER_NAME(EntryPoint_obj::mutex,"mutex");
	HX_VISIT_MEMBER_NAME(EntryPoint_obj::pending,"pending");
	HX_VISIT_MEMBER_NAME(EntryPoint_obj::threadCount,"threadCount");
};

#endif

hx::Class EntryPoint_obj::__mClass;

static ::String EntryPoint_obj_sStaticFields[] = {
	HX_("sleepLock",a2,5c,2f,5d),
	HX_("mutex",7f,8f,5b,10),
	HX_("pending",57,98,ec,2b),
	HX_("threadCount",a5,dd,53,9e),
	HX_("processEvents",e8,62,bd,6c),
	HX_("run",4b,e7,56,00),
	::String(null())
};

void EntryPoint_obj::__register()
{
	EntryPoint_obj _hx_dummy;
	EntryPoint_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.EntryPoint",e6,a9,c1,b6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EntryPoint_obj::__GetStatic;
	__mClass->mSetStaticField = &EntryPoint_obj::__SetStatic;
	__mClass->mMarkFunc = EntryPoint_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(EntryPoint_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< EntryPoint_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EntryPoint_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EntryPoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EntryPoint_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void EntryPoint_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_5139e607710b8dde_37_boot)
HXDLIN(  37)		sleepLock =  ::sys::thread::Lock_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_5139e607710b8dde_38_boot)
HXDLIN(  38)		mutex =  ::sys::thread::Mutex_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_5139e607710b8dde_40_boot)
HXDLIN(  40)		pending = ::Array_obj< ::Dynamic>::__new();
            	}
{
            	HX_STACKFRAME(&_hx_pos_5139e607710b8dde_41_boot)
HXDLIN(  41)		threadCount = 0;
            	}
}

} // end namespace haxe
