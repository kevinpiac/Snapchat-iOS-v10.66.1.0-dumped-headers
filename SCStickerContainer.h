//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStickerFilterContainer-Protocol.h"

@class NSArray, NSString, UIView;
@protocol SCDownloadableContentManaging, SCImageDownloading, SCStickerPreferenceAdaptor;

@interface SCStickerContainer : NSObject <SCStickerFilterContainer>
{
    id <SCDownloadableContentManaging> _downloadableManager;
    id <SCStickerPreferenceAdaptor> _stickerPreferenceAdaptor;
    struct CGSize _portraitContainerSize;
    UIView *_staticStickersContainerView;
    id <SCImageDownloading> _imageDownloader;
    UIView *_trackingStickersContainerView;
    long long _trackingUpdateVersion;
    long long _maxUniqueStickerId;
}

+ (id)renderableEmojiWithEmoji:(id)arg1;
- (void).cxx_destruct;
- (id)_filteredStickerViewsUsingBlock:(CDUnknownBlockType)arg1;
- (double)_roundToN:(double)arg1 decimals:(int)arg2;
- (long long)animatedStickerCount;
- (void)drawStaticStickersScreenshotImageInCurrentContextWithRect:(struct CGRect)arg1;
- (_Bool)hasNonTrackingAnimatedSticker;
- (_Bool)hasNonTrackingStaticSticker;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1 stickerPreferenceAdaptor:(id)arg2 downloadablemanager:(id)arg3 imageDownloader:(id)arg4;
@property(nonatomic) long long maxUniqueStickerId; // @synthesize maxUniqueStickerId=_maxUniqueStickerId;
- (void)setStickersHiddenState:(_Bool)arg1 includeCustomSticker:(_Bool)arg2;
- (void)setStickersState:(id)arg1 configuration:(CDUnknownBlockType)arg2 infoStickerDataProvider:(id)arg3 userSession:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
@property(nonatomic) long long trackingUpdateVersion; // @synthesize trackingUpdateVersion=_trackingUpdateVersion;
@property(readonly, nonatomic) UIView *staticStickersContainerView; // @synthesize staticStickersContainerView=_staticStickersContainerView;
@property(readonly, nonatomic) long long stickerCount;
@property(readonly, copy, nonatomic) NSArray *stickerViews;
- (id)stickerViewsWithType:(unsigned long long)arg1;
- (id)stickersStateIncludingStatic:(_Bool)arg1 tracking:(_Bool)arg2;
@property(readonly, nonatomic) UIView *trackingStickersContainerView; // @synthesize trackingStickersContainerView=_trackingStickersContainerView;
- (long long)unfinishedTrackingStickerCount;
- (id)videoTrackedImagesForNonTrackingStickersWithCroppingAspectRatio:(double)arg1;
- (id)videoTrackedImagesForTrackingStickersWithCroppingAspectRatio:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

