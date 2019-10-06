//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCManagedCaptureDevice;

@protocol SCManagedCaptureDeviceDelegate <NSObject>

@optional
- (void)managedCaptureDevice:(SCManagedCaptureDevice *)arg1 didChangeAdjustingExposure:(_Bool)arg2;
- (void)managedCaptureDevice:(SCManagedCaptureDevice *)arg1 didChangeAdjustingFocus:(_Bool)arg2;
- (void)managedCaptureDevice:(SCManagedCaptureDevice *)arg1 didChangeExposurePoint:(struct CGPoint)arg2;
- (void)managedCaptureDevice:(SCManagedCaptureDevice *)arg1 didChangeFocusPoint:(struct CGPoint)arg2;
@end

