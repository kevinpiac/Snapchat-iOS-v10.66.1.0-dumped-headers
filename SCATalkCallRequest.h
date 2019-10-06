//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATalkCallEventBase.h"

@class NSNumber;

@interface SCATalkCallRequest : SCATalkCallEventBase
{
    NSNumber *withIncomingCallAbandon;
    NSNumber *withPresence;
    NSNumber *withLocalUserRejected;
    long long endPhase;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getEndPhase;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (_Bool)getWithIncomingCallAbandon;
- (_Bool)getWithLocalUserRejected;
- (_Bool)getWithPresence;
- (id)init;
- (id)initWithCallUUID:(id)arg1 initialMediaType:(long long)arg2 endPhase:(long long)arg3 intParams:(id)arg4 floatParams:(id)arg5 correspondentId:(id)arg6;
- (void)setEndPhase:(long long)arg1;
- (void)setWithIncomingCallAbandon:(_Bool)arg1;
- (void)setWithLocalUserRejected:(_Bool)arg1;
- (void)setWithPresence:(_Bool)arg1;

@end
