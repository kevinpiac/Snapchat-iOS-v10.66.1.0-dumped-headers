//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSearchModalPresenting-Protocol.h"

@class SCSearchQuery, UIViewController;

@protocol SCSearchCardsIntentHandlerDelegate <SCSearchModalPresenting>
- (void)performSearch:(SCSearchQuery *)arg1;
- (UIViewController *)presentedViewController;
- (void)willPerformNavigation;
- (void)willPresentCameraView;
@end
