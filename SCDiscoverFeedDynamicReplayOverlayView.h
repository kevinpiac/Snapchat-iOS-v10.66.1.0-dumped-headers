//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCDiscoverFeedDynamicReplayOverlayViewModel, UIImageView, UILabel;

@interface SCDiscoverFeedDynamicReplayOverlayView : UIView
{
    UIView *_maskOverlay;
    UIView *_middleSeparator;
    UIImageView *_primaryIconImageView;
    UIImageView *_secondaryIconImageView;
    UILabel *_primaryIconSubtitle;
    UILabel *_secondaryIconSubtitle;
    UILabel *_replayOverlayTitle;
    SCDiscoverFeedDynamicReplayOverlayViewModel *_viewModel;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) SCDiscoverFeedDynamicReplayOverlayViewModel *viewModel; // @synthesize viewModel=_viewModel;

@end
