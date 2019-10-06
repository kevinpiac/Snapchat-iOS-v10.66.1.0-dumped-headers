//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCSendPreviewMediaView-Protocol.h"

@class AVPlayerLayer, NSString, PHAsset, SCLoadingIndicatorView, UIImageView;

@interface SCPHAssetMediaView : UIView <SCSendPreviewMediaView>
{
    PHAsset *_asset;
    UIImageView *_imageView;
    AVPlayerLayer *_playerLayer;
    SCLoadingIndicatorView *_loadingIndicator;
    _Bool _wantsPlay;
}

- (void).cxx_destruct;
- (id)SCAMediaTypes;
- (void)_didReceiveImage:(id)arg1;
- (void)_didReceivePlayerItem:(id)arg1;
- (void)_setupView;
- (id)initWithPHAsset:(id)arg1;
- (void)layoutSubviews;
- (void)pause;
- (void)play;
- (void)playerItemDidReachEnd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

