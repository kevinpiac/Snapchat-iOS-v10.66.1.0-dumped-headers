//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPBDictionaryInternalsProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class GPBMessage, NSMutableDictionary;

@interface GPBUInt64UInt64Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

+ (id)dictionary;
+ (id)dictionaryWithCapacity:(unsigned long long)arg1;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithUInt64:(unsigned long long)arg1 forKey:(unsigned long long)arg2;
+ (id)dictionaryWithUInt64s:(const unsigned long long *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned long long)arg3;
- (void)addEntriesFromDictionary:(id)arg1;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)dealloc;
- (id)description;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)enumerateKeysAndUInt64sUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)getUInt64:(unsigned long long *)arg1 forKey:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithUInt64s:(const unsigned long long *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned long long)arg3;
- (_Bool)isEqual:(id)arg1;
- (void)removeAll;
- (void)removeUInt64ForKey:(unsigned long long)arg1;
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;
- (void)setUInt64:(unsigned long long)arg1 forKey:(unsigned long long)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;

@end

