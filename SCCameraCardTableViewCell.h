//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIPanGestureRecognizer, UIView;
@protocol SCCameraCardTableViewCellDelegate;

@interface SCCameraCardTableViewCell : UITableViewCell
{
    _Bool _peekModeSupported;
    _Bool _visible;
    UIView *_cardView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    unsigned long long _priority;
    id <SCCameraCardTableViewCellDelegate> _delegate;
    unsigned long long _style;
    struct CGSize _preferredSize;
}

- (void).cxx_destruct;
- (void)_animateBackToCenter;
- (void)_animateOffScreenWithPanVelocity:(double)arg1 shouldAnimatedOffRightSide:(_Bool)arg2;
- (void)_didPanTableViewCell:(id)arg1;
- (id)_longPressGestureRecognizer;
- (void)animateToHeight:(double)arg1 withAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelPanGesture;
- (void)cardDidDisappear;
- (void)cardDidInsert;
- (void)cardDidRemove;
@property(readonly, nonatomic) __weak UIView *cardView; // @synthesize cardView=_cardView;
- (void)cardWillAppear;
- (void)cardWillInsert;
- (void)cardWillRemove;
@property(nonatomic) __weak id <SCCameraCardTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissCard;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithPreferredSize:(struct CGSize)arg1;
- (id)initWithPreferredSize:(struct CGSize)arg1 backgroundColor:(id)arg2 cornerRadius:(double)arg3;
@property(nonatomic) __weak UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) _Bool peekModeSupported; // @synthesize peekModeSupported=_peekModeSupported;
@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
- (void)updateStyle;

@end

