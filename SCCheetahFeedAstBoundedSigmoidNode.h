//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class SCCheetahFeedAstNode;

@interface SCCheetahFeedAstBoundedSigmoidNode : NSObject <NSCopying, NSCoding>
{
    SCCheetahFeedAstNode *_variable;
    double _midpoint;
    double _endpoint;
    double _slope;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) double endpoint; // @synthesize endpoint=_endpoint;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVariable:(id)arg1 midpoint:(double)arg2 endpoint:(double)arg3 slope:(double)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double midpoint; // @synthesize midpoint=_midpoint;
@property(readonly, nonatomic) double slope; // @synthesize slope=_slope;
@property(readonly, copy, nonatomic) SCCheetahFeedAstNode *variable; // @synthesize variable=_variable;

@end
