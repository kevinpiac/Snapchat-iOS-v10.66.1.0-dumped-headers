//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCInAppRatingUserActionDelegate <NSObject>
- (void)userTappedExitLeaveFeedback;
- (void)userTappedLeaveFeedback;
- (void)userTappedNotNow;
- (void)userTappedSubmitFeedback:(NSString *)arg1;
- (void)userTappedSure;
@end

