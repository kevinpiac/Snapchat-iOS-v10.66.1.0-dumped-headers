//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserNotTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAUserSearch : SCAUserNotTrackedEvent
{
    NSNumber *viewTimeSec;
    long long source;
    long long exitEvent;
    NSString *userSearchId;
    NSString *userSearchQuery;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getExitEvent;
- (double)getPerUserSamplingRate;
- (long long)getSource;
- (id)getUserSearchId;
- (id)getUserSearchQuery;
- (double)getViewTimeSec;
- (id)init;
- (void)setExitEvent:(long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setUserSearchId:(id)arg1;
- (void)setUserSearchQuery:(id)arg1;
- (void)setViewTimeSec:(double)arg1;

@end

