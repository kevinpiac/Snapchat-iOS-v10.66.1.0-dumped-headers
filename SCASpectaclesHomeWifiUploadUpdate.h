//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCASpectaclesTrackedEvent.h"

@interface SCASpectaclesHomeWifiUploadUpdate : SCASpectaclesTrackedEvent
{
    long long updateType;
}

- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getUpdateType;
- (id)init;
- (void)setUpdateType:(long long)arg1;

@end

