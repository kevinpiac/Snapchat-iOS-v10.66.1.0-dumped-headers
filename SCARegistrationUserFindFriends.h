//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCARegistrationUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCARegistrationUserFindFriends : SCARegistrationUserTrackedEvent
{
    NSNumber *snapchattersFound;
    NSNumber *trimmedSnapchatters;
    NSString *longClientId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getLongClientId;
- (double)getPerUserSamplingRate;
- (long long)getSnapchattersFound;
- (_Bool)getTrimmedSnapchatters;
- (void)setLongClientId:(id)arg1;
- (void)setSnapchattersFound:(long long)arg1;
- (void)setTrimmedSnapchatters:(_Bool)arg1;

@end

