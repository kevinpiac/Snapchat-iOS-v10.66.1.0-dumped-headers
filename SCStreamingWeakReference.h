//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCStreamingWeakReference : NSObject <NSCopying>
{
    unsigned long long _hash;
    id _value;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) __weak id value; // @synthesize value=_value;

@end

