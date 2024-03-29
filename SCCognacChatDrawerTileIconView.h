//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCLazy, SCNetworkImageView;
@protocol SCImageDownloading;

@interface SCCognacChatDrawerTileIconView : UIView <SCViewModelConfigurable>
{
    SCNetworkImageView *_iconImageView;
    SCLazy *_ringViewLazy;
    id _viewModel;
    id <SCImageDownloading> _imageDownloader;
}

- (void).cxx_destruct;
- (id)_ringView;
- (void)animateRing;
- (void)cancelAnimationIfNecessary;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

