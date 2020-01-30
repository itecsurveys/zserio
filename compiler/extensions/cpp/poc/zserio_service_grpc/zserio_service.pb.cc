// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: zserio_service.proto

#include "zserio_service.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace zserio_service_grpc {
class RequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Request>
      _instance;
} _Request_default_instance_;
class ResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Response>
      _instance;
} _Response_default_instance_;
}  // namespace zserio_service_grpc
namespace protobuf_zserio_5fservice_2eproto {
void InitDefaultsRequestImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::zserio_service_grpc::_Request_default_instance_;
    new (ptr) ::zserio_service_grpc::Request();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zserio_service_grpc::Request::InitAsDefaultInstance();
}

void InitDefaultsRequest() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsRequestImpl);
}

void InitDefaultsResponseImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::zserio_service_grpc::_Response_default_instance_;
    new (ptr) ::zserio_service_grpc::Response();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zserio_service_grpc::Response::InitAsDefaultInstance();
}

void InitDefaultsResponse() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsResponseImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zserio_service_grpc::Request, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zserio_service_grpc::Request, procname_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zserio_service_grpc::Request, requestdata_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zserio_service_grpc::Response, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zserio_service_grpc::Response, responsedata_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::zserio_service_grpc::Request)},
  { 7, -1, sizeof(::zserio_service_grpc::Response)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::zserio_service_grpc::_Request_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::zserio_service_grpc::_Response_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "zserio_service.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\024zserio_service.proto\022\023zserio_service_g"
      "rpc\"0\n\007Request\022\020\n\010procName\030\001 \001(\t\022\023\n\013requ"
      "estData\030\002 \001(\014\" \n\010Response\022\024\n\014responseDat"
      "a\030\001 \001(\0142_\n\rZserioService\022N\n\rcallProcedur"
      "e\022\034.zserio_service_grpc.Request\032\035.zserio"
      "_service_grpc.Response\"\000b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 232);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "zserio_service.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_zserio_5fservice_2eproto
namespace zserio_service_grpc {

// ===================================================================

void Request::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Request::kProcNameFieldNumber;
const int Request::kRequestDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Request::Request()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_zserio_5fservice_2eproto::InitDefaultsRequest();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:zserio_service_grpc.Request)
}
Request::Request(const Request& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  procname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.procname().size() > 0) {
    procname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.procname_);
  }
  requestdata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.requestdata().size() > 0) {
    requestdata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.requestdata_);
  }
  // @@protoc_insertion_point(copy_constructor:zserio_service_grpc.Request)
}

void Request::SharedCtor() {
  procname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  requestdata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

Request::~Request() {
  // @@protoc_insertion_point(destructor:zserio_service_grpc.Request)
  SharedDtor();
}

void Request::SharedDtor() {
  procname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  requestdata_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Request::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Request::descriptor() {
  ::protobuf_zserio_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_zserio_5fservice_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Request& Request::default_instance() {
  ::protobuf_zserio_5fservice_2eproto::InitDefaultsRequest();
  return *internal_default_instance();
}

Request* Request::New(::google::protobuf::Arena* arena) const {
  Request* n = new Request;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Request::Clear() {
// @@protoc_insertion_point(message_clear_start:zserio_service_grpc.Request)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  procname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  requestdata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Request::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:zserio_service_grpc.Request)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string procName = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_procname()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->procname().data(), static_cast<int>(this->procname().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "zserio_service_grpc.Request.procName"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes requestData = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_requestdata()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:zserio_service_grpc.Request)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:zserio_service_grpc.Request)
  return false;
#undef DO_
}

void Request::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:zserio_service_grpc.Request)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string procName = 1;
  if (this->procname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->procname().data(), static_cast<int>(this->procname().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "zserio_service_grpc.Request.procName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->procname(), output);
  }

  // bytes requestData = 2;
  if (this->requestdata().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->requestdata(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:zserio_service_grpc.Request)
}

::google::protobuf::uint8* Request::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:zserio_service_grpc.Request)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string procName = 1;
  if (this->procname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->procname().data(), static_cast<int>(this->procname().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "zserio_service_grpc.Request.procName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->procname(), target);
  }

  // bytes requestData = 2;
  if (this->requestdata().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->requestdata(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:zserio_service_grpc.Request)
  return target;
}

size_t Request::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:zserio_service_grpc.Request)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string procName = 1;
  if (this->procname().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->procname());
  }

  // bytes requestData = 2;
  if (this->requestdata().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->requestdata());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Request::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:zserio_service_grpc.Request)
  GOOGLE_DCHECK_NE(&from, this);
  const Request* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Request>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:zserio_service_grpc.Request)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:zserio_service_grpc.Request)
    MergeFrom(*source);
  }
}

