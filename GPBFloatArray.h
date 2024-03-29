//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GPBMessage;

@interface GPBFloatArray : NSObject <NSCopying>
{
    GPBMessage *_autocreator;
    float *_values;
    unsigned long long _count;
    unsigned long long _capacity;
}

+ (id)array;
+ (id)arrayWithCapacity:(unsigned long long)arg1;
+ (id)arrayWithValue:(float)arg1;
+ (id)arrayWithValueArray:(id)arg1;
- (void)addValue:(float)arg1;
- (void)addValues:(const float *)arg1 count:(unsigned long long)arg2;
- (void)addValuesFromArray:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)dealloc;
- (id)description;
- (void)enumerateValuesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithValueArray:(id)arg1;
- (id)initWithValues:(const float *)arg1 count:(unsigned long long)arg2;
- (void)insertValue:(float)arg1 atIndex:(unsigned long long)arg2;
- (void)internalResizeToCapacity:(unsigned long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)removeAll;
- (void)removeValueAtIndex:(unsigned long long)arg1;
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(float)arg2;
- (float)valueAtIndex:(unsigned long long)arg1;

@end

