//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCBitmojiAvatarVisibleDelegate-Protocol.h"
#import "SCImageViewOptimizable-Protocol.h"

@class SCBitmojiAvatarViewModel, SCLazy, SCNetworkImageViewSynchronizer;
@protocol SCImageDownloading;

@interface SCBitmojiAvatarView : UIView <SCBitmojiAvatarVisibleDelegate, SCImageViewOptimizable>
{
    SCLazy *_emojiLabel;
    SCLazy *_bitmojiNetworkImageView;
    SCNetworkImageViewSynchronizer *_imageSynchronizer;
    unsigned long long _optimizationOptions;
    SCBitmojiAvatarViewModel *_viewModel;
    id <SCImageDownloading> _imageDownloader;
    struct CGSize _preferredImageSize;
}

- (void).cxx_destruct;
- (void)_showBitmojiNetworkImageViewWithNetworkImage:(id)arg1 loadingImage:(id)arg2 fallbackNetworkImage:(id)arg3 shouldTrimBitmojiToCircle:(_Bool)arg4 viewModel:(id)arg5;
- (void)_showEmojiLabelWithAttributedText:(id)arg1;
- (void)_updateBitmojiNetworkImageWithFallBackImage:(id)arg1 viewModel:(id)arg2;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isVisible;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long optimizationOptions; // @synthesize optimizationOptions=_optimizationOptions;
@property(nonatomic) struct CGSize preferredImageSize; // @synthesize preferredImageSize=_preferredImageSize;
@property(retain, nonatomic) SCBitmojiAvatarViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)setViewModel:(id)arg1 withImageSynchronizer:(id)arg2;

@end

