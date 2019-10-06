//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCManagedDeviceCapacityAnalyzer;

@protocol SCManagedDeviceCapacityAnalyzerListener <NSObject>

@optional
- (void)managedDeviceCapacityAnalyzer:(SCManagedDeviceCapacityAnalyzer *)arg1 didChangeAdjustingExposure:(_Bool)arg2;
- (void)managedDeviceCapacityAnalyzer:(SCManagedDeviceCapacityAnalyzer *)arg1 didChangeBrightness:(float)arg2;
- (void)managedDeviceCapacityAnalyzer:(SCManagedDeviceCapacityAnalyzer *)arg1 didChangeLightingCondition:(long long)arg2;
- (void)managedDeviceCapacityAnalyzer:(SCManagedDeviceCapacityAnalyzer *)arg1 didChangeLowLightCondition:(_Bool)arg2;
@end

