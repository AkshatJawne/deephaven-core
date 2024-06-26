// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: deephaven/proto/storage.proto

#include "deephaven/proto/storage.pb.h"
#include "deephaven/proto/storage.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace io {
namespace deephaven {
namespace proto {
namespace backplane {
namespace grpc {

static const char* StorageService_method_names[] = {
  "/io.deephaven.proto.backplane.grpc.StorageService/ListItems",
  "/io.deephaven.proto.backplane.grpc.StorageService/FetchFile",
  "/io.deephaven.proto.backplane.grpc.StorageService/SaveFile",
  "/io.deephaven.proto.backplane.grpc.StorageService/MoveItem",
  "/io.deephaven.proto.backplane.grpc.StorageService/CreateDirectory",
  "/io.deephaven.proto.backplane.grpc.StorageService/DeleteItem",
};

std::unique_ptr< StorageService::Stub> StorageService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< StorageService::Stub> stub(new StorageService::Stub(channel, options));
  return stub;
}

StorageService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_ListItems_(StorageService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_FetchFile_(StorageService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SaveFile_(StorageService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_MoveItem_(StorageService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateDirectory_(StorageService_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteItem_(StorageService_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status StorageService::Stub::ListItems(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::ListItemsRequest& request, ::io::deephaven::proto::backplane::grpc::ListItemsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::io::deephaven::proto::backplane::grpc::ListItemsRequest, ::io::deephaven::proto::backplane::grpc::ListItemsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ListItems_, context, request, response);
}

void StorageService::Stub::async::ListItems(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::ListItemsRequest* request, ::io::deephaven::proto::backplane::grpc::ListItemsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::io::deephaven::proto::backplane::grpc::ListItemsRequest, ::io::deephaven::proto::backplane::grpc::ListItemsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListItems_, context, request, response, std::move(f));
}

void StorageService::Stub::async::ListItems(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::ListItemsRequest* request, ::io::deephaven::proto::backplane::grpc::ListItemsResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListItems_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::io::deephaven::proto::backplane::grpc::ListItemsResponse>* StorageService::Stub::PrepareAsyncListItemsRaw(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::ListItemsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::io::deephaven::proto::backplane::grpc::ListItemsResponse, ::io::deephaven::proto::backplane::grpc::ListItemsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ListItems_, context, request);
}

::grpc::ClientAsyncResponseReader< ::io::deephaven::proto::backplane::grpc::ListItemsResponse>* StorageService::Stub::AsyncListItemsRaw(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::ListItemsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncListItemsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status StorageService::Stub::FetchFile(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::FetchFileRequest& request, ::io::deephaven::proto::backplane::grpc::FetchFileResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::io::deephaven::proto::backplane::grpc::FetchFileRequest, ::io::deephaven::proto::backplane::grpc::FetchFileResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_FetchFile_, context, request, response);
}

void StorageService::Stub::async::FetchFile(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::FetchFileRequest* request, ::io::deephaven::proto::backplane::grpc::FetchFileResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::io::deephaven::proto::backplane::grpc::FetchFileRequest, ::io::deephaven::proto::backplane::grpc::FetchFileResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_FetchFile_, context, request, response, std::move(f));
}

void StorageService::Stub::async::FetchFile(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::FetchFileRequest* request, ::io::deephaven::proto::backplane::grpc::FetchFileResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_FetchFile_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::io::deephaven::proto::backplane::grpc::FetchFileResponse>* StorageService::Stub::PrepareAsyncFetchFileRaw(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::FetchFileRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::io::deephaven::proto::backplane::grpc::FetchFileResponse, ::io::deephaven::proto::backplane::grpc::FetchFileRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_FetchFile_, context, request);
}

::grpc::ClientAsyncResponseReader< ::io::deephaven::proto::backplane::grpc::FetchFileResponse>* StorageService::Stub::AsyncFetchFileRaw(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::FetchFileRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncFetchFileRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status StorageService::Stub::SaveFile(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::SaveFileRequest& request, ::io::deephaven::proto::backplane::grpc::SaveFileResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::io::deephaven::proto::backplane::grpc::SaveFileRequest, ::io::deephaven::proto::backplane::grpc::SaveFileResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SaveFile_, context, request, response);
}

void StorageService::Stub::async::SaveFile(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::SaveFileRequest* request, ::io::deephaven::proto::backplane::grpc::SaveFileResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::io::deephaven::proto::backplane::grpc::SaveFileRequest, ::io::deephaven::proto::backplane::grpc::SaveFileResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SaveFile_, context, request, response, std::move(f));
}

void StorageService::Stub::async::SaveFile(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::SaveFileRequest* request, ::io::deephaven::proto::backplane::grpc::SaveFileResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SaveFile_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::io::deephaven::proto::backplane::grpc::SaveFileResponse>* StorageService::Stub::PrepareAsyncSaveFileRaw(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::SaveFileRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::io::deephaven::proto::backplane::grpc::SaveFileResponse, ::io::deephaven::proto::backplane::grpc::SaveFileRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SaveFile_, context, request);
}

::grpc::ClientAsyncResponseReader< ::io::deephaven::proto::backplane::grpc::SaveFileResponse>* StorageService::Stub::AsyncSaveFileRaw(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::SaveFileRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSaveFileRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status StorageService::Stub::MoveItem(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::MoveItemRequest& request, ::io::deephaven::proto::backplane::grpc::MoveItemResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::io::deephaven::proto::backplane::grpc::MoveItemRequest, ::io::deephaven::proto::backplane::grpc::MoveItemResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_MoveItem_, context, request, response);
}

void StorageService::Stub::async::MoveItem(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::MoveItemRequest* request, ::io::deephaven::proto::backplane::grpc::MoveItemResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::io::deephaven::proto::backplane::grpc::MoveItemRequest, ::io::deephaven::proto::backplane::grpc::MoveItemResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_MoveItem_, context, request, response, std::move(f));
}

void StorageService::Stub::async::MoveItem(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::MoveItemRequest* request, ::io::deephaven::proto::backplane::grpc::MoveItemResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_MoveItem_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::io::deephaven::proto::backplane::grpc::MoveItemResponse>* StorageService::Stub::PrepareAsyncMoveItemRaw(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::MoveItemRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::io::deephaven::proto::backplane::grpc::MoveItemResponse, ::io::deephaven::proto::backplane::grpc::MoveItemRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_MoveItem_, context, request);
}

::grpc::ClientAsyncResponseReader< ::io::deephaven::proto::backplane::grpc::MoveItemResponse>* StorageService::Stub::AsyncMoveItemRaw(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::MoveItemRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncMoveItemRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status StorageService::Stub::CreateDirectory(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::CreateDirectoryRequest& request, ::io::deephaven::proto::backplane::grpc::CreateDirectoryResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::io::deephaven::proto::backplane::grpc::CreateDirectoryRequest, ::io::deephaven::proto::backplane::grpc::CreateDirectoryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CreateDirectory_, context, request, response);
}

void StorageService::Stub::async::CreateDirectory(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::CreateDirectoryRequest* request, ::io::deephaven::proto::backplane::grpc::CreateDirectoryResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::io::deephaven::proto::backplane::grpc::CreateDirectoryRequest, ::io::deephaven::proto::backplane::grpc::CreateDirectoryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateDirectory_, context, request, response, std::move(f));
}

void StorageService::Stub::async::CreateDirectory(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::CreateDirectoryRequest* request, ::io::deephaven::proto::backplane::grpc::CreateDirectoryResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateDirectory_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::io::deephaven::proto::backplane::grpc::CreateDirectoryResponse>* StorageService::Stub::PrepareAsyncCreateDirectoryRaw(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::CreateDirectoryRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::io::deephaven::proto::backplane::grpc::CreateDirectoryResponse, ::io::deephaven::proto::backplane::grpc::CreateDirectoryRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CreateDirectory_, context, request);
}

::grpc::ClientAsyncResponseReader< ::io::deephaven::proto::backplane::grpc::CreateDirectoryResponse>* StorageService::Stub::AsyncCreateDirectoryRaw(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::CreateDirectoryRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreateDirectoryRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status StorageService::Stub::DeleteItem(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::DeleteItemRequest& request, ::io::deephaven::proto::backplane::grpc::DeleteItemResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::io::deephaven::proto::backplane::grpc::DeleteItemRequest, ::io::deephaven::proto::backplane::grpc::DeleteItemResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_DeleteItem_, context, request, response);
}

void StorageService::Stub::async::DeleteItem(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::DeleteItemRequest* request, ::io::deephaven::proto::backplane::grpc::DeleteItemResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::io::deephaven::proto::backplane::grpc::DeleteItemRequest, ::io::deephaven::proto::backplane::grpc::DeleteItemResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeleteItem_, context, request, response, std::move(f));
}

void StorageService::Stub::async::DeleteItem(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::DeleteItemRequest* request, ::io::deephaven::proto::backplane::grpc::DeleteItemResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeleteItem_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::io::deephaven::proto::backplane::grpc::DeleteItemResponse>* StorageService::Stub::PrepareAsyncDeleteItemRaw(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::DeleteItemRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::io::deephaven::proto::backplane::grpc::DeleteItemResponse, ::io::deephaven::proto::backplane::grpc::DeleteItemRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_DeleteItem_, context, request);
}

::grpc::ClientAsyncResponseReader< ::io::deephaven::proto::backplane::grpc::DeleteItemResponse>* StorageService::Stub::AsyncDeleteItemRaw(::grpc::ClientContext* context, const ::io::deephaven::proto::backplane::grpc::DeleteItemRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDeleteItemRaw(context, request, cq);
  result->StartCall();
  return result;
}

StorageService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StorageService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< StorageService::Service, ::io::deephaven::proto::backplane::grpc::ListItemsRequest, ::io::deephaven::proto::backplane::grpc::ListItemsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](StorageService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::io::deephaven::proto::backplane::grpc::ListItemsRequest* req,
             ::io::deephaven::proto::backplane::grpc::ListItemsResponse* resp) {
               return service->ListItems(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StorageService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< StorageService::Service, ::io::deephaven::proto::backplane::grpc::FetchFileRequest, ::io::deephaven::proto::backplane::grpc::FetchFileResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](StorageService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::io::deephaven::proto::backplane::grpc::FetchFileRequest* req,
             ::io::deephaven::proto::backplane::grpc::FetchFileResponse* resp) {
               return service->FetchFile(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StorageService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< StorageService::Service, ::io::deephaven::proto::backplane::grpc::SaveFileRequest, ::io::deephaven::proto::backplane::grpc::SaveFileResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](StorageService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::io::deephaven::proto::backplane::grpc::SaveFileRequest* req,
             ::io::deephaven::proto::backplane::grpc::SaveFileResponse* resp) {
               return service->SaveFile(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StorageService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< StorageService::Service, ::io::deephaven::proto::backplane::grpc::MoveItemRequest, ::io::deephaven::proto::backplane::grpc::MoveItemResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](StorageService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::io::deephaven::proto::backplane::grpc::MoveItemRequest* req,
             ::io::deephaven::proto::backplane::grpc::MoveItemResponse* resp) {
               return service->MoveItem(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StorageService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< StorageService::Service, ::io::deephaven::proto::backplane::grpc::CreateDirectoryRequest, ::io::deephaven::proto::backplane::grpc::CreateDirectoryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](StorageService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::io::deephaven::proto::backplane::grpc::CreateDirectoryRequest* req,
             ::io::deephaven::proto::backplane::grpc::CreateDirectoryResponse* resp) {
               return service->CreateDirectory(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StorageService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< StorageService::Service, ::io::deephaven::proto::backplane::grpc::DeleteItemRequest, ::io::deephaven::proto::backplane::grpc::DeleteItemResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](StorageService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::io::deephaven::proto::backplane::grpc::DeleteItemRequest* req,
             ::io::deephaven::proto::backplane::grpc::DeleteItemResponse* resp) {
               return service->DeleteItem(ctx, req, resp);
             }, this)));
}

StorageService::Service::~Service() {
}

::grpc::Status StorageService::Service::ListItems(::grpc::ServerContext* context, const ::io::deephaven::proto::backplane::grpc::ListItemsRequest* request, ::io::deephaven::proto::backplane::grpc::ListItemsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StorageService::Service::FetchFile(::grpc::ServerContext* context, const ::io::deephaven::proto::backplane::grpc::FetchFileRequest* request, ::io::deephaven::proto::backplane::grpc::FetchFileResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StorageService::Service::SaveFile(::grpc::ServerContext* context, const ::io::deephaven::proto::backplane::grpc::SaveFileRequest* request, ::io::deephaven::proto::backplane::grpc::SaveFileResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StorageService::Service::MoveItem(::grpc::ServerContext* context, const ::io::deephaven::proto::backplane::grpc::MoveItemRequest* request, ::io::deephaven::proto::backplane::grpc::MoveItemResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StorageService::Service::CreateDirectory(::grpc::ServerContext* context, const ::io::deephaven::proto::backplane::grpc::CreateDirectoryRequest* request, ::io::deephaven::proto::backplane::grpc::CreateDirectoryResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StorageService::Service::DeleteItem(::grpc::ServerContext* context, const ::io::deephaven::proto::backplane::grpc::DeleteItemRequest* request, ::io::deephaven::proto::backplane::grpc::DeleteItemResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace io
}  // namespace deephaven
}  // namespace proto
}  // namespace backplane
}  // namespace grpc

