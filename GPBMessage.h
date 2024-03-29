//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GPBExtensionDescriptor, GPBFieldDescriptor, GPBUnknownFieldSet, NSMutableDictionary;
@protocol OS_dispatch_semaphore;

@interface GPBMessage : NSObject <NSSecureCoding, NSCopying>
{
    GPBUnknownFieldSet *unknownFields_;
    NSMutableDictionary *extensionMap_;
    NSMutableDictionary *autocreatedExtensionMap_;
    GPBMessage *autocreator_;
    GPBFieldDescriptor *autocreatorField_;
    GPBExtensionDescriptor *autocreatorExtension_;
    struct GPBMessage_Storage *messageStorage_;
    NSObject<OS_dispatch_semaphore> *readOnlySemaphore_;
}

+ (_Bool)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)descriptor;
+ (void)initialize;
+ (id)message;
+ (id)parseDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;
+ (id)parseFromData:(id)arg1 error:(id *)arg2;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;
+ (_Bool)resolveClassMethod:(SEL)arg1;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (_Bool)supportsSecureCoding;
- (void)addExtension:(id)arg1 value:(id)arg2;
- (void)addUnknownMapEntry:(int)arg1 value:(id)arg2;
- (void)clear;
- (void)clearExtension:(id)arg1;
- (void)copyFieldsInto:(id)arg1 zone:(struct _NSZone *)arg2 descriptor:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)data;
- (void)dealloc;
- (id)delimitedData;
- (id)description;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionsCurrentlySet;
- (id)getExistingExtension:(id)arg1;
- (id)getExtension:(id)arg1;
- (_Bool)hasExtension:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;
- (void)internalClear:(_Bool)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isInitialized) _Bool initialized;
- (void)mergeDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)mergeFrom:(id)arg1;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)mergeFromData:(id)arg1 extensionRegistry:(id)arg2;
- (void)parseMessageSet:(id)arg1 extensionRegistry:(id)arg2;
- (_Bool)parseUnknownField:(id)arg1 extensionRegistry:(id)arg2 tag:(unsigned int)arg3;
- (unsigned long long)serializedSize;
- (void)setExtension:(id)arg1 index:(unsigned long long)arg2 value:(id)arg3;
- (void)setExtension:(id)arg1 value:(id)arg2;
@property(copy, nonatomic) GPBUnknownFieldSet *unknownFields;
- (void)writeDelimitedToCodedOutputStream:(id)arg1;
- (void)writeDelimitedToOutputStream:(id)arg1;
- (void)writeExtensionsToCodedOutputStream:(id)arg1 range:(struct GPBExtensionRange)arg2;
- (void)writeField:(id)arg1 toCodedOutputStream:(id)arg2;
- (void)writeToCodedOutputStream:(id)arg1;
- (void)writeToOutputStream:(id)arg1;

@end

