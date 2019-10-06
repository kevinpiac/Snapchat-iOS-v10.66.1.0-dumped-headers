//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSAEffectComponentListener-Protocol.h"
#import "SCCrashedLensIdProvider-Protocol.h"
#import "SCLensProcessingCore-Protocol.h"

@class LSAComponentManager, NSLock, NSString, SCCaptureResource, SCLens, SCLensEffectActivator, SCManagedCapturerState, SCManagedLensesProcessor;
@protocol SCLensCrashLoggerProtocol, SCLensCrashLoggerStoreProtocol, SCLensProcessingCoreResourcesFactoryProtocol, SCManagedAudioDataSourceListener><SCManagedVideoDataSourceListener;

@interface SCLensProcessingCore : NSObject <SCCrashedLensIdProvider, LSAEffectComponentListener, SCLensProcessingCore>
{
    SCCaptureResource *_captureResource;
    id <SCLensProcessingCoreResourcesFactoryProtocol> _lensProcessingCoreResourcesFactory;
    id <SCLensCrashLoggerProtocol> _crashLogger;
    id <SCLensCrashLoggerStoreProtocol> _crashLoggerStore;
    SCLensEffectActivator *_lensEffectActivator;
    SCManagedLensesProcessor *_managedLensProcessor;
    LSAComponentManager *_componentManager;
    long long _componentManagerOnceToken;
    NSString *_currentActivatorId;
    NSLock *_currentActivatorLock;
    SCManagedCapturerState *_managedCapturerState;
}

+ (CDUnknownBlockType)unwrappedActivatingCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)_configureCrashLogger;
- (void)_configureCrashLoggerStore;
- (void)_configureLensEffectActivator;
- (void)_configureLensProcessor;
- (_Bool)_isActivatorEqualToCurrentWithId:(id)arg1;
- (void)activateLens:(id)arg1 activatorId:(id)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)activateLens:(id)arg1 activatorId:(id)arg2 configuration:(id)arg3 setLensCompletion:(CDUnknownBlockType)arg4 imageOverlayCompletion:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (id)activeLensId;
- (_Bool)addFrameRateListener:(id)arg1;
- (_Bool)addLensEffectActivatorListener:(id)arg1;
- (_Bool)addStateListener:(id)arg1;
@property(readonly, copy, nonatomic) SCLens *appliedLens;
@property(readonly, nonatomic) unsigned long long appliedLensFeatures;
@property(readonly, nonatomic) id <SCManagedAudioDataSourceListener><SCManagedVideoDataSourceListener> capturerListener;
- (void)clearCurrentLensWithActivatorId:(id)arg1;
@property(readonly, nonatomic) LSAComponentManager *componentManager;
@property(readonly, copy, nonatomic) SCLens *currentApplyingLens;
- (void)detectLensCategoryOnNextFrame:(struct CGPoint)arg1 videoOrientation:(long long)arg2 lenses:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithCaptureResource:(id)arg1 lensProcessingCoreResourcesFactory:(id)arg2;
- (_Bool)isLensBeingApplied:(id)arg1;
- (id)lensEffectActivator;
- (id)lensIdForCrashLogger;
- (void)managedCapturer:(id)arg1 didChangeState:(id)arg2;
@property(retain) SCManagedCapturerState *managedCapturerState; // @synthesize managedCapturerState=_managedCapturerState;
- (id)managedLensesProcessor;
@property(readonly, copy, nonatomic) SCLens *previousAppliedLens;
- (id)processImage:(id)arg1 maxPixelSize:(long long)arg2 devicePosition:(unsigned long long)arg3 fieldOfView:(float)arg4;
- (void)registerActivatorWithId:(id)arg1;
- (void)removeFieldOfViewListener;
- (void)removeFrameRateListener:(id)arg1;
- (void)removeLensEffectActivatorListener:(id)arg1;
- (void)removeStateListener:(id)arg1;
- (void)resetCurrentApplyingLensWithActivatorId:(id)arg1;
- (void)setAsFieldOfViewListenerForARDataSource:(id)arg1;
- (void)setAsFieldOfViewListenerForDevice:(id)arg1;
- (void)setAspectRatio:(struct SCAspectRatio)arg1;
- (void)setEffectViewport:(struct SCEffectViewport)arg1;
- (void)setFieldOfView:(float)arg1;
- (void)setLensesActive:(_Bool)arg1 videoOrientation:(long long)arg2;
- (void)setModifySource:(_Bool)arg1;
- (void)setShouldMuteAllSounds:(_Bool)arg1;
- (void)setShouldProcessARFrames:(_Bool)arg1;
- (_Bool)shouldActivateLens:(id)arg1;
- (void)unregisterActivatorWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
