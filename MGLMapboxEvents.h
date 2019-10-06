//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MGLLocationManagerDelegate-Protocol.h"

@class MGLAPIClient, MGLLocationManager, MGLMapboxEventsData, NSDate, NSDateFormatter, NSMutableArray, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface MGLMapboxEvents : NSObject <MGLLocationManagerDelegate>
{
    NSString *_instanceID;
    unsigned long long _backgroundTaskIdentifier;
    _Bool _usesTestServer;
    _Bool _canEnableDebugLogging;
    _Bool _paused;
    MGLMapboxEventsData *_data;
    NSString *_appBundleId;
    NSString *_dateForDebugLogFile;
    NSDateFormatter *_rfc3339DateFormatter;
    MGLAPIClient *_apiClient;
    NSMutableArray *_eventQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_debugLogSerialQueue;
    MGLLocationManager *_locationManager;
    NSTimer *_timer;
    NSDate *_instanceIDRotationDate;
    NSDate *_nextTurnstileSendDate;
}

+ (void)ensureMetricsOptoutExists;
+ (void)flush;
+ (_Bool)isEnabled;
+ (void)pushEvent:(id)arg1 withAttributes:(struct NSDictionary *)arg2;
+ (void)setSnapchatMetricsEnabled:(_Bool)arg1;
+ (id)sharedManager;
+ (_Bool)snapchatMetricsEnabled;
- (void).cxx_destruct;
@property(retain, nonatomic) MGLAPIClient *apiClient; // @synthesize apiClient=_apiClient;
@property(copy, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
- (id)applicationState;
@property(nonatomic) _Bool canEnableDebugLogging; // @synthesize canEnableDebugLogging=_canEnableDebugLogging;
- (long long)contentSizeScale;
@property(retain, nonatomic) MGLMapboxEventsData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *dateForDebugLogFile; // @synthesize dateForDebugLogFile=_dateForDebugLogFile;
- (void)dealloc;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *debugLogSerialQueue; // @synthesize debugLogSerialQueue=_debugLogSerialQueue;
- (_Bool)debugLoggingEnabled;
- (id)deviceOrientation;
- (struct NSDictionary *)eventForAttributes:(struct NSMutableDictionary *)arg1 attributeDictionary:(struct NSDictionary *)arg2;
@property(retain, nonatomic) NSMutableArray *eventQueue; // @synthesize eventQueue=_eventQueue;
- (void)flush;
- (struct NSDictionary *)fullyFormedEventForEvent:(id)arg1 withAttributes:(struct NSDictionary *)arg2;
- (id)init;
@property(readonly, nonatomic) NSString *instanceID;
@property(retain, nonatomic) NSDate *instanceIDRotationDate; // @synthesize instanceIDRotationDate=_instanceIDRotationDate;
- (struct NSMutableDictionary *)interactionEvent;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
- (struct NSDictionary *)locationEventWithAttributes:(struct NSDictionary *)arg1;
@property(retain, nonatomic) MGLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (struct NSDictionary *)mapClickEventWithAttributes:(struct NSDictionary *)arg1;
- (struct NSDictionary *)mapDragEndEventWithAttributes:(struct NSDictionary *)arg1;
- (struct NSDictionary *)mapLoadEventWithAttributes:(struct NSDictionary *)arg1;
@property(retain, nonatomic) NSDate *nextTurnstileSendDate; // @synthesize nextTurnstileSendDate=_nextTurnstileSendDate;
- (void)pauseMetricsCollection;
- (void)pauseOrResumeMetricsCollectionIfRequired;
- (void)postEvents:(id)arg1;
- (void)pushDebugEvent:(id)arg1 withAttributes:(struct NSDictionary *)arg2;
- (void)pushEvent:(id)arg1 withAttributes:(struct NSDictionary *)arg2;
- (void)pushTurnstileEvent;
- (void)resumeMetricsCollection;
@property(retain, nonatomic) NSDateFormatter *rfc3339DateFormatter; // @synthesize rfc3339DateFormatter=_rfc3339DateFormatter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool usesTestServer; // @synthesize usesTestServer=_usesTestServer;
- (void)startTimer;
- (id)stringForDebugEvent:(struct NSDictionary *)arg1;
- (void)updateNextTurnstileSendDate;
- (void)userDefaultsDidChange:(id)arg1;
- (void)writeEventToLocalDebugLog:(struct NSDictionary *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
