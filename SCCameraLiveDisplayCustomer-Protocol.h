//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCCameraLiveDisplayVendor;

@protocol SCCameraLiveDisplayCustomer <NSObject>

@optional
- (void)liveDisplayRenderedFrame:(SCCameraLiveDisplayVendor *)arg1;
- (void)liveDisplaySuspendingForAppBackground:(SCCameraLiveDisplayVendor *)arg1;
- (void)newLiveDisplayVendedFromVendor:(SCCameraLiveDisplayVendor *)arg1;
@end
