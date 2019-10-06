//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GPBEnumDescriptor, NSString;

@interface GPBExtensionDescriptor : NSObject <NSCopying>
{
    struct GPBExtensionDescription *description_;
    CDUnion_88782d86 defaultValue_;
    Class containingMessageClass_;
}

@property(readonly, nonatomic) int alternateWireType;
- (long long)compareByFieldNumber:(id)arg1;
@property(readonly, nonatomic) Class containingMessageClass; // @synthesize containingMessageClass=containingMessageClass_;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned char dataType;
- (void)dealloc;
@property(readonly, nonatomic) id defaultValue;
@property(readonly, nonatomic) GPBEnumDescriptor *enumDescriptor;
@property(readonly, nonatomic) unsigned int fieldNumber;
- (id)initWithExtensionDescription:(struct GPBExtensionDescription *)arg1;
@property(readonly, nonatomic, getter=isPackable) _Bool packable;
@property(readonly, nonatomic, getter=isRepeated) _Bool repeated;
@property(readonly, nonatomic) Class msgClass;
@property(readonly, nonatomic) NSString *singletonName;
- (const char *)singletonNameC;
@property(readonly, nonatomic) int wireType;

@end

