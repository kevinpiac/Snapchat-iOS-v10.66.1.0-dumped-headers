//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCPreviewSwipeDismissLoggingParameters, UIViewController;
@protocol SCPreviewFeatureSwipeDownDismissDelegate;

@protocol SCPreviewFeatureSwipeDownDismiss <NSObject>
- (void)exitPreviewCancelled;
- (void)finishTransition;
@property(readonly, nonatomic) SCPreviewSwipeDismissLoggingParameters *loggingParameters;
- (void)setFeatureEnabled:(_Bool)arg1;
@property(nonatomic) __weak UIViewController<SCPreviewFeatureSwipeDownDismissDelegate> *swipeDownDismissDelegate;
- (void)xButtonPressed;
@end

