//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAGalleryCollectionSync : SCAUserTrackedEvent
{
    NSNumber *totalLatencyMs;
    NSNumber *prefetchLatencyMs;
    NSNumber *groupCount;
    NSNumber *snapCount;
    NSNumber *prefetchSuccessCount;
    NSNumber *withBackgroundPush;
    NSString *galleryCollectionCategory;
    NSString *failureReason;
    NSString *galleryCollectionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFailureReason;
- (id)getGalleryCollectionCategory;
- (id)getGalleryCollectionId;
- (long long)getGroupCount;
- (double)getPerUserSamplingRate;
- (long long)getPrefetchLatencyMs;
- (long long)getPrefetchSuccessCount;
- (long long)getSnapCount;
- (long long)getTotalLatencyMs;
- (_Bool)getWithBackgroundPush;
- (void)setFailureReason:(id)arg1;
- (void)setGalleryCollectionCategory:(id)arg1;
- (void)setGalleryCollectionId:(id)arg1;
- (void)setGroupCount:(long long)arg1;
- (void)setPrefetchLatencyMs:(long long)arg1;
- (void)setPrefetchSuccessCount:(long long)arg1;
- (void)setSnapCount:(long long)arg1;
- (void)setTotalLatencyMs:(long long)arg1;
- (void)setWithBackgroundPush:(_Bool)arg1;

@end

