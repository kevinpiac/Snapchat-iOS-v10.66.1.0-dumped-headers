//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCANotificationRegistrationPreference : SCAUserTrackedEvent
{
    NSNumber *dialogAction;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)getDialogAction;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (void)setDialogAction:(_Bool)arg1;

@end

