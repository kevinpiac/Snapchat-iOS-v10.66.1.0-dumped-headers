//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSDate, NSNumber, NSString;

@interface SCARegistrationUserSignupPageview : SCAUserTrackedEvent
{
    NSNumber *hasLoggedInBefore;
    long long registrationVersion;
    long long source;
    NSString *longClientId;
    NSDate *lastPageviewTs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getHasLoggedInBefore;
- (id)getLastPageviewTs;
- (id)getLongClientId;
- (double)getPerUserSamplingRate;
- (long long)getRegistrationVersion;
- (long long)getSource;
- (id)init;
- (void)setHasLoggedInBefore:(_Bool)arg1;
- (void)setLastPageviewTs:(id)arg1;
- (void)setLongClientId:(id)arg1;
- (void)setRegistrationVersion:(long long)arg1;
- (void)setSource:(long long)arg1;

@end

