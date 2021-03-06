// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_tink_streams_Step
#include <tink/streams/Step.h>
#endif
#ifndef INCLUDED_tink_streams_Reduction
#include <tink/streams/Reduction.h>
#endif
#ifndef INCLUDED_tink_streams_ReductionStep
#include <tink/streams/ReductionStep.h>
#endif
#ifndef INCLUDED_tink_streams_Conclusion
#include <tink/streams/Conclusion.h>
#endif
#ifndef INCLUDED_tink_streams_Handled
#include <tink/streams/Handled.h>
#endif
#ifndef INCLUDED_tink_streams_RegroupResult
#include <tink/streams/RegroupResult.h>
#endif
#ifndef INCLUDED_tink_streams_RegroupStatus
#include <tink/streams/RegroupStatus.h>
#endif
#ifndef INCLUDED_tink_io_ParseResult
#include <tink/io/ParseResult.h>
#endif
#ifndef INCLUDED_tink_io_PipeResult
#include <tink/io/PipeResult.h>
#endif
#ifndef INCLUDED_tink_http_BodyPart
#include <tink/http/BodyPart.h>
#endif
#ifndef INCLUDED_tink_http_IncomingRequestBody
#include <tink/http/IncomingRequestBody.h>
#endif
#ifndef INCLUDED_tink_io_ParseStep
#include <tink/io/ParseStep.h>
#endif
#ifndef INCLUDED_tink_http_ClientType
#include <tink/http/ClientType.h>
#endif
#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
#endif
#ifndef INCLUDED_tink_core_Noise
#include <tink/core/Noise.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_tink_io__Worker_Worker_Impl_
#include <tink/io/_Worker/Worker_Impl_.h>
#endif
#ifndef INCLUDED_tink_io__Source_Source_Impl_
#include <tink/io/_Source/Source_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams_Empty
#include <tink/streams/Empty.h>
#endif
#ifndef INCLUDED_tink_http_Fetch
#include <tink/http/Fetch.h>
#endif
#ifndef INCLUDED_tink_core__Callback_Callback_Impl_
#include <tink/core/_Callback/Callback_Impl_.h>
#endif
#ifndef INCLUDED_tink__Chunk_Chunk_Impl_
#include <tink/_Chunk/Chunk_Impl_.h>
#endif
#ifndef INCLUDED_tink__Chunk_EmptyChunk
#include <tink/_Chunk/EmptyChunk.h>
#endif
#ifndef INCLUDED_sys_ssl_Socket
#include <sys/ssl/Socket.h>
#endif
#ifndef INCLUDED_sys_ssl_Key
#include <sys/ssl/Key.h>
#endif
#ifndef INCLUDED_sys_ssl_Certificate
#include <sys/ssl/Certificate.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_Http
#include <sys/Http.h>
#endif
#ifndef INCLUDED_haxe_EntryPoint
#include <haxe/EntryPoint.h>
#endif
#ifndef INCLUDED_civo_Webhooks
#include <civo/Webhooks.h>
#endif
#ifndef INCLUDED_civo_Volumes
#include <civo/Volumes.h>
#endif
#ifndef INCLUDED_civo_Templates
#include <civo/Templates.h>
#endif
#ifndef INCLUDED_civo_Ssh
#include <civo/Ssh.h>
#endif
#ifndef INCLUDED_civo_Snapshots
#include <civo/Snapshots.h>
#endif
#ifndef INCLUDED_civo_Regions
#include <civo/Regions.h>
#endif
#ifndef INCLUDED_civo_Quota
#include <civo/Quota.h>
#endif
#ifndef INCLUDED_civo_Networks
#include <civo/Networks.h>
#endif
#ifndef INCLUDED_civo_LoadBalancers
#include <civo/LoadBalancers.h>
#endif
#ifndef INCLUDED_civo_Kubernetes
#include <civo/Kubernetes.h>
#endif
#ifndef INCLUDED_civo_Instances
#include <civo/Instances.h>
#endif
#ifndef INCLUDED_civo_Firewalls
#include <civo/Firewalls.h>
#endif
#ifndef INCLUDED_civo_Dns
#include <civo/Dns.h>
#endif
#ifndef INCLUDED_civo_Charges
#include <civo/Charges.h>
#endif
#ifndef INCLUDED_tink_url__Path_Path_Impl_
#include <tink/url/_Path/Path_Impl_.h>
#endif
#ifndef INCLUDED_tink_url__Host_Host_Impl_
#include <tink/url/_Host/Host_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams_FutureStream
#include <tink/streams/FutureStream.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Reducer_Impl_
#include <tink/streams/_Stream/Reducer_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Handler_Impl_
#include <tink/streams/_Stream/Handler_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams_Single
#include <tink/streams/Single.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_ErrorStream
#include <tink/streams/_Stream/ErrorStream.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_CloggedStream
#include <tink/streams/_Stream/CloggedStream.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_RegroupStream
#include <tink/streams/_Stream/RegroupStream.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_CompoundStream
#include <tink/streams/_Stream/CompoundStream.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Regrouper_Impl_
#include <tink/streams/_Stream/Regrouper_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Stream_Impl_
#include <tink/streams/_Stream/Stream_Impl_.h>
#endif
#ifndef INCLUDED_tink_io_std_OutputSink
#include <tink/io/std/OutputSink.h>
#endif
#ifndef INCLUDED_tink_io_std_InputSource
#include <tink/io/std/InputSource.h>
#endif
#ifndef INCLUDED_tink_streams_Generator
#include <tink/streams/Generator.h>
#endif
#ifndef INCLUDED_tink_io__Worker_EagerWorker
#include <tink/io/_Worker/EagerWorker.h>
#endif
#ifndef INCLUDED_tink_io_WorkerObject
#include <tink/io/WorkerObject.h>
#endif
#ifndef INCLUDED_tink_io__StreamParser_StreamParser_Impl_
#include <tink/io/_StreamParser/StreamParser_Impl_.h>
#endif
#ifndef INCLUDED_tink_io_IdealSourceTools
#include <tink/io/IdealSourceTools.h>
#endif
#ifndef INCLUDED_tink_io_RealSourceTools
#include <tink/io/RealSourceTools.h>
#endif
#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
#ifndef INCLUDED_tink_io__Sink_SinkYielding_Impl_
#include <tink/io/_Sink/SinkYielding_Impl_.h>
#endif
#ifndef INCLUDED_tink_io_SinkBase
#include <tink/io/SinkBase.h>
#endif
#ifndef INCLUDED_tink_io_SinkObject
#include <tink/io/SinkObject.h>
#endif
#ifndef INCLUDED_tink_io_PipeResultTools
#include <tink/io/PipeResultTools.h>
#endif
#ifndef INCLUDED_tink_http_containers_LocalContainer
#include <tink/http/containers/LocalContainer.h>
#endif
#ifndef INCLUDED_tink_http_clients_StdClient
#include <tink/http/clients/StdClient.h>
#endif
#ifndef INCLUDED_tink_http_clients_SecureSocketClient
#include <tink/http/clients/SecureSocketClient.h>
#endif
#ifndef INCLUDED_tink_http_clients_SocketClient
#include <tink/http/clients/SocketClient.h>
#endif
#ifndef INCLUDED_tink_http_clients_SecureCurlClient
#include <tink/http/clients/SecureCurlClient.h>
#endif
#ifndef INCLUDED_tink_http_clients_LocalContainerClient
#include <tink/http/clients/LocalContainerClient.h>
#endif
#ifndef INCLUDED_tink_http_clients_CurlClient
#include <tink/http/clients/CurlClient.h>
#endif
#ifndef INCLUDED_tink_http_IncomingResponse
#include <tink/http/IncomingResponse.h>
#endif
#ifndef INCLUDED_tink_http__Response_OutgoingResponseData
#include <tink/http/_Response/OutgoingResponseData.h>
#endif
#ifndef INCLUDED_tink_http_ResponseHeaderBase
#include <tink/http/ResponseHeaderBase.h>
#endif
#ifndef INCLUDED_tink_http_IncomingRequest
#include <tink/http/IncomingRequest.h>
#endif
#ifndef INCLUDED_tink_http_OutgoingRequest
#include <tink/http/OutgoingRequest.h>
#endif
#ifndef INCLUDED_tink_http_OutgoingRequestHeader
#include <tink/http/OutgoingRequestHeader.h>
#endif
#ifndef INCLUDED_tink_http_IncomingRequestHeader
#include <tink/http/IncomingRequestHeader.h>
#endif
#ifndef INCLUDED_tink_http_RequestHeader
#include <tink/http/RequestHeader.h>
#endif
#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif
#ifndef INCLUDED_tink_http_HeaderParser
#include <tink/http/HeaderParser.h>
#endif
#ifndef INCLUDED_tink_io_BytewiseParser
#include <tink/io/BytewiseParser.h>
#endif
#ifndef INCLUDED_tink_http_HeaderField
#include <tink/http/HeaderField.h>
#endif
#ifndef INCLUDED_tink_http__Header_HeaderValue_Impl_
#include <tink/http/_Header/HeaderValue_Impl_.h>
#endif
#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
#endif
#ifndef INCLUDED_tink_http_HandlerObject
#include <tink/http/HandlerObject.h>
#endif
#ifndef INCLUDED_tink_http__Fetch_FetchResponse_Impl_
#include <tink/http/_Fetch/FetchResponse_Impl_.h>
#endif
#ifndef INCLUDED_tink_http_Container
#include <tink/http/Container.h>
#endif
#ifndef INCLUDED_tink_http__Client_CustomClient
#include <tink/http/_Client/CustomClient.h>
#endif
#ifndef INCLUDED_tink_http_ClientObject
#include <tink/http/ClientObject.h>
#endif
#ifndef INCLUDED_tink_io_StreamParserObject
#include <tink/io/StreamParserObject.h>
#endif
#ifndef INCLUDED_tink_core__Promise_Promise_Impl_
#include <tink/core/_Promise/Promise_Impl_.h>
#endif
#ifndef INCLUDED_tink_core_MPair
#include <tink/core/MPair.h>
#endif
#ifndef INCLUDED_tink_core_NamedWith
#include <tink/core/NamedWith.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyFunc
#include <tink/core/_Lazy/LazyFunc.h>
#endif
#ifndef INCLUDED_tink_core__Future_LazyTrigger
#include <tink/core/_Future/LazyTrigger.h>
#endif
#ifndef INCLUDED_tink_core_FutureTrigger
#include <tink/core/FutureTrigger.h>
#endif
#ifndef INCLUDED_tink_core__Future_NestedFuture
#include <tink/core/_Future/NestedFuture.h>
#endif
#ifndef INCLUDED_tink_core__Future_SimpleFuture
#include <tink/core/_Future/SimpleFuture.h>
#endif
#ifndef INCLUDED_tink_core__Future_Future_Impl_
#include <tink/core/_Future/Future_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Future_SyncFuture
#include <tink/core/_Future/SyncFuture.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyConst
#include <tink/core/_Lazy/LazyConst.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_core__Callback_CallbackList_Impl_
#include <tink/core/_Callback/CallbackList_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Callback_ListCell
#include <tink/core/_Callback/ListCell.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkCursor
#include <tink/chunk/ChunkCursor.h>
#endif
#ifndef INCLUDED_tink_chunk_ByteChunk
#include <tink/chunk/ByteChunk.h>
#endif
#ifndef INCLUDED_tink__Url_Url_Impl_
#include <tink/_Url/Url_Impl_.h>
#endif
#ifndef INCLUDED_tink__Chunk_CompoundChunk
#include <tink/_Chunk/CompoundChunk.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkBase
#include <tink/chunk/ChunkBase.h>
#endif
#ifndef INCLUDED_sys_ssl__Socket_SocketOutput
#include <sys/ssl/_Socket/SocketOutput.h>
#endif
#ifndef INCLUDED_sys_ssl__Socket_SocketInput
#include <sys/ssl/_Socket/SocketInput.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketOutput
#include <sys/net/_Socket/SocketOutput.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketInput
#include <sys/net/_Socket/SocketInput.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
#ifndef INCLUDED_sys_io__Process_Stdout
#include <sys/io/_Process/Stdout.h>
#endif
#ifndef INCLUDED_sys_io__Process_Stdin
#include <sys/io/_Process/Stdin.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_httpstatus__HttpStatusMessage_HttpStatusMessage_Impl_
#include <httpstatus/_HttpStatusMessage/HttpStatusMessage_Impl_.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_TreeNode
#include <haxe/ds/TreeNode.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_MainLoop
#include <haxe/MainLoop.h>
#endif
#ifndef INCLUDED_haxe_MainEvent
#include <haxe/MainEvent.h>
#endif
#ifndef INCLUDED_sys_thread_Lock
#include <sys/thread/Lock.h>
#endif
#ifndef INCLUDED_sys_thread_Mutex
#include <sys/thread/Mutex.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_civo_net_CivoHttp
#include <civo/net/CivoHttp.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Civo
#include <Civo.h>
#endif

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::tink::streams::Step_obj::__register();
::tink::streams::Reduction_obj::__register();
::tink::streams::ReductionStep_obj::__register();
::tink::streams::Conclusion_obj::__register();
::tink::streams::Handled_obj::__register();
::tink::streams::RegroupResult_obj::__register();
::tink::streams::RegroupStatus_obj::__register();
::tink::io::ParseResult_obj::__register();
::tink::io::PipeResult_obj::__register();
::tink::http::BodyPart_obj::__register();
::tink::http::IncomingRequestBody_obj::__register();
::tink::io::ParseStep_obj::__register();
::tink::http::ClientType_obj::__register();
::tink::core::Outcome_obj::__register();
::tink::core::Noise_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Encoding_obj::__register();
::haxe::ds::Option_obj::__register();
::haxe::StackItem_obj::__register();
::ValueType_obj::__register();
::tink::io::_Worker::Worker_Impl__obj::__register();
::tink::io::_Source::Source_Impl__obj::__register();
::tink::streams::Empty_obj::__register();
::tink::http::Fetch_obj::__register();
::tink::core::_Callback::Callback_Impl__obj::__register();
::tink::_Chunk::Chunk_Impl__obj::__register();
::tink::_Chunk::EmptyChunk_obj::__register();
::sys::ssl::Socket_obj::__register();
::sys::ssl::Key_obj::__register();
::sys::ssl::Certificate_obj::__register();
::sys::net::Host_obj::__register();
::sys::Http_obj::__register();
::haxe::EntryPoint_obj::__register();
::civo::Webhooks_obj::__register();
::civo::Volumes_obj::__register();
::civo::Templates_obj::__register();
::civo::Ssh_obj::__register();
::civo::Snapshots_obj::__register();
::civo::Regions_obj::__register();
::civo::Quota_obj::__register();
::civo::Networks_obj::__register();
::civo::LoadBalancers_obj::__register();
::civo::Kubernetes_obj::__register();
::civo::Instances_obj::__register();
::civo::Firewalls_obj::__register();
::civo::Dns_obj::__register();
::civo::Charges_obj::__register();
::tink::url::_Path::Path_Impl__obj::__register();
::tink::url::_Host::Host_Impl__obj::__register();
::tink::streams::FutureStream_obj::__register();
::tink::streams::_Stream::Reducer_Impl__obj::__register();
::tink::streams::_Stream::Handler_Impl__obj::__register();
::tink::streams::Single_obj::__register();
::tink::streams::_Stream::ErrorStream_obj::__register();
::tink::streams::_Stream::CloggedStream_obj::__register();
::tink::streams::_Stream::RegroupStream_obj::__register();
::tink::streams::_Stream::CompoundStream_obj::__register();
::tink::streams::_Stream::Regrouper_Impl__obj::__register();
::tink::streams::_Stream::Stream_Impl__obj::__register();
::tink::io::std::OutputSink_obj::__register();
::tink::io::std::InputSource_obj::__register();
::tink::streams::Generator_obj::__register();
::tink::io::_Worker::EagerWorker_obj::__register();
::tink::io::WorkerObject_obj::__register();
::tink::io::_StreamParser::StreamParser_Impl__obj::__register();
::tink::io::IdealSourceTools_obj::__register();
::tink::io::RealSourceTools_obj::__register();
::tink::streams::StreamBase_obj::__register();
::tink::streams::StreamObject_obj::__register();
::tink::io::_Sink::SinkYielding_Impl__obj::__register();
::tink::io::SinkBase_obj::__register();
::tink::io::SinkObject_obj::__register();
::tink::io::PipeResultTools_obj::__register();
::tink::http::containers::LocalContainer_obj::__register();
::tink::http::clients::StdClient_obj::__register();
::tink::http::clients::SecureSocketClient_obj::__register();
::tink::http::clients::SocketClient_obj::__register();
::tink::http::clients::SecureCurlClient_obj::__register();
::tink::http::clients::LocalContainerClient_obj::__register();
::tink::http::clients::CurlClient_obj::__register();
::tink::http::IncomingResponse_obj::__register();
::tink::http::_Response::OutgoingResponseData_obj::__register();
::tink::http::ResponseHeaderBase_obj::__register();
::tink::http::IncomingRequest_obj::__register();
::tink::http::OutgoingRequest_obj::__register();
::tink::http::OutgoingRequestHeader_obj::__register();
::tink::http::IncomingRequestHeader_obj::__register();
::tink::http::RequestHeader_obj::__register();
::tink::http::Message_obj::__register();
::tink::http::HeaderParser_obj::__register();
::tink::io::BytewiseParser_obj::__register();
::tink::http::HeaderField_obj::__register();
::tink::http::_Header::HeaderValue_Impl__obj::__register();
::tink::http::Header_obj::__register();
::tink::http::HandlerObject_obj::__register();
::tink::http::_Fetch::FetchResponse_Impl__obj::__register();
::tink::http::Container_obj::__register();
::tink::http::_Client::CustomClient_obj::__register();
::tink::http::ClientObject_obj::__register();
::tink::io::StreamParserObject_obj::__register();
::tink::core::_Promise::Promise_Impl__obj::__register();
::tink::core::MPair_obj::__register();
::tink::core::NamedWith_obj::__register();
::tink::core::_Lazy::LazyFunc_obj::__register();
::tink::core::_Future::LazyTrigger_obj::__register();
::tink::core::FutureTrigger_obj::__register();
::tink::core::_Future::NestedFuture_obj::__register();
::tink::core::_Future::SimpleFuture_obj::__register();
::tink::core::_Future::Future_Impl__obj::__register();
::tink::core::_Future::SyncFuture_obj::__register();
::tink::core::_Lazy::LazyConst_obj::__register();
::tink::core::_Lazy::LazyObject_obj::__register();
::tink::core::_Future::FutureObject_obj::__register();
::tink::core::TypedError_obj::__register();
::tink::core::_Callback::CallbackList_Impl__obj::__register();
::tink::core::_Callback::ListCell_obj::__register();
::tink::core::LinkObject_obj::__register();
::tink::chunk::ChunkCursor_obj::__register();
::tink::chunk::ByteChunk_obj::__register();
::tink::_Url::Url_Impl__obj::__register();
::tink::_Chunk::CompoundChunk_obj::__register();
::tink::chunk::ChunkObject_obj::__register();
::tink::chunk::ChunkBase_obj::__register();
::sys::ssl::_Socket::SocketOutput_obj::__register();
::sys::ssl::_Socket::SocketInput_obj::__register();
::sys::net::Socket_obj::__register();
::sys::net::_Socket::SocketOutput_obj::__register();
::sys::net::_Socket::SocketInput_obj::__register();
::sys::io::Process_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::sys::FileSystem_obj::__register();
::httpstatus::_HttpStatusMessage::HttpStatusMessage_Impl__obj::__register();
::haxe::io::Path_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesOutput_obj::__register();
::haxe::io::Output_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::http::HttpBase_obj::__register();
::haxe::format::JsonPrinter_obj::__register();
::haxe::format::JsonParser_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::EnumValueMap_obj::__register();
::haxe::ds::TreeNode_obj::__register();
::haxe::ds::BalancedTree_obj::__register();
::haxe::io::Bytes_obj::__register();
::haxe::Timer_obj::__register();
::haxe::MainLoop_obj::__register();
::haxe::MainEvent_obj::__register();
::sys::thread::Lock_obj::__register();
::sys::thread::Mutex_obj::__register();
::haxe::IMap_obj::__register();
::cpp::Lib_obj::__register();
::civo::net::CivoHttp_obj::__register();
::Type_obj::__register();
::Sys_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::Reflect_obj::__register();
::Lambda_obj::__register();
::EReg_obj::__register();
::Date_obj::__register();
::Civo_obj::__register();
::tink::streams::Step_obj::__boot();
::tink::streams::Reduction_obj::__boot();
::tink::streams::ReductionStep_obj::__boot();
::tink::streams::Conclusion_obj::__boot();
::tink::streams::Handled_obj::__boot();
::tink::streams::RegroupResult_obj::__boot();
::tink::streams::RegroupStatus_obj::__boot();
::tink::io::ParseResult_obj::__boot();
::tink::io::PipeResult_obj::__boot();
::tink::http::BodyPart_obj::__boot();
::tink::http::IncomingRequestBody_obj::__boot();
::tink::io::ParseStep_obj::__boot();
::tink::http::ClientType_obj::__boot();
::tink::core::Outcome_obj::__boot();
::tink::core::Noise_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::io::Encoding_obj::__boot();
::haxe::ds::Option_obj::__boot();
::haxe::StackItem_obj::__boot();
::ValueType_obj::__boot();
::sys::net::Host_obj::__init__();
::sys::ssl::Certificate_obj::__init__();
::sys::ssl::Key_obj::__init__();
::sys::ssl::Socket_obj::__init__();
::civo::Charges_obj::__boot();
::civo::Dns_obj::__boot();
::civo::Firewalls_obj::__boot();
::civo::Instances_obj::__boot();
::civo::Kubernetes_obj::__boot();
::civo::LoadBalancers_obj::__boot();
::civo::Networks_obj::__boot();
::civo::Quota_obj::__boot();
::civo::Regions_obj::__boot();
::civo::Snapshots_obj::__boot();
::civo::Ssh_obj::__boot();
::civo::Templates_obj::__boot();
::civo::Volumes_obj::__boot();
::civo::Webhooks_obj::__boot();
::haxe::EntryPoint_obj::__boot();
::sys::Http_obj::__boot();
::sys::net::Host_obj::__boot();
::sys::ssl::Certificate_obj::__boot();
::sys::ssl::Key_obj::__boot();
::sys::ssl::Socket_obj::__boot();
::tink::_Chunk::EmptyChunk_obj::__boot();
::tink::_Chunk::Chunk_Impl__obj::__boot();
::tink::core::_Callback::Callback_Impl__obj::__boot();
::tink::http::Fetch_obj::__boot();
::tink::streams::Empty_obj::__boot();
::tink::io::_Source::Source_Impl__obj::__boot();
::tink::io::_Worker::Worker_Impl__obj::__boot();
}

