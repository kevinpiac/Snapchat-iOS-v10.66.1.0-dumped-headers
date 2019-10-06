//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCNetworkImage, SCNetworkImageResizeController, SCNetworkImageViewSynchronizer, SCQueuePerformer, UIImage, UIImageView;
@protocol SCImageDownloaderCancellable, SCImageDownloading;

@interface SCNetworkImageView : UIView <SCEventAnnouncing, SCEventListener>
{
    long long _contentMode;
    id <SCImageDownloading> _imageDownloader;
    id <SCImageDownloaderCancellable> _imageDownloaderCancellable;
    SCNetworkImage *_displayedNetworkImage;
    UIImageView *_imageView;
    SCEventListenerAnnouncer *_eventAnnouncer;
    CDUnknownBlockType _pendingImageBlock;
    SCQueuePerformer *_imageViewPerformer;
    SCNetworkImageResizeController *_resizeController;
    UIImage *_loadingImage;
    SCNetworkImage *_networkImage;
    SCNetworkImageViewSynchronizer *_imageSynchronizer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceDownloadEvent:(id)arg1 extraData:(id)arg2;
- (void)_applyAndRescaleImageIfNecessary:(id)arg1 image:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleImageLoaderCompletionHandlerWithRequestedImage:(id)arg1 resultImage:(id)arg2 downloadLatency:(double)arg3 completion:(CDUnknownBlockType)arg4 isFromCache:(_Bool)arg5;
- (void)_handleImageLoaderFailureHandlerWithRequestedImage:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadNetworkImage:(id)arg1 imageProcessingBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_recordConsumeContentIfNecessary:(id)arg1;
- (id)_rescaleImageIfNeededWithImage:(id)arg1;
- (void)_setLoadingImage;
- (void)_setPendingImageIfPossibleWithPendingImageBlock:(CDUnknownBlockType)arg1;
- (void)_setSuccessImageWithNetworkImage:(id)arg1 image:(id)arg2;
- (void)_syncDisplayedImageIfNecessary;
- (void)_updateFailureWithNetworkImage:(id)arg1;
- (void)_updateSuccessWithNetworkImage:(id)arg1 image:(id)arg2 animated:(_Bool)arg3;
- (void)addListener:(id)arg1;
@property(nonatomic) long long contentMode;
@property(nonatomic) double cornerRadius;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)displayedImage;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) SCNetworkImageViewSynchronizer *imageSynchronizer; // @synthesize imageSynchronizer=_imageSynchronizer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *loadingImage; // @synthesize loadingImage=_loadingImage;
@property(retain, nonatomic) SCNetworkImage *networkImage; // @synthesize networkImage=_networkImage;
@property(nonatomic) struct CGSize preferredImageSize;
- (void)removeListener:(id)arg1;
@property(nonatomic) _Bool resizeImageAutomatically;
- (void)setImageWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setNetworkImage:(id)arg1 imageProcessingBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

