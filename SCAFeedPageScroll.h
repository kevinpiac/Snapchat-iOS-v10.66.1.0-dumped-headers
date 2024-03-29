//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAFeedEventBase.h"

@class NSDate, NSNumber;

@interface SCAFeedPageScroll : SCAFeedEventBase
{
    NSNumber *scrollDurationSecs;
    long long gesture;
    NSDate *scrollStartTs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getGesture;
- (double)getPerUserSamplingRate;
- (double)getScrollDurationSecs;
- (id)getScrollStartTs;
- (id)init;
- (void)setGesture:(long long)arg1;
- (void)setScrollDurationSecs:(double)arg1;
- (void)setScrollStartTs:(id)arg1;

@end

