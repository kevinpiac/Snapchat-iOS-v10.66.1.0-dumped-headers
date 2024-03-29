//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLocationManagerOperationalListener-Protocol.h"

@class NSDate, NSMutableDictionary, NSMutableSet, NSString, SCLocationManager, SCQueuePerformer;
@protocol SCPageViewGPSLogging;

@interface SCGPSLogger : NSObject <SCLocationManagerOperationalListener>
{
    SCLocationManager *_locationManager;
    SCQueuePerformer *_performer;
    NSMutableSet *_activeLocationManagers;
    NSString *_startPage;
    CDUnknownBlockType _appBatterySessionIdProvider;
    NSMutableSet *_locationUpdateCallers;
    NSMutableDictionary *_locationUpdateRequestCounterDict;
    NSMutableDictionary *_locationUpdateRequestDurationDict;
    NSMutableDictionary *_locationUpdateRequestDict;
    NSDate *_foregroundTimestamp;
    double _locationUpdateTotalDurationPerSession;
    NSDate *_locationUpdateStartTime;
    _Bool _isGPSOn;
    id <SCPageViewGPSLogging> _pageViewLogger;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)_gpsUsageWhenEnteringBackgroundWithTimestamp:(id)arg1;
- (void)_locationManagerDidRequestStartUpdatingLocationWithCaller:(id)arg1 startTime:(id)arg2 appState:(long long)arg3;
- (void)_locationManagerDidRequestStopUpdatingLocationWithCaller:(id)arg1 endTime:(id)arg2;
- (void)_locationManagerDidStartUpdatingLocation:(id)arg1 startTime:(id)arg2;
- (void)_locationManagerDidStopUpdatingLocation:(id)arg1 endTime:(id)arg2;
- (void)_logLocationUpdateEndWithParams:(id)arg1 endTime:(id)arg2;
- (void)_logLocationUpdateRequestEndForCaller:(id)arg1 stoppedByCaller:(_Bool)arg2 endTime:(id)arg3;
- (void)_willEnterForeground;
- (id)gpsUsageWhenEnteringBackgroundWithTimestamp:(id)arg1;
- (id)initWithLocationManager:(id)arg1;
- (void)injectAppBatterySessionIdProvider:(CDUnknownBlockType)arg1;
@property _Bool isGPSOn; // @synthesize isGPSOn=_isGPSOn;
- (void)locationManager:(id)arg1 observerStartedUpdating:(id)arg2;
- (void)locationManager:(id)arg1 observerStoppedUpdating:(id)arg2;
- (void)locationManager:(id)arg1 startedCLManager:(id)arg2;
- (void)locationManager:(id)arg1 stoppedCLManager:(id)arg2;
- (void)locationManager:(id)arg1 wasGrantedAuthorization:(_Bool)arg2;
- (void)locationManagerDidRequestStartUpdatingLocationWithCaller:(id)arg1;
- (void)locationManagerDidRequestStopUpdatingLocationWithCaller:(id)arg1;
@property(nonatomic) __weak id <SCPageViewGPSLogging> pageViewLogger; // @synthesize pageViewLogger=_pageViewLogger;
- (void)willEnterForeground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

