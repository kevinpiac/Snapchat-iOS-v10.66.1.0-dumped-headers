//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, SCChatInputView;
@protocol SCUnifiedProfileNewGroupChatInputBarActionHandling, SCUnifiedProfileNewGroupChatInputBarDelegate;

@interface SCUnifiedProfileNewGroupChatInputBarView : UIView <UIGestureRecognizerDelegate, UITextViewDelegate>
{
    UIView *_backgroundView;
    SCChatInputView *_inputView;
    id <SCUnifiedProfileNewGroupChatInputBarActionHandling> _chatInputBarActionHandler;
    id <SCUnifiedProfileNewGroupChatInputBarDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_handleNavigateToChatWithURLPath:(id)arg1;
- (void)_handleReturnPressedWithMessage:(id)arg1;
- (void)_handleTapOnCamera;
- (void)_handleTapOnMedia;
- (void)_handleTapOnSticker;
- (void)_handleTapOnTextView;
- (_Bool)becomeFirstResponder;
@property(nonatomic) __weak id <SCUnifiedProfileNewGroupChatInputBarActionHandling> chatInputBarActionHandler; // @synthesize chatInputBarActionHandler=_chatInputBarActionHandler;
@property(nonatomic) __weak id <SCUnifiedProfileNewGroupChatInputBarDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isFirstResponder;
- (void)layoutSubviews;
- (void)reload;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
