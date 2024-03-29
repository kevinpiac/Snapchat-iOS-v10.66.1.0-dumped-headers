//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCNetworkImage, SCNetworkImageView, SCUnifiedProfileCharmsCardViewCell;

@interface SCUnifiedProfileCharmsCardViewCellContentView : UIView <SCViewModelConfigurable>
{
    SCNetworkImageView *_staticNetworkImageView;
    SCNetworkImage *_bitmojiNetworkImage;
    SCNetworkImageView *_bitmojiNetworkImageView;
    _Bool _isBitmojiReady;
    _Bool _isViewed;
    id _viewModel;
    SCUnifiedProfileCharmsCardViewCell *_cell;
}

- (void).cxx_destruct;
- (void)_staticToBitmojiTransition;
@property(nonatomic) __weak SCUnifiedProfileCharmsCardViewCell *cell; // @synthesize cell=_cell;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setImageDownloader:(id)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void)setViewed:(_Bool)arg1;
- (void)setupBitmojiImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

