//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCPreferences, SCTimeProvider;

@interface SCLensCacheClearTracker : NSObject
{
    SCPreferences *_preferencesStorage;
    SCTimeProvider *_currentDateProvider;
    double _cooldownTimeInterval;
}

- (void).cxx_destruct;
- (id)initWithPreferencesStorage:(id)arg1 currentDateProvider:(id)arg2;
- (id)initWithPreferencesStorage:(id)arg1 currentDateProvider:(id)arg2 cooldownTimeInterval:(double)arg3;
- (void)resetLensCacheClearTracker;
- (void)trackLensCacheClearEvent;
- (_Bool)wasLensCacheRecentlyCleared;

@end

