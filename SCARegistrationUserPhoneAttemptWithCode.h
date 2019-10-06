//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCARegistrationUserPhoneAttemptWithCode : SCAUserTrackedEvent
{
    NSNumber *autofill;
    long long registrationVersion;
    NSString *longClientId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)getAutofill;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getLongClientId;
- (double)getPerUserSamplingRate;
- (long long)getRegistrationVersion;
- (id)init;
- (void)setAutofill:(_Bool)arg1;
- (void)setLongClientId:(id)arg1;
- (void)setRegistrationVersion:(long long)arg1;

@end

