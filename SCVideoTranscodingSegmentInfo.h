//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSURL, NSValue, SCVideoTranscodingSegmentHandler;

@interface SCVideoTranscodingSegmentInfo : NSObject <NSCopying>
{
    NSURL *_outputUrl;
    NSValue *_timeRange;
    SCVideoTranscodingSegmentHandler *_segmentHandler;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithOutputUrl:(id)arg1 timeRange:(id)arg2 segmentHandler:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *outputUrl; // @synthesize outputUrl=_outputUrl;
@property(readonly, copy, nonatomic) SCVideoTranscodingSegmentHandler *segmentHandler; // @synthesize segmentHandler=_segmentHandler;
@property(readonly, copy, nonatomic) NSValue *timeRange; // @synthesize timeRange=_timeRange;

@end

