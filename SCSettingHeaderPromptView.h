//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SCButton, UILabel;
@protocol SCSettingHeaderPromptViewDelegate;

@interface SCSettingHeaderPromptView : UIView
{
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    SCButton *_continueButton;
    NSString *_title;
    NSString *_text;
    id <SCSettingHeaderPromptViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didTapContinueButton;
- (void)_setupSubviews;
@property(nonatomic) __weak id <SCSettingHeaderPromptViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithTitle:(id)arg1 text:(id)arg2 delegate:(id)arg3;

@end

