//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCASpectaclesOnboardingEventBase.h"

@interface SCASpectaclesOnboardingExit : SCASpectaclesOnboardingEventBase
{
    long long onboardingExitSource;
}

- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getOnboardingExitSource;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setOnboardingExitSource:(long long)arg1;

@end

