//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCChatBaseViewController, UIImage, UIView, UIViewController;

@protocol SCChatViewControllerParentDelegate <NSObject>
- (void)didBecomeFullChat;
- (struct CGRect)getViewFrame;
- (_Bool)isFrameInVisibleBounds:(UIViewController *)arg1;
- (_Bool)isFullyVisible:(UIViewController *)arg1;
- (_Bool)isPartiallyVisible:(UIViewController *)arg1;
- (_Bool)isPartiallyVisibleInStack:(SCChatBaseViewController *)arg1;
- (_Bool)isVisibleViewControllerAndCapableOfPlayingSnaps;
- (void)lockScrollWithRequestId:(NSString *)arg1;
- (_Bool)presentedModally;
- (UIView *)recipientBar;
- (UIImage *)rightButtonImage;
- (void)rightButtonPressed;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)unlockScrollWithRequestId:(NSString *)arg1;
@end

