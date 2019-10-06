//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCImageProcessLensCommand.h"

#import "LSATrackingComponentDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class AVDepthData, LSAPortraitEffectsMatteWrapper, NSString, SCPromise;
@protocol LSARemoteAssetsComponentListener, LSAUriServiceProvider;

@interface SCImageProcessSnap3DLensCommand : SCImageProcessLensCommand <SCTraceEnabled, LSATrackingComponentDelegate>
{
    AVDepthData *_depthData;
    LSAPortraitEffectsMatteWrapper *_portraitEffectsMatte;
    id <LSARemoteAssetsComponentListener> _remoteAssetsProvider;
    id <LSAUriServiceProvider> _uriServiceProvider;
    SCPromise *_serializedDepthMetadataPromise;
}

- (void).cxx_destruct;
- (void)addLensComponentManagerListeners:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEffectDescriptorContainer:(id)arg1 lensComponentManagerPool:(id)arg2 loadBlock:(id)arg3 processBlock:(id)arg4 drawBlock:(id)arg5 metadata:(id)arg6 processingMode:(long long)arg7 remoteAssetsProvider:(id)arg8 uriServiceProvider:(id)arg9;
- (_Bool)loadWithContext:(id)arg1 error:(id *)arg2;
- (void)removeLensComponentManagerListeners:(id)arg1;
- (id)serializedDepthMetadataFuture;
- (_Bool)trackingComponent:(id)arg1 restartTrackingAtPoint:(struct CGPoint)arg2;
- (_Bool)trackingComponent:(id)arg1 restartTrackingWithExistingTrackingData:(CDStruct_ff938fbd)arg2;
- (_Bool)trackingComponentBeginTracking:(id)arg1;
- (id)trackingComponentDepthDataForTrackingDataGeneration:(id)arg1;
- (_Bool)trackingComponentEndTracking:(id)arg1;
- (void)trackingComponentFinishedTrackingProcessing:(id)arg1;
- (id)trackingComponentFrameForTrackingDataGeneration:(id)arg1;
- (_Bool)trackingComponentIsNativeTrackingSupported:(id)arg1;
- (id)trackingComponentPortraitEffectsMatteForTrackingDataGeneration:(id)arg1;
- (_Bool)trackingComponentResetTracking:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

