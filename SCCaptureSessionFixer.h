//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCaptureSessionFixerProtocol-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, NSTimer, SCCaptureResource;

@interface SCCaptureSessionFixer : NSObject <SCTraceEnabled, SCCaptureSessionFixerProtocol>
{
    long long _numRetriesFixAVCaptureSessionWithCurrentSession;
    long long _numRetriesFixInconsistencyWithCurrentSession;
    double _lastFixSessionTimestamp;
    double _lastSessionRuntimeErrorTime;
    _Bool _isRecreateSessionFixScheduled;
    SCCaptureResource *_captureResource;
    NSTimer *_livenessTimer;
}

- (void).cxx_destruct;
- (void)_addObservers;
- (void)_destroyLivenessConsistencyTimer;
- (void)_fixAVSessionIfNecessary;
- (void)_fixNonMetalSessionPreviewInconsistency;
- (void)_livenessConsistency:(id)arg1;
- (void)_resetAVCaptureSession;
- (void)_runningARSessionConsistencyCheckAndFix;
- (void)_runningAVCaptureSessionConsistencyCheckAndFix;
- (void)_runningConsistencyCheckAndFix;
- (void)_sessionInterruptionEnded:(id)arg1;
- (void)_sessionWasInterrupted:(id)arg1;
- (void)_setupLivenessConsistencyTimerIfForeground;
- (void)_setupNewVideoDataSource;
- (void)_setupNewVideoFileDataSource;
- (void)_setupVideoDataSourceListeners;
- (void)_setupVideoDataSourceWithNewSession;
- (void)_startRunningWithNewCaptureSession;
- (void)_startRunningWithNewCaptureSessionIfNecessary;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)detector:(id)arg1 didDetectBlackCamera:(id)arg2;
- (id)initWithCaptureResource:(id)arg1;
- (void)managedCaptureSessionRunningDidChange:(_Bool)arg1;
- (void)onSessionStartRunning;
- (void)onSessionStopRunning;
- (void)sessionRuntimeError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

