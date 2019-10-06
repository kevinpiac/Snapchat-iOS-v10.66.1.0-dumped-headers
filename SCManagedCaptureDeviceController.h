//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, SCQueuePerformer;

@interface SCManagedCaptureDeviceController : NSObject
{
    NSMapTable *_focusHandlers;
    NSMapTable *_exposureHandlers;
    SCQueuePerformer *_performerThisClassShouldRunOn;
}

- (void).cxx_destruct;
- (id)_exposureHandlersForDevice:(id)arg1;
- (id)_focusHandlersForDevice:(id)arg1;
- (id)initWithCaptureResource:(id)arg1;
- (void)setAutofocusPointOfInterest:(struct CGPoint)arg1 device:(id)arg2;
- (void)setContinuousAutofocusForDevice:(id)arg1;
- (void)setDeviceConnectedToCaptureSession:(_Bool)arg1 device:(id)arg2;
- (void)setDeviceRecording:(_Bool)arg1 device:(id)arg2;
- (void)setExposurePointOfInterestForDevice:(id)arg1 pointOfInterest:(struct CGPoint)arg2 fromUser:(_Bool)arg3;

@end
