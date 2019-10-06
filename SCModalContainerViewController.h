//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIColor, UIScrollView, UITapGestureRecognizer, UIView;

@interface SCModalContainerViewController : UIViewController <UIGestureRecognizerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, UIScrollViewDelegate>
{
    long long _style;
    UIColor *_backgroundColor;
    double _sheetHeight;
    UIScrollView *_scrollingContainer;
    UITapGestureRecognizer *_tapToDismiss;
    UIView *_contentContainer;
    UIView *_contentContainerBackgroundView;
    UIView *_blackBackdropView;
    _Bool _allowsSwipeToDismiss;
    _Bool _contentContainerIgnoresBottomSafeAreaInsets;
    _Bool _hasShadow;
    UIView *_contentView;
}

- (void).cxx_destruct;
- (double)_scrollDismissalProgress;
- (void)_tappedToDismiss;
@property(nonatomic) _Bool allowsSwipeToDismiss; // @synthesize allowsSwipeToDismiss=_allowsSwipeToDismiss;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(nonatomic) _Bool contentContainerClipsSubviews;
@property(nonatomic) _Bool contentContainerIgnoresBottomSafeAreaInsets; // @synthesize contentContainerIgnoresBottomSafeAreaInsets=_contentContainerIgnoresBottomSafeAreaInsets;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)didDismissViaGesture;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
- (id)initWithStyle:(long long)arg1 backgroundColor:(id)arg2 sheetHeight:(double)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setContentView:(id)arg1 animated:(_Bool)arg2;
- (double)transitionDuration:(id)arg1;
- (void)updateSheetHeight:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
