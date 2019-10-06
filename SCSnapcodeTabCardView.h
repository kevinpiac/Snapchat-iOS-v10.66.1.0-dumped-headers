//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SCLoadingIndicatorView, SCScannableInfo, UIButton;
@protocol SCSnapcodeTabCardViewViewDelegate;

@interface SCSnapcodeTabCardView : UIView
{
    NSString *_continueBarTitle;
    _Bool _continueBarActive;
    id <SCSnapcodeTabCardViewViewDelegate> _delegate;
    unsigned long long _cardSnapcodeTabType;
    SCScannableInfo *_scannableInfo;
    UIButton *_continueBar;
    SCLoadingIndicatorView *_continueBarActivity;
}

- (void).cxx_destruct;
- (void)_createContinueBar;
- (void)_setContinueBarTitle:(id)arg1;
@property(readonly, nonatomic) unsigned long long cardSnapcodeTabType; // @synthesize cardSnapcodeTabType=_cardSnapcodeTabType;
@property(retain, nonatomic) UIButton *continueBar; // @synthesize continueBar=_continueBar;
@property(nonatomic) _Bool continueBarActive;
@property(retain, nonatomic) SCLoadingIndicatorView *continueBarActivity; // @synthesize continueBarActivity=_continueBarActivity;
- (void)continueButtonPressed;
- (void)continueButtonPressedAction;
@property(nonatomic) __weak id <SCSnapcodeTabCardViewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1 buttonTitle:(id)arg2 snapcodeViewOffset:(double)arg3;
- (void)inputKeyboardWillHide:(id)arg1;
- (void)inputKeyboardWillShow:(id)arg1;
- (void)resetInput;
@property(retain, nonatomic) SCScannableInfo *scannableInfo; // @synthesize scannableInfo=_scannableInfo;
- (void)startContinueBarAnimation;
- (void)stopContinueBarAnimation:(_Bool)arg1;
- (void)updateScannableInfo:(id)arg1;
- (void)updateViewKeyboardWillChangeFrame:(id)arg1 showing:(_Bool)arg2;
- (void)viewDidSelect;
- (void)viewDidUnSelect;

@end

