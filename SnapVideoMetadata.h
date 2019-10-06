//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SnapVideoMetadata : NSObject
{
}

+ (struct CGSize)_lagunaVideoTargetSizeWithVideoSourceSize:(struct CGSize)arg1 hasOverlayToBlend:(_Bool)arg2 isExport:(_Bool)arg3;
+ (struct CGSize)adjustVideoTargetSizeWithTargetAspectRatio:(double)arg1;
+ (long long)averageTranscodingBitRate:(struct CGSize)arg1 isRecording:(_Bool)arg2 highQuality:(_Bool)arg3 duration:(double)arg4 iFrameOnly:(_Bool)arg5 originalVideoBitRate:(double)arg6 overlayImageFileSizeBits:(long long)arg7 videoPlaybackRate:(double)arg8 isLagunaVideo:(_Bool)arg9 hasOverlayToBlend:(_Bool)arg10;
+ (_Bool)deviceMeetsMinimumRequirementsForHighQualityVideo;
+ (_Bool)deviceMeetsRequirementsForContentAdaptiveVideoEncoding;
+ (_Bool)isVideoValidForURL:(id)arg1;
+ (_Bool)synchronouslyLoadAttributes:(id)arg1 forAssetTrack:(id)arg2 timeout:(double)arg3 error:(id *)arg4;
+ (_Bool)synchronouslyLoadAttributes:(id)arg1 forVideo:(id)arg2 error:(id *)arg3;
+ (double)videoDurationForAsset:(id)arg1;
+ (double)videoDurationForAsset:(id)arg1 waitWhileLoadingTracksIfNeeded:(_Bool)arg2 error:(id *)arg3;
+ (double)videoDurationForURL:(id)arg1;
+ (struct CGSize)videoSizeForAsset:(id)arg1;
+ (struct CGSize)videoSizeForAsset:(id)arg1 waitWhileLoadingTracksIfNeeded:(_Bool)arg2;
+ (struct CGSize)videoSizeForURL:(id)arg1;
+ (struct CGSize)videoSizeForURL:(id)arg1 waitWhileLoadingTracksIfNeeded:(_Bool)arg2;
+ (struct CGSize)videoTargetSizeWithVideoSourceSize:(struct CGSize)arg1 videoTargetAspectRatio:(double)arg2 highQuality:(_Bool)arg3 isLagunaVideo:(_Bool)arg4 hasOverlayToBlend:(_Bool)arg5 isExport:(_Bool)arg6;

@end

