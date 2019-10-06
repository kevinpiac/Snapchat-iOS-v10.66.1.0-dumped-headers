//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPreviewVideoProvider-Protocol.h"

@class AVAsset, NSString, NSURL;
@protocol OS_dispatch_semaphore, SCActiveVideoPathsProvider;

@interface SCRecordedVideoProvider : NSObject <SCPreviewVideoProvider>
{
    NSObject<OS_dispatch_semaphore> *_urlSemaphore;
    AVAsset *_asset;
    id <SCActiveVideoPathsProvider> _activeVideoPathsProvider;
    double _videoDuration;
    long long _codecType;
    NSURL *_videoURL;
    NSURL *_backupURL;
    NSURL *_rawVideoDataFileURL;
}

- (void).cxx_destruct;
- (id)_videoDataURL;
@property(readonly, copy, nonatomic) NSURL *backupURL; // @synthesize backupURL=_backupURL;
- (id)cachedWritableURL;
- (_Bool)checkIsVideoReachable;
- (long long)codecType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)exportVideoData;
- (void)exportVideoForURL:(id)arg1;
- (id)initWithRecordedVideo:(id)arg1 activeVideoPathsProvider:(id)arg2;
- (id)initWithVideoURL:(id)arg1 rawVideoDataFileURL:(id)arg2 videoDuration:(double)arg3 activeVideoPathsProvider:(id)arg4 codecType:(long long)arg5;
- (id)newVideoAsset;
- (void)newVideoAssetForQueue:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSURL *rawVideoDataFileURL; // @synthesize rawVideoDataFileURL=_rawVideoDataFileURL;
- (void)removeBackingTemporaryVideo;
- (_Bool)shouldIncludeURLInActiveVideoPaths;
- (double)videoDuration;
@property(readonly, copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (id)writableURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
