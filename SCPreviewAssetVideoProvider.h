//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPreviewVideoProvider-Protocol.h"

@class AVAsset, NSNumber, NSString, NSURL;

@interface SCPreviewAssetVideoProvider : NSObject <SCPreviewVideoProvider>
{
    AVAsset *_asset;
    NSURL *_backingURL;
    NSNumber *_codecType;
}

- (void).cxx_destruct;
- (void)_exportAssetSynchronouslyToURL:(id)arg1;
- (id)_nonNilBackingURL;
- (id)cachedWritableURL;
- (_Bool)checkIsVideoReachable;
- (long long)codecType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)exportVideoData;
- (void)exportVideoForURL:(id)arg1;
- (id)initWithVideoAsset:(id)arg1;
- (id)newVideoAsset;
- (void)newVideoAssetForQueue:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)removeBackingTemporaryVideo;
- (_Bool)shouldIncludeURLInActiveVideoPaths;
- (double)videoDuration;
- (id)writableURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

