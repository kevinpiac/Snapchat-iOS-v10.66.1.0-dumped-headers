//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUnifiedProfileBaseCharmEvent.h"

@interface SCAUnifiedProfileCharmHide : SCAUnifiedProfileBaseCharmEvent
{
    long long action;
}

- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAction;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setAction:(long long)arg1;

@end

