//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ARFrame, LSAPortraitEffectsMatteWrapper, LSATrackingComponent;

@protocol LSATrackingComponentDelegate <NSObject>
- (_Bool)trackingComponent:(LSATrackingComponent *)arg1 restartTrackingAtPoint:(struct CGPoint)arg2;
- (_Bool)trackingComponent:(LSATrackingComponent *)arg1 restartTrackingWithExistingTrackingData:(CDStruct_ff938fbd)arg2;
- (_Bool)trackingComponentBeginTracking:(LSATrackingComponent *)arg1;
- (_Bool)trackingComponentEndTracking:(LSATrackingComponent *)arg1;
- (void)trackingComponentFinishedTrackingProcessing:(LSATrackingComponent *)arg1;
- (ARFrame *)trackingComponentFrameForTrackingDataGeneration:(LSATrackingComponent *)arg1;
- (_Bool)trackingComponentIsNativeTrackingSupported:(LSATrackingComponent *)arg1;
- (_Bool)trackingComponentResetTracking:(LSATrackingComponent *)arg1;

@optional
- (LSAPortraitEffectsMatteWrapper *)trackingComponentPortraitEffectsMatteForTrackingDataGeneration:(LSATrackingComponent *)arg1;
@end

