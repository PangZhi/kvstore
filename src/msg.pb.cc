// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "msg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* clientMsg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  clientMsg_reflection_ = NULL;
const ::google::protobuf::Descriptor* serverMsg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  serverMsg_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_msg_2eproto() {
  protobuf_AddDesc_msg_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "msg.proto");
  GOOGLE_CHECK(file != NULL);
  clientMsg_descriptor_ = file->message_type(0);
  static const int clientMsg_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(clientMsg, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(clientMsg, key_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(clientMsg, value_),
  };
  clientMsg_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      clientMsg_descriptor_,
      clientMsg::default_instance_,
      clientMsg_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(clientMsg, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(clientMsg, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(clientMsg));
  serverMsg_descriptor_ = file->message_type(1);
  static const int serverMsg_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(serverMsg, status_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(serverMsg, old_value_),
  };
  serverMsg_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      serverMsg_descriptor_,
      serverMsg::default_instance_,
      serverMsg_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(serverMsg, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(serverMsg, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(serverMsg));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_msg_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    clientMsg_descriptor_, &clientMsg::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    serverMsg_descriptor_, &serverMsg::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_msg_2eproto() {
  delete clientMsg::default_instance_;
  delete clientMsg_reflection_;
  delete serverMsg::default_instance_;
  delete serverMsg_reflection_;
}

void protobuf_AddDesc_msg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\tmsg.proto\"5\n\tclientMsg\022\014\n\004type\030\001 \002(\005\022\013"
    "\n\003key\030\002 \002(\t\022\r\n\005value\030\003 \001(\t\".\n\tserverMsg\022"
    "\016\n\006status\030\001 \002(\005\022\021\n\told_value\030\002 \001(\t", 114);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "msg.proto", &protobuf_RegisterTypes);
  clientMsg::default_instance_ = new clientMsg();
  serverMsg::default_instance_ = new serverMsg();
  clientMsg::default_instance_->InitAsDefaultInstance();
  serverMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_msg_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_msg_2eproto {
  StaticDescriptorInitializer_msg_2eproto() {
    protobuf_AddDesc_msg_2eproto();
  }
} static_descriptor_initializer_msg_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int clientMsg::kTypeFieldNumber;
const int clientMsg::kKeyFieldNumber;
const int clientMsg::kValueFieldNumber;
#endif  // !_MSC_VER

clientMsg::clientMsg()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void clientMsg::InitAsDefaultInstance() {
}

clientMsg::clientMsg(const clientMsg& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void clientMsg::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  key_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  value_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

clientMsg::~clientMsg() {
  SharedDtor();
}

void clientMsg::SharedDtor() {
  if (key_ != &::google::protobuf::internal::kEmptyString) {
    delete key_;
  }
  if (value_ != &::google::protobuf::internal::kEmptyString) {
    delete value_;
  }
  if (this != default_instance_) {
  }
}

void clientMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* clientMsg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return clientMsg_descriptor_;
}

const clientMsg& clientMsg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_msg_2eproto();
  return *default_instance_;
}

clientMsg* clientMsg::default_instance_ = NULL;

clientMsg* clientMsg::New() const {
  return new clientMsg;
}

void clientMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0;
    if (has_key()) {
      if (key_ != &::google::protobuf::internal::kEmptyString) {
        key_->clear();
      }
    }
    if (has_value()) {
      if (value_ != &::google::protobuf::internal::kEmptyString) {
        value_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool clientMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_key;
        break;
      }

      // required string key = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_key:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->key().data(), this->key().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_value;
        break;
      }

      // optional string value = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->value().data(), this->value().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void clientMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->type(), output);
  }

  // required string key = 2;
  if (has_key()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->key(), output);
  }

  // optional string value = 3;
  if (has_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->value(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* clientMsg::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->type(), target);
  }

  // required string key = 2;
  if (has_key()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->key(), target);
  }

  // optional string value = 3;
  if (has_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->value(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int clientMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }

    // required string key = 2;
    if (has_key()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->key());
    }

    // optional string value = 3;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->value());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void clientMsg::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const clientMsg* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const clientMsg*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void clientMsg::MergeFrom(const clientMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_key()) {
      set_key(from.key());
    }
    if (from.has_value()) {
      set_value(from.value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void clientMsg::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void clientMsg::CopyFrom(const clientMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool clientMsg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void clientMsg::Swap(clientMsg* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(key_, other->key_);
    std::swap(value_, other->value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata clientMsg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = clientMsg_descriptor_;
  metadata.reflection = clientMsg_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int serverMsg::kStatusFieldNumber;
const int serverMsg::kOldValueFieldNumber;
#endif  // !_MSC_VER

serverMsg::serverMsg()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void serverMsg::InitAsDefaultInstance() {
}

serverMsg::serverMsg(const serverMsg& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void serverMsg::SharedCtor() {
  _cached_size_ = 0;
  status_ = 0;
  old_value_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

serverMsg::~serverMsg() {
  SharedDtor();
}

void serverMsg::SharedDtor() {
  if (old_value_ != &::google::protobuf::internal::kEmptyString) {
    delete old_value_;
  }
  if (this != default_instance_) {
  }
}

void serverMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* serverMsg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return serverMsg_descriptor_;
}

const serverMsg& serverMsg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_msg_2eproto();
  return *default_instance_;
}

serverMsg* serverMsg::default_instance_ = NULL;

serverMsg* serverMsg::New() const {
  return new serverMsg;
}

void serverMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    status_ = 0;
    if (has_old_value()) {
      if (old_value_ != &::google::protobuf::internal::kEmptyString) {
        old_value_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool serverMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 status = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &status_)));
          set_has_status();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_old_value;
        break;
      }

      // optional string old_value = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_old_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_old_value()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->old_value().data(), this->old_value().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void serverMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 status = 1;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->status(), output);
  }

  // optional string old_value = 2;
  if (has_old_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->old_value().data(), this->old_value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->old_value(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* serverMsg::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 status = 1;
  if (has_status()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->status(), target);
  }

  // optional string old_value = 2;
  if (has_old_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->old_value().data(), this->old_value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->old_value(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int serverMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 status = 1;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->status());
    }

    // optional string old_value = 2;
    if (has_old_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->old_value());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void serverMsg::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const serverMsg* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const serverMsg*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void serverMsg::MergeFrom(const serverMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_old_value()) {
      set_old_value(from.old_value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void serverMsg::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void serverMsg::CopyFrom(const serverMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool serverMsg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void serverMsg::Swap(serverMsg* other) {
  if (other != this) {
    std::swap(status_, other->status_);
    std::swap(old_value_, other->old_value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata serverMsg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = serverMsg_descriptor_;
  metadata.reflection = serverMsg_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
