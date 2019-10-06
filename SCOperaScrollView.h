//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CADisplayLink, NSString, UILongPressGestureRecognizer;
@protocol SCOperaScrollViewDelegate;

@interface SCOperaScrollView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    unsigned long long _currentScrollDirection;
    struct CGPoint _previousOffset;
    struct CGPoint _offsetBeforeScrolling;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    struct CGPoint _startTappingLocation;
    CADisplayLink *_scrollDisplayLink;
    _Bool _ignoreTableViewGestures;
    _Bool _eagerSwipeEnabled;
    id <SCOperaScrollViewDelegate> _operaScrollViewDelegate;
    double _eagerSwipeDistanceThreshold;
    double _eagerSwipeVelocityThreshold;
    double _liveAreaRatioXInset;
    double _liveAreaRatioYInset;
    struct CGPoint _targetContentOffset;
}

- (void).cxx_destruct;
- (void)_cancelLongPressIfNecessary;
- (void)_checkForEagerSwipeUpOnPan:(id)arg1;
- (_Bool)_isLongPressGestureValid;
- (_Bool)_isScrollingDiagonally;
- (void)_scrollViewDidEndScrolling;
- (void)_scrollViewDidScrollForAnimation;
- (void)_setupLongPressGesture;
- (void)didLongPress:(id)arg1;
- (void)didTap:(id)arg1;
- (void)disableEagerSwipeDetection;
@property(nonatomic) double eagerSwipeDistanceThreshold; // @synthesize eagerSwipeDistanceThreshold=_eagerSwipeDistanceThreshold;
@property(nonatomic) _Bool eagerSwipeEnabled; // @synthesize eagerSwipeEnabled=_eagerSwipeEnabled;
@property(nonatomic) double eagerSwipeVelocityThreshold; // @synthesize eagerSwipeVelocityThreshold=_eagerSwipeVelocityThreshold;
- (void)enableEagerSwipeUpWithDistanceThreshold:(double)arg1 velocityThreshold:(double)arg2;
- (id)gestureDescription;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(nonatomic) _Bool ignoreTableViewGestures; // @synthesize ignoreTableViewGestures=_ignoreTableViewGestures;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isScrolling;
@property(nonatomic) double liveAreaRatioXInset; // @synthesize liveAreaRatioXInset=_liveAreaRatioXInset;
@property(nonatomic) double liveAreaRatioYInset; // @synthesize liveAreaRatioYInset=_liveAreaRatioYInset;
@property(nonatomic) __weak id <SCOperaScrollViewDelegate> operaScrollViewDelegate; // @synthesize operaScrollViewDelegate=_operaScrollViewDelegate;
- (void)resetGestureIfNecessary;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1 animationDuration:(double)arg2;
- (void)setContentOffsetWithoutCallback:(struct CGPoint)arg1;
- (void)setSwipeLiveAreaWithRatioXInset:(double)arg1 ratioYInset:(double)arg2;
@property(nonatomic) struct CGPoint targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
- (void)stopRecognizingGestures;
- (void)subviewScrollViewDidStartScrolling;
- (void)subviewScrollViewDidStopScrollingWithBoundaryHit:(_Bool)arg1;
- (void)subviewScrollViewIsAtTopBoundary:(_Bool)arg1 isVisible:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
