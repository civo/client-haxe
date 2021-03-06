// Generated by Haxe 4.0.2
#ifndef INCLUDED_tink__Chunk_CompoundChunk
#define INCLUDED_tink__Chunk_CompoundChunk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_chunk_ChunkBase
#include <tink/chunk/ChunkBase.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(tink,_Chunk,CompoundChunk)
HX_DECLARE_CLASS2(tink,chunk,ByteChunk)
HX_DECLARE_CLASS2(tink,chunk,ChunkBase)
HX_DECLARE_CLASS2(tink,chunk,ChunkObject)

namespace tink{
namespace _Chunk{


class HXCPP_CLASS_ATTRIBUTES CompoundChunk_obj : public  ::tink::chunk::ChunkBase_obj
{
	public:
		typedef  ::tink::chunk::ChunkBase_obj super;
		typedef CompoundChunk_obj OBJ_;
		CompoundChunk_obj();

	public:
		enum { _hx_ClassId = 0x3df536fe };

		void __construct(::Dynamic left,::Dynamic right);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink._Chunk.CompoundChunk")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"tink._Chunk.CompoundChunk"); }
		static hx::ObjectPtr< CompoundChunk_obj > __new(::Dynamic left,::Dynamic right);
		static hx::ObjectPtr< CompoundChunk_obj > __alloc(hx::Ctx *_hx_ctx,::Dynamic left,::Dynamic right);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CompoundChunk_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("CompoundChunk",e2,7e,3d,10); }

		::Dynamic left;
		::Dynamic right;
		int split;
		int length;
		int getLength();
		::Dynamic getLength_dyn();

		void flatten(::Array< ::Dynamic> into);

		::Dynamic slice(int from,int to);
		::Dynamic slice_dyn();

		void blitTo( ::haxe::io::Bytes target,int offset);
		::Dynamic blitTo_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::haxe::io::Bytes toBytes();
		::Dynamic toBytes_dyn();

};

} // end namespace tink
} // end namespace _Chunk

#endif /* INCLUDED_tink__Chunk_CompoundChunk */ 
