//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCScheduledLensController;

@protocol SCScheduledLensControllerDelegate <NSObject>
- (void)scheduledLensController:(SCScheduledLensController *)arg1 didUpdateActiveData:(NSArray *)arg2 activeRearData:(NSArray *)arg3 preselectedLensId:(NSString *)arg4;
- (void)scheduledLensController:(SCScheduledLensController *)arg1 didUpdatePreCachedData:(NSArray *)arg2;
@end
