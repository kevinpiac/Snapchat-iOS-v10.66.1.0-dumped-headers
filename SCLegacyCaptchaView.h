//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, SCLoadingIndicatorView, UILabel;
@protocol SCLegacyCaptchaViewDelegate;

@interface SCLegacyCaptchaView : UIView
{
    UIView *_emptyCaptchaSquaresContainer;
    double _captchaImageSizeAdjustedForScreen;
    _Bool _showRetryButtonOnFailure;
    id <SCLegacyCaptchaViewDelegate> _delegate;
    unsigned long long _numSelectedImages;
    SCLoadingIndicatorView *_loadingView;
    UILabel *_activityLabel;
    UIView *_buttonsContainerView;
    NSMutableArray *_captchaImages;
}

- (void).cxx_destruct;
- (void)_endLoadingCaptchaAnimation;
@property(retain, nonatomic) UILabel *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) UIView *buttonsContainerView; // @synthesize buttonsContainerView=_buttonsContainerView;
- (void)captchaButtonPressed:(id)arg1;
@property(retain, nonatomic) NSMutableArray *captchaImages; // @synthesize captchaImages=_captchaImages;
- (void)clearCaptchaImages;
- (void)dealloc;
@property(nonatomic) __weak id <SCLegacyCaptchaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)disableUserInteraction;
- (void)displayCaptchaImages:(id)arg1;
- (void)enableUserInteraction;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) SCLoadingIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(readonly, nonatomic) unsigned long long numSelectedImages; // @synthesize numSelectedImages=_numSelectedImages;
- (void)performAnimation:(id)arg1 animationDuration:(double)arg2 scale:(double)arg3 alpha:(double)arg4 animationOptions:(unsigned long long)arg5;
- (id)selectedImagesString;
- (void)setNumSelectedImages:(unsigned long long)arg1;
@property(nonatomic) _Bool showRetryButtonOnFailure; // @synthesize showRetryButtonOnFailure=_showRetryButtonOnFailure;
- (void)startLoadingCaptchaAnimation;

@end

