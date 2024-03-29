//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSString, NSUserDefaults, SCQueuePerformer, SCTimeProvider;
@protocol OS_dispatch_source;

@interface SCBackgroundTaskTracker : NSObject
{
    SCQueuePerformer *_performer;
    NSUserDefaults *_userDefaults;
    SCTimeProvider *_dateProvider;
    NSMutableDictionary *_runningBackgroundTasksDict;
    NSMutableDictionary *_backgroundRunningTimeAttributionDict;
    NSMutableDictionary *_backgroundTaskNameToBackgroundTaskSetDict;
    NSDate *_backgroundTasksRunningBeginTime;
    NSDate *_appBackgroundTime;
    NSDate *_appForegroundTime;
    long long _networkConnectivityWhenBackgroundRunningStart;
    long long _networkConnectivityWhenBackgroundRunningFinish;
    NSDate *_firstReceivedPushNotifStartTime;
    NSDate *_lastCompletePushNotifCompleteTime;
    NSDate *_previousBackgroundTaskGroupCompleteTime;
    _Bool _hasCalculateExtraBackgroundPushNotifRunningTimeFromPreviousKilledAppSession;
    NSString *_latestPushNotificationIdentifier;
    NSDate *_backgroundRunningStartTime;
    NSObject<OS_dispatch_source> *_cpuMonitorTimer;
    NSMutableDictionary *_cpuUsageRecordDict;
    long long _userCpuTime;
    long long _sysCpuTime;
    NSMutableDictionary *_receivedVoipPushNotifications;
    NSMutableDictionary *_voipPushNotificationBackgroundRunningTimeAttributionDict;
    NSMutableDictionary *_voipPushNotificationTypeToNotificationSetDict;
    NSMutableDictionary *_startedBackgroundActivities;
    NSMutableDictionary *_completedBackgroundActivities;
    CDUnknownBlockType _backgroundAppSessionNetworkUsageProvider;
}

- (void).cxx_destruct;
- (void)_calculateBatteryResouceUsageAndBackgroundActivityAttributionWithEndTime:(id)arg1;
- (void)_calculateExtraBackgroudPushNotifRunningTimeSincePreviousBgTaskGroupCompleteUntilTime:(id)arg1;
- (id)_calculateFineGrainedBackgroundActivityAttributionWithStartTime:(id)arg1 EndTime:(id)arg2;
- (void)_calculateOverallBackgroundTaskRunningDurationWithEndTime:(id)arg1;
- (void)_calculateOverallBackgroundTasksRunningDurationForTaskName:(id)arg1 endTime:(id)arg2;
- (void)_calculateOverallVoipPushNotificationRunningDurationForNotificationType:(id)arg1 endTime:(id)arg2;
- (void)_calculateOverallVoipPushNotificationRunningDurationWithEndTime:(id)arg1;
- (void)_clearTimestampsForExtraRunningTimeFromPushNotif;
- (id)_createCpuMonitorTimer;
- (void)_didBackgroundRunningFinish;
- (void)_didBackgroundRunningStartAt:(id)arg1;
- (void)_didCompletePushNotificationInBackgroundWithIdentifier:(id)arg1 type:(id)arg2 timestamp:(id)arg3;
- (void)_didEnterBackground;
- (void)_didEnterBackgroundAtTimestamp:(id)arg1;
- (void)_didPullCpuUsage:(double)arg1;
- (void)_didReceivedPushNotificationInBackgroundWithIdentifier:(id)arg1 type:(id)arg2 timestamp:(id)arg3;
- (id)_initWithQueuePerformer:(id)arg1 userDefaults:(id)arg2 dateProvider:(id)arg3;
- (void)_resetBackgroundTaskLogging;
- (void)_saveStateWithBackgroundRunningDuration:(long long)arg1 attributionMap:(id)arg2;
- (void)_saveStateWithCpuUsageDict:(id)arg1 sysCpuTime:(long long)arg2 userCpuTime:(long long)arg3;
- (void)_saveStateWithExtraBackgroundPushNotifRunningDuration:(long long)arg1;
- (void)_saveStateWithFineGrainedBackgroundActivityAttribution:(id)arg1;
- (void)_saveStateWithNetworkUsageDict:(id)arg1 networkUsageAttributionDict:(id)arg2 networkRadioOverheadAttributionDict:(id)arg3;
- (void)_saveStateWithVoipPushNotificationBackgroundRunningTimeAttribution:(id)arg1;
- (void)_setUpCpuObservation;
- (void)_tearDownCpuObservation;
- (void)_updateBackgroundTasksMetricsWhenAppEnterForegroundAtTimestamp:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType backgroundAppSessionNetworkUsageProvider; // @synthesize backgroundAppSessionNetworkUsageProvider=_backgroundAppSessionNetworkUsageProvider;
- (void)didBackgroundTaskEndAtTimestamp:(id)arg1 taskIdentifier:(unsigned long long)arg2 endBackgroundTaskBlock:(CDUnknownBlockType)arg3;
- (void)didBackgroundTaskStartWithName:(id)arg1 startTimestamp:(id)arg2 taskIdentifier:(unsigned long long)arg3;
- (void)didCompletePushNotificationWithIdentifier:(id)arg1 type:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)didReceivedPushNotificationWithIdentifier:(id)arg1 type:(id)arg2;
- (id)init;
- (id)savedBackgroundTasksRunningMetrics;
- (void)updateBackgroundTasksMetricsWhenAppEnterForeground;

@end

