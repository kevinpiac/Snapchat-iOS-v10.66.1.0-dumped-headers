//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCASwipeBase.h"

@class NSDate, NSNumber, NSString;

@interface SCAFilterSwipeBase : SCASwipeBase
{
    NSNumber *tapCount;
    long long swipeDirection;
    NSString *carouselConfigId;
    NSString *carouselVersionId;
    NSDate *snapTakenTs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getCarouselConfigId;
- (id)getCarouselVersionId;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)getSnapTakenTs;
- (long long)getSwipeDirection;
- (long long)getTapCount;
- (id)init;
- (void)setCarouselConfigId:(id)arg1;
- (void)setCarouselVersionId:(id)arg1;
- (void)setSnapTakenTs:(id)arg1;
- (void)setSwipeDirection:(long long)arg1;
- (void)setTapCount:(long long)arg1;

@end
