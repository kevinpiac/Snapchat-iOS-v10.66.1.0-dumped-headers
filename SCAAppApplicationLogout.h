//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAAppApplicationLogout : SCAUserTrackedEvent
{
    NSNumber *forced;
    NSString *reason;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getForced;
- (double)getPerUserSamplingRate;
- (id)getReason;
- (void)setForced:(_Bool)arg1;
- (void)setReason:(id)arg1;

@end

