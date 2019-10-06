//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAGalleryDataDeleteAttempt : SCAUserTrackedEvent
{
    NSNumber *withUserTrigger;
    NSNumber *snapPendingBackupCount;
    NSNumber *snapDeleteCount;
    long long actionTaken;
    long long context;
    NSString *previousUsername;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getActionTaken;
- (long long)getContext;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)getPreviousUsername;
- (long long)getSnapDeleteCount;
- (long long)getSnapPendingBackupCount;
- (_Bool)getWithUserTrigger;
- (id)init;
- (void)setActionTaken:(long long)arg1;
- (void)setContext:(long long)arg1;
- (void)setPreviousUsername:(id)arg1;
- (void)setSnapDeleteCount:(long long)arg1;
- (void)setSnapPendingBackupCount:(long long)arg1;
- (void)setWithUserTrigger:(_Bool)arg1;

@end

