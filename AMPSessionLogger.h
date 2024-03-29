//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMPEventConfigurer, AMPExperimentProvider, AMPSessionInfo, AMPSessionInfoRepository, AMPUUIDGenerator, NSArray, NSNotificationCenter, NSOperationQueue, SCTimeProvider;
@protocol AMPEventLoggerProvider;

@interface AMPSessionLogger : NSObject
{
    _Bool _sessionInProgress;
    _Bool _shouldStartNewSession;
    double _minimumSecondsBetweenSessions;
    AMPSessionInfoRepository *_sessionInfoRepo;
    NSNotificationCenter *_notificationCenter;
    AMPEventConfigurer *_eventConfigurer;
    AMPUUIDGenerator *_uuidGenerator;
    SCTimeProvider *_timeProvider;
    NSOperationQueue *_loggingQueue;
    AMPSessionInfo *_sessionInfo;
    id <AMPEventLoggerProvider> _loggerProvider;
    struct NSArray *_allLoggers;
    CDUnknownBlockType _eventObserver;
    AMPExperimentProvider *_experimentProvider;
}

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive;
- (void)_applicationWillResignActive;
- (void)_logSessionEndEventForPreviousSession;
- (void)_logSessionStartEvent:(long long)arg1;
- (void)_provideObserverWithEvent:(id)arg1 forLoggers:(id)arg2;
- (void)_recordSessionEnd:(long long)arg1;
- (void)_removeSessionEndInfo;
- (void)_saveSessionEndInfo:(long long)arg1;
- (void)_scheduleInactiveSessionCheck;
- (_Bool)_shouldStartNewSession;
- (void)_startNewSession:(long long)arg1;
- (long long)_timeSincePreviousSessionEnd;
@property(readonly, nonatomic) NSArray *allLoggers; // @synthesize allLoggers=_allLoggers;
@property(readonly, nonatomic) AMPEventConfigurer *eventConfigurer; // @synthesize eventConfigurer=_eventConfigurer;
@property(readonly, nonatomic) CDUnknownBlockType eventObserver; // @synthesize eventObserver=_eventObserver;
@property(readonly, nonatomic) __weak AMPExperimentProvider *experimentProvider; // @synthesize experimentProvider=_experimentProvider;
- (id)initWithMinSecondsBetweenSessions:(double)arg1 sessionInfoRepository:(id)arg2 notificationCenter:(id)arg3 eventConfigurer:(id)arg4 uuidGenerator:(id)arg5 timeProvider:(id)arg6 loggingQueue:(id)arg7 sessionInfo:(id)arg8 loggerProvider:(id)arg9 allLoggers:(struct NSArray *)arg10 eventObserver:(CDUnknownBlockType)arg11 experimentProvider:(id)arg12;
@property(nonatomic, getter=isSessionInProgress) _Bool sessionInProgress; // @synthesize sessionInProgress=_sessionInProgress;
@property(readonly, nonatomic) id <AMPEventLoggerProvider> loggerProvider; // @synthesize loggerProvider=_loggerProvider;
@property(readonly, nonatomic) NSOperationQueue *loggingQueue; // @synthesize loggingQueue=_loggingQueue;
@property(readonly, nonatomic) double minimumSecondsBetweenSessions; // @synthesize minimumSecondsBetweenSessions=_minimumSecondsBetweenSessions;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) AMPSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(readonly, nonatomic) AMPSessionInfoRepository *sessionInfoRepo; // @synthesize sessionInfoRepo=_sessionInfoRepo;
@property(readonly, nonatomic) _Bool shouldStartNewSession; // @synthesize shouldStartNewSession=_shouldStartNewSession;
- (void)startOrResumeSession:(long long)arg1 fromNotification:(_Bool)arg2;
- (void)startTrackingSession;
@property(readonly, nonatomic) SCTimeProvider *timeProvider; // @synthesize timeProvider=_timeProvider;
@property(readonly, nonatomic) AMPUUIDGenerator *uuidGenerator; // @synthesize uuidGenerator=_uuidGenerator;

@end

