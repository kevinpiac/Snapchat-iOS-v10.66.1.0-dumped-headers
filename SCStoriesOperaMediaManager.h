//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaGLCommandsProvider-Protocol.h"
#import "SCOperaMediaManager-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, SCQueuePerformer, SCScopedAccess, SCStreamingResourceLoader, SCUserSession;
@protocol SCStreamingURLProviding, SCStreamingURLProviding><AVAssetResourceLoaderDelegate;

@interface SCStoriesOperaMediaManager : NSObject <SCOperaMediaManager, SCOperaGLCommandsProvider>
{
    SCUserSession *_userSession;
    NSMutableDictionary *_loadedImages;
    NSMutableDictionary *_loadedVideoAssets;
    NSMutableDictionary *_loadedGLCommands;
    NSMutableDictionary *_loadedAudioProcessorMix;
    NSMutableDictionary *_loadedReverseAudioData;
    NSMutableSet *_shouldBePreparedStoryClientIds;
    NSMutableDictionary *_storyClientIdToErrorType;
    id <SCStreamingURLProviding> _streamingURLProvider;
    id <SCStreamingURLProviding><AVAssetResourceLoaderDelegate> _streamingResouceLoaderStrongHolderButMaybeShouldBeWeak;
    SCStreamingResourceLoader *_streamingResourceLoader;
    SCQueuePerformer *_performer;
    SCScopedAccess *_scopedMyStoriesMediaCoordinator;
    NSMutableDictionary *_preparedStoryPageProperties;
    NSMutableDictionary *_loadingBackgroundImagePreparedStoryPageProperties;
}

+ (id)firstFrameKeyForStory:(id)arg1;
+ (id)imageKeyForStory:(id)arg1;
+ (id)loadingScreenImageKeyForStory:(id)arg1;
+ (id)overlayImageKeyForStory:(id)arg1;
+ (id)processFirstFrameImage:(id)arg1 forAudioStitch:(id)arg2;
+ (id)videoAssetKeyForStory:(id)arg1;
- (void).cxx_destruct;
- (id)_cacheAudioMixAndGeneratePagePropertiesForStory:(id)arg1 audioProcessorMix:(id)arg2 reverseAudioData:(id)arg3;
- (id)_cacheGLCommandsAndGeneratePagePropertiesForSnap:(id)arg1 intermediateGLCommands:(id)arg2 midOutputGLCommand:(id)arg3 outputGLCommands:(id)arg4;
- (void)_corruptedMediaDetected:(id)arg1 mediaFilePath:(id)arg2;
- (void)_fetchHighQualityMediaForStory:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_fetchStoryMediaFromCache:(id)arg1 videoAssetCompletion:(CDUnknownBlockType)arg2;
- (id)_generateGLVideoPagePropertiesFromSnapOverlay:(id)arg1 snapSize:(struct CGSize)arg2;
- (void)_handleFetchedHighQualityVideoWithURL:(id)arg1 snapData:(id)arg2 overlayData:(id)arg3 overlayMetadata:(id)arg4 videoAssetCompletion:(CDUnknownBlockType)arg5;
- (void)_loadStreamingStoryPropertiesForStory:(id)arg1 videoURL:(id)arg2 overlayImage:(id)arg3 previewImage:(id)arg4 videoSize:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_prepareImageMediaForStory:(id)arg1 synchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_prepareStoryMediaForProgressiveStreaming:(id)arg1 cacheKey:(id)arg2 mediaKey:(id)arg3 mediaIv:(id)arg4 snapData:(id)arg5 videoAssetCompletion:(CDUnknownBlockType)arg6;
- (void)_prepareVideoMediaForStory:(id)arg1 synchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_prepareVideoStreamingMediaForStory:(id)arg1 synchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processStreamingZipData:(id)arg1 forStory:(id)arg2 overlayData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_proxiedVideoStreamingURLForStory:(id)arg1;
- (_Bool)_shouldUseTemporaryFilePathForStory:(id)arg1;
- (_Bool)_useInMemoryPlayback;
- (void)_writeStoryMediaToTemporaryPath:(id)arg1 videoURL:(id)arg2 videoAssetCompletion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (unsigned long long)errorTypeForStory:(id)arg1;
- (id)glAudioProcessorMixForKey:(id)arg1;
- (id)glCommandsForKey:(id)arg1;
- (id)glReverseAudioDataForKey:(id)arg1;
- (void)imageForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1 resourceLoader:(id)arg2;
@property(readonly, nonatomic) NSMutableDictionary *loadingBackgroundImagePreparedStoryPageProperties; // @synthesize loadingBackgroundImagePreparedStoryPageProperties=_loadingBackgroundImagePreparedStoryPageProperties;
- (id)miniThumbnailDataForKey:(id)arg1;
- (void)prepareToViewStory:(id)arg1 synchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSMutableDictionary *preparedStoryPageProperties; // @synthesize preparedStoryPageProperties=_preparedStoryPageProperties;
- (void)removeImageForKey:(id)arg1;
- (id)removePreparedStory:(id)arg1;
- (id)removeStoryLoadingLayerImageForStory:(id)arg1;
- (void)removeVideoForKey:(id)arg1 story:(id)arg2;
- (void)setErrorType:(unsigned long long)arg1 forStory:(id)arg2;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (void)setVideoAsset:(id)arg1 forKey:(id)arg2;
- (_Bool)shouldPrepareToViewStory:(id)arg1;
- (_Bool)storyIsPrepared:(id)arg1;
- (id)updateStoryLoadingLayerImageForStory:(id)arg1 loadedImageKey:(id)arg2;
- (id)videoAssetForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
