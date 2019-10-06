//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, SCCancelableRequest, SCCompositeNetworkImageModel, SCLoadingIndicatorView, SCQueuePerformer, UIImageView;
@protocol SCCompositeNetworkImageDownloading;

@interface SCCompositeNetworkImageView : UIView
{
    id <SCCompositeNetworkImageDownloading> _imageDownloader;
    SCCompositeNetworkImageModel *_displayedNetworkImage;
    UIImageView *_imageView;
    SCQueuePerformer *_imageViewPerformer;
    SCLoadingIndicatorView *_imageLoadingIndicator;
    SCCancelableRequest *_request;
    NSTimer *_requestTimer;
    _Bool _imageLoaded;
    SCCompositeNetworkImageModel *_compositeNetworkImage;
}

- (void).cxx_destruct;
- (void)_handleLoadingFailureWithError:(id)arg1 withRequestedNetworkImage:(id)arg2;
- (void)_handleLoadingSuccessWithImage:(id)arg1 withRequestedNetworkImage:(id)arg2;
- (void)_loadCompositeNetworkImage:(id)arg1;
- (void)_performLoadCompositeNetworkImage:(id)arg1;
- (void)_setImage:(id)arg1 withCompositeNetworkImage:(id)arg2;
- (void)_showLoadingIndicatorAfterDelay;
@property(retain, nonatomic) SCCompositeNetworkImageModel *compositeNetworkImage; // @synthesize compositeNetworkImage=_compositeNetworkImage;
- (long long)contentMode;
- (void)delayedUpdateWithCompositeImageModel:(id)arg1;
- (id)displayedImage;
@property(retain, nonatomic) id <SCCompositeNetworkImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(nonatomic) _Bool imageLoaded; // @synthesize imageLoaded=_imageLoaded;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)referenceView;
- (void)setBackgroundColor:(id)arg1;
- (void)setClipsToBounds:(_Bool)arg1;
- (void)setContentMode:(long long)arg1;

@end
