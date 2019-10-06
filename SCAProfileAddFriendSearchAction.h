//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAProfileAddFriendSearchAction : SCAUserTrackedEvent
{
    long long action;
    long long source;
    NSString *profileSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAction;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)getProfileSessionId;
- (long long)getSource;
- (id)init;
- (void)setAction:(long long)arg1;
- (void)setProfileSessionId:(id)arg1;
- (void)setSource:(long long)arg1;

@end
