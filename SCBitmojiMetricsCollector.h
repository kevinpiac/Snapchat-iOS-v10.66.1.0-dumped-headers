//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCBitmojiMetrics;
@protocol SCPerforming;

@interface SCBitmojiMetricsCollector : NSObject
{
    id <SCPerforming> _performer;
    SCBitmojiMetrics *_totalBucket;
    NSMutableDictionary *_featureBuckets;
    SCBitmojiMetrics *_fetchTypeBuckets[7];
}

- (void).cxx_destruct;
- (_Bool)_blockUntilIdle;
- (id)_descriptionForMetric:(id)arg1;
- (void)addTracker:(id)arg1;
- (id)description;
- (_Bool)hasCollectedFetches;
- (id)init;
- (id)sortAndTransformMetrics:(CDUnknownBlockType)arg1 limitTo:(unsigned long long)arg2;
- (id)transformEndpointMetrics:(CDUnknownBlockType)arg1;
- (id)transformTotalMetric:(CDUnknownBlockType)arg1;

@end
