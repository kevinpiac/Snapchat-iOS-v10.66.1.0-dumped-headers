//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCLabeledGrowingButton.h"

@class UIImageView, UILabel, UIView;

@interface SCPreviewSendButton : SCLabeledGrowingButton
{
    UIView *_sendButtonContainerView;
    UILabel *_sendButtonLabel;
    UIImageView *_sendImageView;
    _Bool _isShowingSendButtonLabel;
    UILabel *_sendToLabel;
}

- (void).cxx_destruct;
- (struct CGRect)_sendLabelFrame;
- (void)_setupSendToLabel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool isShowingSendButtonLabel; // @synthesize isShowingSendButtonLabel=_isShowingSendButtonLabel;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (double)sendButtonWidthWithSendLabel;
@property(retain, nonatomic) UILabel *sendToLabel; // @synthesize sendToLabel=_sendToLabel;
- (void)setAlpha:(double)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setupNormalSendButton;
- (void)setupSendButtonLabel:(_Bool)arg1;

@end
