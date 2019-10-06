//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAAppApplicationLoginOdlvSuccess : SCAUserTrackedEvent
{
    NSNumber *hasLoggedInBefore;
    long long otpType;
    long long actionType;
    NSString *loginFlowSessionId;
    NSString *longClientId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getActionType;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getHasLoggedInBefore;
- (id)getLoginFlowSessionId;
- (id)getLongClientId;
- (long long)getOtpType;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setActionType:(long long)arg1;
- (void)setHasLoggedInBefore:(_Bool)arg1;
- (void)setLoginFlowSessionId:(id)arg1;
- (void)setLongClientId:(id)arg1;
- (void)setOtpType:(long long)arg1;

@end

