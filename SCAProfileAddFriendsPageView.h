//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAProfileAddFriendsPageView : SCAUserTrackedEvent
{
    long long source;
    long long page;
    NSString *profileSessionId;
    NSString *availableBadgeSummary;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAvailableBadgeSummary;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getPage;
- (double)getPerUserSamplingRate;
- (id)getProfileSessionId;
- (long long)getSource;
- (id)init;
- (void)setAvailableBadgeSummary:(id)arg1;
- (void)setPage:(long long)arg1;
- (void)setProfileSessionId:(id)arg1;
- (void)setSource:(long long)arg1;

@end

