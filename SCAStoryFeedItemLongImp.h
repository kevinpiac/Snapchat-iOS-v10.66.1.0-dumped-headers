//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAStoryFeedItemImp.h"

@class NSDate, NSNumber;

@interface SCAStoryFeedItemLongImp : SCAStoryFeedItemImp
{
    NSNumber *impTimeSecs;
    NSNumber *impMinimalVisibleFrac;
    NSNumber *withViewedState;
    long long exitEvent;
    NSDate *impStartTs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getExitEvent;
- (double)getImpMinimalVisibleFrac;
- (id)getImpStartTs;
- (double)getImpTimeSecs;
- (double)getPerUserSamplingRate;
- (_Bool)getWithViewedState;
- (id)init;
- (void)setExitEvent:(long long)arg1;
- (void)setImpMinimalVisibleFrac:(double)arg1;
- (void)setImpStartTs:(id)arg1;
- (void)setImpTimeSecs:(double)arg1;
- (void)setWithViewedState:(_Bool)arg1;

@end
