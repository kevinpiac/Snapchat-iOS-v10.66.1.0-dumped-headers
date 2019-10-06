//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SIGCardTransitionDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, SIGHeader, SIGHeaderItem, SIGSubscreenViewControllerContentFade, UIScrollView, UIView;
@protocol SIGCardTransition;

@interface SIGSubscreenViewController : UIViewController <SIGCardTransitionDelegate>
{
    SIGHeader *_header;
    UIScrollView *_scrollView;
    UIView *_backgroundView;
    UIView *_contentView;
    SIGSubscreenViewControllerContentFade *_fade;
    NSLayoutConstraint *_fadeTopAnchor;
    _Bool _updatingInsets;
    _Bool _userCanPullToDismiss;
    unsigned long long _style;
    id <SIGCardTransition> _cardTransition;
    SIGHeaderItem *_headerItem;
}

- (void).cxx_destruct;
- (void)_dismiss;
- (void)_installPullToDismiss;
- (void)_scrollViewBeingPanned;
- (void)_setupAutolayoutWithScrollLayoutView:(id)arg1;
- (void)_setupStickySectionHeadersIfNeeded;
- (void)_stylize;
- (void)_syncronizeHeaderWithScrollView;
@property(readonly, nonatomic) UIView *backgroundView;
@property(readonly, nonatomic) id <SIGCardTransition> cardTransition; // @synthesize cardTransition=_cardTransition;
- (void)cardTransitionDidUpdateProgress:(double)arg1;
- (void)cardTransitionEndedWithView:(id)arg1 dismissed:(_Bool)arg2;
- (_Bool)cardTransitionShouldBeginWithView:(id)arg1;
- (void)cardTransitionWillBeginWithView:(id)arg1;
@property(readonly, nonatomic) UIView *contentView;
- (void)dealloc;
- (id)dismissButton;
@property(readonly, nonatomic) SIGHeader *header;
@property(readonly, nonatomic) SIGHeaderItem *headerItem; // @synthesize headerItem=_headerItem;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, getter=isPullToDismissEnabled) _Bool userCanPullToDismiss; // @synthesize userCanPullToDismiss=_userCanPullToDismiss;
- (id)loadScrollView;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (id)scrollViewBottomAnchor;
- (void)scrollViewDidScroll;
- (id)scrollViewTopAnchor;
- (void)setScrollView:(id)arg1;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)updateScrollViewInsets;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

