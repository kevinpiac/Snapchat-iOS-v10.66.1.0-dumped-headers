//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCARegistrationUserTrackedEvent : SCAUserTrackedEvent
{
    NSNumber *hasLoggedInBefore;
    NSString *registrationSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getHasLoggedInBefore;
- (double)getPerUserSamplingRate;
- (id)getRegistrationSessionId;
- (void)setHasLoggedInBefore:(_Bool)arg1;
- (void)setRegistrationSessionId:(id)arg1;

@end

