//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, SIGPullToRefreshGhostView, UIImageView;
@protocol SIGPullToRefreshViewDelegate;

@interface SIGPullToRefreshView : UIView
{
    SIGPullToRefreshGhostView *_ghost;
    UIImageView *_hands;
    NSArray *_normalGhostConstraints;
    NSArray *_flyingGhostConstraints;
    double _lastHeight;
    id <SIGPullToRefreshViewDelegate> _delegate;
    double _height;
}

- (void).cxx_destruct;
- (void)_resetSmiling;
@property(nonatomic) __weak id <SIGPullToRefreshViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double height; // @synthesize height=_height;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)userDidRelease;

@end

