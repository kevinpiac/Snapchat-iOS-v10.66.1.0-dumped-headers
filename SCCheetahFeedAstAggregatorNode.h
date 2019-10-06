//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCCheetahFeedAstAggregatorNode : NSObject <NSCopying, NSCoding>
{
    long long _aggregatorType;
    NSArray *_nodes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long aggregatorType; // @synthesize aggregatorType=_aggregatorType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAggregatorType:(long long)arg1 nodes:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;

@end

