//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, SCImpressionTracker;

@protocol SCImpressionTrackingDelegate <NSObject>
- (void)impressionTracker:(SCImpressionTracker *)arg1 didReachThresholdForItems:(NSArray *)arg2 date:(NSDate *)arg3;
@end
