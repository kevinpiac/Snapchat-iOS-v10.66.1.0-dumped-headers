//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNetworkImage, SCQueuePerformer, UIImage;
@protocol SCImageDownloaderCancellable, SCImageDownloading, SCUnifiedProfileSquadmojiNetworkImageFetcherDelegate;

@interface SCUnifiedProfileSquadmojiNetworkImageFetcher : NSObject
{
    id <SCImageDownloading> _imageDownloader;
    id <SCImageDownloaderCancellable> _imageDownloaderCancellable;
    SCQueuePerformer *_imageFetchPerformer;
    _Bool _hasFinishedFetching;
    id <SCUnifiedProfileSquadmojiNetworkImageFetcherDelegate> _delegate;
    SCNetworkImage *_networkImage;
    UIImage *_loadingImage;
    UIImage *_loadedImage;
}

- (void).cxx_destruct;
- (void)_didFinishFetchingNetworkImageWithLoadedImage:(id)arg1;
- (void)_loadNetworkImage:(id)arg1;
@property(nonatomic) __weak id <SCUnifiedProfileSquadmojiNetworkImageFetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool hasFinishedFetching; // @synthesize hasFinishedFetching=_hasFinishedFetching;
- (id)initWithImageDownloader:(id)arg1 networkImage:(id)arg2 loadingImage:(id)arg3;
- (void)loadImage;
@property(readonly, nonatomic) UIImage *loadedImage; // @synthesize loadedImage=_loadedImage;
@property(readonly, nonatomic) UIImage *loadingImage; // @synthesize loadingImage=_loadingImage;
@property(readonly, nonatomic) SCNetworkImage *networkImage; // @synthesize networkImage=_networkImage;
- (void)teardown;

@end
