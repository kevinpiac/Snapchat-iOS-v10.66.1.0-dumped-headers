//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPBDictionaryInternalsProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class GPBMessage, NSMutableDictionary;

@interface GPBUInt32Int64Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

+ (id)dictionary;
+ (id)dictionaryWithCapacity:(unsigned long long)arg1;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithInt64:(long long)arg1 forKey:(unsigned int)arg2;
+ (id)dictionaryWithInt64s:(const long long *)arg1 forKeys:(const unsigned int *)arg2 count:(unsigned long long)arg3;
- (void)addEntriesFromDictionary:(id)arg1;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)dealloc;
- (id)description;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)enumerateKeysAndInt64sUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)getInt64:(long long *)arg1 forKey:(unsigned int)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithInt64s:(const long long *)arg1 forKeys:(const unsigned int *)arg2 count:(unsigned long long)arg3;
- (_Bool)isEqual:(id)arg1;
- (void)removeAll;
- (void)removeInt64ForKey:(unsigned int)arg1;
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;
- (void)setInt64:(long long)arg1 forKey:(unsigned int)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;

@end

