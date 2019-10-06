//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol SCFeatureSendToSwipeNavigation;

@protocol SCFeatureSendToSwipeNavigationDelegate <NSObject>
- (void)showConfidentialFeatureConfirmationWithCompletion:(void (^)(_Bool))arg1;
- (void)swipeNavigationFeature:(id <SCFeatureSendToSwipeNavigation>)arg1 didFinishWithTransitionType:(unsigned long long)arg2 success:(_Bool)arg3 isInteractive:(_Bool)arg4 viewController:(UIViewController *)arg5;
- (_Bool)swipeNavigationFeatureCurrentSnapContainsConfidentialFeature:(id <SCFeatureSendToSwipeNavigation>)arg1;
- (_Bool)swipeNavigationFeatureShouldPresentViewController:(id <SCFeatureSendToSwipeNavigation>)arg1;
- (UIViewController *)viewControllerToPresentFromPresentingViewController:(UIViewController *)arg1;
@end
