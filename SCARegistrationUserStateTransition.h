//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString, SCARegistrationMetadata, SCAStateTransition;

@interface SCARegistrationUserStateTransition : SCAUserTrackedEvent
{
    NSString *longClientId;
    SCARegistrationMetadata *registrationMetadata;
    SCAStateTransition *stateTransition;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getLongClientId;
- (double)getPerUserSamplingRate;
- (id)getRegistrationMetadata;
- (id)getStateTransition;
- (void)setLongClientId:(id)arg1;
- (void)setRegistrationMetadata:(id)arg1;
- (void)setStateTransition:(id)arg1;

@end
