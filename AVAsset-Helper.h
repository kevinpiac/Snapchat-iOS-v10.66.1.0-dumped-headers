//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

@interface AVAsset (Helper)
+ (long long)_statusOfKeyPath:(id)arg1 videoAsset:(id)arg2;
+ (void)generateVideoAssetWithoutAudioForVideoAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)generateVideoAssetWithoutAudioForVideoURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)basicVideoCheckWithCallbackQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@end
