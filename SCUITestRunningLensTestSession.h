//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensTestSessionProtocol-Protocol.h"

@class LSAEffectComponent, NSError, NSString, NSURL, SCGCDTimer, SCLens, SCRunningStatistics;
@protocol SCPerforming;

@interface SCUITestRunningLensTestSession : NSObject <SCLensTestSessionProtocol>
{
    SCLens *_activeLens;
    SCRunningStatistics *_fpsStatistics;
    SCRunningStatistics *_processingTimeStatistics;
    long long _usedRam;
    double _previousLensTotalMemoryUsage;
    double _currentLensMemoryUsage;
    SCGCDTimer *_updateScenariumMemoryUsageTimer;
    NSError *_error;
    LSAEffectComponent *_effectComponent;
    id <SCPerforming> _performer;
    NSURL *_reportingRootUrl;
}

- (void).cxx_destruct;
- (void)_lensCoreHandledAnExceptionNotificationReceived:(id)arg1;
- (void)_logCurrent;
- (id)_prepareReportingRootUrl;
- (id)deviceClassString;
- (void)fire;
- (void)frameRateCounter:(id)arg1 didUpdateLensFrameProcessingInfo:(CDStruct_488ba8aa)arg2;
- (id)initEffectComponent:(id)arg1;
- (void)lensEffectActivator:(id)arg1 didFailToApplyLensAtTime:(double)arg2;
- (void)lensEffectActivator:(id)arg1 didStartApplyingLens:(id)arg2 atTime:(double)arg3;
- (void)lensEffectActivator:(id)arg1 didSuccessfullyApplyLensAtTime:(double)arg2;
- (void)updateMemoryUsage;
- (void)updateScenariumLensMemoryUsage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

