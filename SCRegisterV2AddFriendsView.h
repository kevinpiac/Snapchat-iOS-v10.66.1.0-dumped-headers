//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCRegisterV2BaseView.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCExperimentManager, UIButton, UILabel, UIView;
@protocol SCAddFriendsInterstitialView;

@interface SCRegisterV2AddFriendsView : SCRegisterV2BaseView <SCTraceEnabled>
{
    struct UIEdgeInsets _horizontalInsets;
    UIView *_titleView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_descContainer;
    UIView<SCAddFriendsInterstitialView> *_interstitial;
    UIView *_currentTableView;
    double _headerOffset;
    double _descLabelMinOffset;
    SCExperimentManager *_experimentManager;
    _Bool _isShowingLoadingView;
    UIButton *_skipButton;
}

- (void).cxx_destruct;
- (double)_titlePadding;
- (_Bool)actionButtonsVisible;
- (void)addObservers;
- (void)dealloc;
- (void)hideIntersitial;
- (void)initDescription;
- (void)initInterstitial:(struct CGRect)arg1;
- (void)initNextButton;
- (void)initSkipButton;
- (void)initTitle;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 experimentManager:(id)arg3;
- (_Bool)isInterstitialShowing;
@property(nonatomic) _Bool isShowingLoadingView; // @synthesize isShowingLoadingView=_isShowingLoadingView;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onContinuePressed;
- (void)onSkipPressed;
- (void)removeObservers;
- (void)setContinueActivityAnimating:(_Bool)arg1;
- (void)setContinueButtonHidden:(_Bool)arg1;
- (_Bool)setHeaderOffset:(double)arg1;
- (void)setInterstitialGrayscaleIfNeeded:(_Bool)arg1;
- (void)setInterstitialHidden:(_Bool)arg1;
@property(retain, nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
- (void)setTableView:(id)arg1;
- (void)updateTextForOfficialAccountSuggestionsAndOthers;
- (void)updateTextForOfficialAccountSuggestionsOnly;
- (void)updateTextForPublisherAccountSuggestions;
- (void)updateToInvite;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

