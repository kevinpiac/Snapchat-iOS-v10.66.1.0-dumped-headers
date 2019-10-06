//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCLoadingIndicatorView, SCStoryMediaMessageViewModel, UIImageView;
@protocol SCChatMediaCardViewDelegate;

@interface SCChatMediaCardMediaView : UIView
{
    id <SCChatMediaCardViewDelegate> _delegate;
    SCLoadingIndicatorView *_activityIndicator;
    UIView *_blockingOverlayView;
    UIImageView *_imageView;
    UIImageView *_lagunaMaskView;
    SCStoryMediaMessageViewModel *_viewModel;
    struct CGSize _thumbnailSize;
}

+ (id)borderColor;
- (void).cxx_destruct;
- (void)_hideBlockingOverlay;
- (void)_hideSpinner;
- (void)_initBlockingOverlayView;
- (void)_initImageView;
- (void)_renderPayload;
- (void)_setImageViewWithImage:(id)arg1 topLeftCornerBlocked:(_Bool)arg2;
- (void)_showSpinner;
- (_Bool)_thumbnailImagesLoaded;
- (void)_updateBlockingOverlay;
- (void)_updateSpinner;
- (void)_updateThumbnailImage;
- (id)activityIndicator;
- (id)initWithDelegate:(id)arg1;
- (id)lagunaMaskView;
- (void)layoutActivityIndicator;
- (void)resetContents;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
- (void)setUpCompleteDisplay;
- (void)setUpDisplay;
- (void)setUpPendingDisplay;
@property(retain, nonatomic) SCStoryMediaMessageViewModel *viewModel; // @synthesize viewModel=_viewModel;

@end

