//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaLayerView-Protocol.h"

@class NSString, SCOperaViewersContextViewController, SCVerticalSwipeView;

@interface SCOperaViewersLayerView : UIView <SCOperaLayerView>
{
    SCVerticalSwipeView *_containerView;
    UIView *_topSubview;
    UIView *_bottomSubviewFooterView;
    SCOperaViewersContextViewController *_bottomSubviewVC;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
- (void)_setupBottomSubviewFooterViewWithLayer:(id)arg1;
- (void)_setupBottomSubviewWithLayer:(id)arg1;
- (void)_setupContainerViewWithLayer:(id)arg1;
- (void)_setupTopSubview;
@property(retain, nonatomic) UIView *bottomSubviewFooterView; // @synthesize bottomSubviewFooterView=_bottomSubviewFooterView;
@property(retain, nonatomic) SCOperaViewersContextViewController *bottomSubviewVC; // @synthesize bottomSubviewVC=_bottomSubviewVC;
@property(retain, nonatomic) SCVerticalSwipeView *containerView; // @synthesize containerView=_containerView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) UIView *topSubview; // @synthesize topSubview=_topSubview;
- (void)setupBottomSubviews;
- (void)setupViewForLayer:(id)arg1;
- (void)updateViewersVisible:(_Bool)arg1 animationDuration:(double)arg2 delay:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

