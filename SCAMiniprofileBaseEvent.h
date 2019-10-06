//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAMiniprofileBaseEvent : SCAUserTrackedEvent
{
    NSNumber *viewLocation;
    long long profileType;
    long long source;
    long long sourcePage;
    long long viewSource;
    NSString *profileId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)getProfileId;
- (long long)getProfileType;
- (long long)getSource;
- (long long)getSourcePage;
- (long long)getViewLocation;
- (long long)getViewSource;
- (id)init;
- (void)setProfileId:(id)arg1;
- (void)setProfileType:(long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setSourcePage:(long long)arg1;
- (void)setViewLocation:(long long)arg1;
- (void)setViewSource:(long long)arg1;

@end
