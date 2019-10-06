//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesEventListener-Protocol.h"

@class NSDate, NSString, SCSpectaclesDevice, SCWeakTimer;
@protocol SCSpectaclesLibraryLogger;

@interface SCSpectaclesTransferProgressMonitor : NSObject <SCSpectaclesEventListener>
{
    SCWeakTimer *_uptimeTimer;
    NSDate *_timerStartDate;
    double _cumulativeWatchdogUptime;
    long long _failureCount;
    SCSpectaclesDevice *_device;
    id <SCSpectaclesLibraryLogger> _analyticsLogger;
}

- (void).cxx_destruct;
- (void)_kickUptimeWatchdog;
- (void)_startUptimeWatchdog;
- (void)_stopUptimeWatchdog;
- (void)_uptimeWatchdogTimedOut;
@property(nonatomic) __weak id <SCSpectaclesLibraryLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(nonatomic) double cumulativeWatchdogUptime; // @synthesize cumulativeWatchdogUptime=_cumulativeWatchdogUptime;
@property(nonatomic) __weak SCSpectaclesDevice *device; // @synthesize device=_device;
@property(nonatomic) long long failureCount; // @synthesize failureCount=_failureCount;
- (id)initWithDevice:(id)arg1 announcer:(id)arg2 analyticsLogger:(id)arg3;
@property(retain, nonatomic) NSDate *timerStartDate; // @synthesize timerStartDate=_timerStartDate;
@property(retain, nonatomic) SCWeakTimer *uptimeTimer; // @synthesize uptimeTimer=_uptimeTimer;
- (void)spectaclesDevice:(id)arg1 onFirmwareUpdate:(unsigned long long)arg2 progress:(float)arg3;
- (void)spectaclesDeviceDidUpdateState:(id)arg1;
- (void)spectaclesTransferSession:(id)arg1 onTransferUpdate:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
