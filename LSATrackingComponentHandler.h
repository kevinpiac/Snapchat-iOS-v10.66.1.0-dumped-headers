//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSATrackingComponentDelegate-Protocol.h"

@class NSString, SCCaptureResource;

@interface LSATrackingComponentHandler : NSObject <LSATrackingComponentDelegate>
{
    SCCaptureResource *_captureResource;
}

- (void).cxx_destruct;
- (_Bool)_restartTrackingAtPoint:(struct CGPoint)arg1;
- (void)_restartTrackingWithTransform:(CDStruct_f1db2b5e)arg1 initialPlacementScale:(double)arg2;
- (id)initWithCaptureResource:(id)arg1;
- (_Bool)trackingComponent:(id)arg1 restartTrackingAtPoint:(struct CGPoint)arg2;
- (_Bool)trackingComponent:(id)arg1 restartTrackingWithExistingTrackingData:(CDStruct_ff938fbd)arg2;
- (_Bool)trackingComponentBeginTracking:(id)arg1;
- (id)trackingComponentDepthDataForTrackingDataGeneration:(id)arg1;
- (_Bool)trackingComponentEndTracking:(id)arg1;
- (void)trackingComponentFinishedTrackingProcessing:(id)arg1;
- (id)trackingComponentFrameForTrackingDataGeneration:(id)arg1;
- (_Bool)trackingComponentIsNativeTrackingSupported:(id)arg1;
- (_Bool)trackingComponentResetTracking:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

