//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAUserIdentityBitmojiUnlink : SCAUserTrackedEvent
{
    long long source;
    long long status;
    NSString *profileSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)getProfileSessionId;
- (long long)getSource;
- (long long)getStatus;
- (id)init;
- (void)setProfileSessionId:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setStatus:(long long)arg1;

@end

