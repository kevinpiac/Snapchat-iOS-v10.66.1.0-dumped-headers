//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCLocationSharingServiceLogger : NSObject
{
}

+ (void)locationSharingPreferencesFetchedWithFetchType:(unsigned long long)arg1 preferences:(id)arg2 onboarded:(_Bool)arg3 remainingGhostModeDuration:(double)arg4 source:(long long)arg5;
+ (void)locationSharingPreferencesUpdated:(id)arg1 onboarded:(_Bool)arg2 ghostModeDuration:(double)arg3 updateType:(long long)arg4 previousPreferences:(id)arg5 source:(long long)arg6;

@end