void Request::MergeFrom(const Request& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:zserio_service_grpc.Request)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.procname().size() > 0) {

    procname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.procname_);
  }
  if (from.requestdata().size() > 0) {

    requestdata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.requestdata_);
  }
}

void Request::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:zserio_service_grpc.Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Request::CopyFrom(const Request& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:zserio_service_grpc.Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Request::IsInitialized() const {
  return true;
}

void Request::Swap(Request* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Request::InternalSwap(Request* other) {
  using std::swap;
  procname_.Swap(&other->procname_);
  requestdata_.Swap(&other->requestdata_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Request::GetMetadata() const {
  protobuf_zserio_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_zserio_5fservice_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Response::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Response::kResponseDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Response::Response()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_zserio_5fservice_2eproto::InitDefaultsResponse();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:zserio_service_grpc.Response)
}
Response::Response(const Response& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  responsedata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.responsedata().size() > 0) {
    responsedata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.responsedata_);
  }
  // @@protoc_insertion_point(copy_constructor:zserio_service_grpc.Response)
}

void Response::SharedCtor() {
  responsedata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

Response::~Response() {
  // @@protoc_insertion_point(destructor:zserio_service_grpc.Response)
  SharedDtor();
}

void Response::SharedDtor() {
  responsedata_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Response::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Response::descriptor() {
  ::protobuf_zserio_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_zserio_5fservice_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Response& Response::default_instance() {
  ::protobuf_zserio_5fservice_2eproto::InitDefaultsResponse();
  return *internal_default_instance();
}

Response* Response::New(::google::protobuf::Arena* arena) const {
  Response* n = new Response;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Response::Clear() {
// @@protoc_insertion_point(message_clear_start:zserio_service_grpc.Response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  responsedata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Response::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:zserio_service_grpc.Response)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes responseData = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_responsedata()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:zserio_service_grpc.Response)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:zserio_service_grpc.Response)
  return false;
#undef DO_
}

void Response::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:zserio_service_grpc.Response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes responseData = 1;
  if (this->responsedata().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->responsedata(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:zserio_service_grpc.Response)
}

::google::protobuf::uint8* Response::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:zserio_service_grpc.Response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes responseData = 1;
  if (this->responsedata().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->responsedata(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:zserio_service_grpc.Response)
  return target;
}

size_t Response::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:zserio_service_grpc.Response)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bytes responseData = 1;
  if (this->responsedata().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->responsedata());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Response::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:zserio_service_grpc.Response)
  GOOGLE_DCHECK_NE(&from, this);
  const Response* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Response>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:zserio_service_grpc.Response)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:zserio_service_grpc.Response)
    MergeFrom(*source);
  }
}

void Response::MergeFrom(const Response& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:zserio_service_grpc.Response)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.responsedata().size() > 0) {

    responsedata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.responsedata_);
  }
}

void Response::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:zserio_service_grpc.Response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Response::CopyFrom(const Response& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:zserio_service_grpc.Response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Response::IsInitialized() const {
  return true;
}

void Response::Swap(Response* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Response::InternalSwap(Response* other) {
  using std::swap;
  responsedata_.Swap(&other->responsedata_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Response::GetMetadata() const {
  protobuf_zserio_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_zserio_5fservice_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace zserio_service_grpc

// @@protoc_insertion_point(global_scope)
