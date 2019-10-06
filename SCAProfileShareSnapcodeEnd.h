//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAProfileShareSnapcodeEnd : SCAUserTrackedEvent
{
    NSNumber *completed;
    long long source;
    NSString *shareAppType;
    NSString *errorMessage;
    NSString *profileSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)getCompleted;
- (id)getErrorMessage;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)getProfileSessionId;
- (id)getShareAppType;
- (long long)getSource;
- (id)init;
- (void)setCompleted:(_Bool)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setProfileSessionId:(id)arg1;
- (void)setShareAppType:(id)arg1;
- (void)setSource:(long long)arg1;

@end

