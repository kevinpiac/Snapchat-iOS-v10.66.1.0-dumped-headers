//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, UIViewController;
@protocol SCContextMessagingControllerDelegate, SCPageNameLogging;

@protocol SCContextMessagingController <NSObject>
@property(nonatomic) __weak id <SCContextMessagingControllerDelegate> delegate;
- (void)didEndPresentingInputBarView;
- (void)didPresentInputBarView;
- (UIViewController<SCPageNameLogging> *)fullscreenViewController;
- (UIView *)inputBarView;
- (double)inputBarViewHeight;
- (void)presentInFullscreenAnimated:(_Bool)arg1 withKeyboardFocused:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)updateChatStickerFriendmojiInfo;
- (void)viewAboveKeyboardWillExpand;
@end
