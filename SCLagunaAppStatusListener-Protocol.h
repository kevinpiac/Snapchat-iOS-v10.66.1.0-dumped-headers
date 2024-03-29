//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCLagunaAppStatusCoordinator, SCSpectaclesDevice;

@protocol SCLagunaAppStatusListener <NSObject>

@optional
- (void)statusCoordinator:(SCLagunaAppStatusCoordinator *)arg1 needsToUpdateStateForDevice:(SCSpectaclesDevice *)arg2;
- (void)statusCoordinatorBluetoothTurnedOff:(SCLagunaAppStatusCoordinator *)arg1;
- (void)statusCoordinatorBluetoothTurnedOn:(SCLagunaAppStatusCoordinator *)arg1;
- (void)statusCoordinatorNeedsToPair:(SCLagunaAppStatusCoordinator *)arg1;
- (void)statusCoordinatorNumberOfDevicesUpdated:(SCLagunaAppStatusCoordinator *)arg1;
- (void)statusCoordinatorPressedLearnMoreForBluetoothOverloadError:(SCLagunaAppStatusCoordinator *)arg1;
@end

