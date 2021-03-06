// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: img_copy.proto

#include "img_copy.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR image::image(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.image_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.id_)*/0
  , /*decltype(_impl_.width_)*/0
  , /*decltype(_impl_.height_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct imageDefaultTypeInternal {
  PROTOBUF_CONSTEXPR imageDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~imageDefaultTypeInternal() {}
  union {
    image _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 imageDefaultTypeInternal _image_default_instance_;
static ::_pb::Metadata file_level_metadata_img_5fcopy_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_img_5fcopy_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_img_5fcopy_2eproto = nullptr;

const uint32_t TableStruct_img_5fcopy_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::image, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::image, _impl_.id_),
  PROTOBUF_FIELD_OFFSET(::image, _impl_.width_),
  PROTOBUF_FIELD_OFFSET(::image, _impl_.height_),
  PROTOBUF_FIELD_OFFSET(::image, _impl_.image_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::image)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_image_default_instance_._instance,
};

const char descriptor_table_protodef_img_5fcopy_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016img_copy.proto\"A\n\005image\022\n\n\002id\030\001 \001(\005\022\r\n"
  "\005width\030\002 \001(\005\022\016\n\006height\030\003 \001(\005\022\r\n\005image\030\004 "
  "\001(\014b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_img_5fcopy_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_img_5fcopy_2eproto = {
    false, false, 91, descriptor_table_protodef_img_5fcopy_2eproto,
    "img_copy.proto",
    &descriptor_table_img_5fcopy_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_img_5fcopy_2eproto::offsets,
    file_level_metadata_img_5fcopy_2eproto, file_level_enum_descriptors_img_5fcopy_2eproto,
    file_level_service_descriptors_img_5fcopy_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_img_5fcopy_2eproto_getter() {
  return &descriptor_table_img_5fcopy_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_img_5fcopy_2eproto(&descriptor_table_img_5fcopy_2eproto);

// ===================================================================

class image::_Internal {
 public:
};

image::image(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:image)
}
image::image(const image& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  image* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.image_){}
    , decltype(_impl_.id_){}
    , decltype(_impl_.width_){}
    , decltype(_impl_.height_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.image_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.image_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_image().empty()) {
    _this->_impl_.image_.Set(from._internal_image(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.id_, &from._impl_.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.height_) -
    reinterpret_cast<char*>(&_impl_.id_)) + sizeof(_impl_.height_));
  // @@protoc_insertion_point(copy_constructor:image)
}

inline void image::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.image_){}
    , decltype(_impl_.id_){0}
    , decltype(_impl_.width_){0}
    , decltype(_impl_.height_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.image_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.image_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

image::~image() {
  // @@protoc_insertion_point(destructor:image)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void image::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.image_.Destroy();
}

void image::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void image::Clear() {
// @@protoc_insertion_point(message_clear_start:image)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.image_.ClearToEmpty();
  ::memset(&_impl_.id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.height_) -
      reinterpret_cast<char*>(&_impl_.id_)) + sizeof(_impl_.height_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* image::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 width = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.width_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 height = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.height_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes image = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_image();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* image::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:image)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->_internal_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_id(), target);
  }

  // int32 width = 2;
  if (this->_internal_width() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_width(), target);
  }

  // int32 height = 3;
  if (this->_internal_height() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_height(), target);
  }

  // bytes image = 4;
  if (!this->_internal_image().empty()) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_image(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:image)
  return target;
}

size_t image::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:image)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes image = 4;
  if (!this->_internal_image().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_image());
  }

  // int32 id = 1;
  if (this->_internal_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_id());
  }

  // int32 width = 2;
  if (this->_internal_width() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_width());
  }

  // int32 height = 3;
  if (this->_internal_height() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_height());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData image::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    image::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*image::GetClassData() const { return &_class_data_; }


void image::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<image*>(&to_msg);
  auto& from = static_cast<const image&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:image)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_image().empty()) {
    _this->_internal_set_image(from._internal_image());
  }
  if (from._internal_id() != 0) {
    _this->_internal_set_id(from._internal_id());
  }
  if (from._internal_width() != 0) {
    _this->_internal_set_width(from._internal_width());
  }
  if (from._internal_height() != 0) {
    _this->_internal_set_height(from._internal_height());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void image::CopyFrom(const image& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:image)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool image::IsInitialized() const {
  return true;
}

void image::InternalSwap(image* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.image_, lhs_arena,
      &other->_impl_.image_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(image, _impl_.height_)
      + sizeof(image::_impl_.height_)
      - PROTOBUF_FIELD_OFFSET(image, _impl_.id_)>(
          reinterpret_cast<char*>(&_impl_.id_),
          reinterpret_cast<char*>(&other->_impl_.id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata image::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_img_5fcopy_2eproto_getter, &descriptor_table_img_5fcopy_2eproto_once,
      file_level_metadata_img_5fcopy_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::image*
Arena::CreateMaybeMessage< ::image >(Arena* arena) {
  return Arena::CreateMessageInternal< ::image >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
