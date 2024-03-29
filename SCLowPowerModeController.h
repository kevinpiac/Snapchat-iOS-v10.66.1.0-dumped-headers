//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, User;

@interface SCLowPowerModeController : NSObject
{
    NSDate *_startTime;
    NSDate *_appStartTime;
    User *_currentUser;
    double _timeInLowPowerMode;
    _Bool _appInLowPowerMode;
}

+ (_Bool)isOSInLowPowerMode;
+ (id)shared;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (void)flushEvent;
- (id)init;
@property _Bool isAppInLowPowerMode; // @synthesize isAppInLowPowerMode=_appInLowPowerMode;
- (void)lowPowerModeChanged;
- (void)resetWithShowNotification;
- (_Bool)shouldSuspendAppEarlier;
- (void)showNotification;
- (void)willEnterForeground;

@end

