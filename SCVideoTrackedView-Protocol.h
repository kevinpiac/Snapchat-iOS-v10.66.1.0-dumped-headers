//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCVideoTargetTrajectory, SCVideoTargetTrajectoryManager;

@protocol SCVideoTrackedView <NSObject>
- (void)disableTracking;
- (void)enableTrackingWithManager:(SCVideoTargetTrajectoryManager *)arg1;
- (_Bool)isTracking;
- (SCVideoTargetTrajectory *)targetTrajectory;
@property(readonly, nonatomic) SCVideoTargetTrajectoryManager *trajectoryManager;
@end

