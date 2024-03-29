//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAAppApplicationLoginOdlvRequestOtp : SCAUserTrackedEvent
{
    long long otpType;
    NSString *loginFlowSessionId;
    NSString *longClientId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getLoginFlowSessionId;
- (id)getLongClientId;
- (long long)getOtpType;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setLoginFlowSessionId:(id)arg1;
- (void)setLongClientId:(id)arg1;
- (void)setOtpType:(long long)arg1;

@end

