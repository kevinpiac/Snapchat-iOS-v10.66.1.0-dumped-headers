//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class CAGradientLayer, NSString, SCFuturedImageView, SCLensChallengesLayout, SCLensExplorerReplayOverlay, SCNetworkImageView, UILabel, UIView;
@protocol SCActionHandling, SCCanceling, SCLensExplorerBitmojiImageFetcherProtocol;

@interface SCLensChallengesSnapCell : UICollectionViewCell <SCViewModelConfigurable, SCActionable>
{
    SCNetworkImageView *_coverImageView;
    SCFuturedImageView *_avatarImageView;
    UIView *_avatarContainer;
    CAGradientLayer *_gradientLayer;
    UILabel *_titleLabel;
    SCLensChallengesLayout *_layout;
    id <SCLensExplorerBitmojiImageFetcherProtocol> _bitmojiImageFetcher;
    id <SCCanceling> _bitmojiAvatarCancelable;
    SCLensExplorerReplayOverlay *_replayOverlay;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_configureGestureRecognizers;
- (void)_contentViewDidTap:(id)arg1;
- (void)_initializeSubviews;
- (void)_setupKarma;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)replayOverlay;
- (void)setBitmojiImageFetcher:(id)arg1;
- (void)setImageDownloader:(id)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

