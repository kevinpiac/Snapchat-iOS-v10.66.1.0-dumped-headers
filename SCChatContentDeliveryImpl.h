//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatContentDelivery-Protocol.h"

@class NSString, SCContentDeliveryImpl, SCQueuePerformer;

@interface SCChatContentDeliveryImpl : NSObject <SCChatContentDelivery>
{
    SCQueuePerformer *_queuePerformer;
    SCContentDeliveryImpl *_contentDelivery;
}

+ (id)_chatMediaContentErrorToString:(long long)arg1;
+ (id)_generateThumbnailForSpectaclesImagesWithInputs:(id)arg1 output:(id)arg2;
+ (id)_generateThumbnailWithInputs:(id)arg1 output:(id)arg2;
+ (long long)nativeContentRetrievalErrorToChatMediaContentError:(long long)arg1 bundleData:(id)arg2;
- (void).cxx_destruct;
- (void)_generateAndSaveThumbnailForSpectaclesImageForContentData:(id)arg1 overlayData:(id)arg2 metadataDict:(id)arg3 thumbnailCacheId:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)_generateThumbnailAndSaveWithMediaIfVideoForResult:(id)arg1 mediaId:(id)arg2 contentCacheId:(id)arg3 overlayCacheId:(id)arg4 lensAssetCacheId:(id)arg5 thumbnailCacheId:(id)arg6 containsVideo:(_Bool)arg7 videoExistsOnDisk:(_Bool)arg8 videoUrl:(id)arg9 mediaType:(long long)arg10 bundleContentKey:(id)arg11 saveVideoToDiskBlock:(CDUnknownBlockType)arg12 completionBlock:(CDUnknownBlockType)arg13;
- (void)_logDownloadContentForMediaId:(id)arg1 success:(_Bool)arg2 prefetch:(_Bool)arg3 isBolt:(_Bool)arg4;
- (void)_logRetrieveContentForMediaId:(id)arg1 success:(_Bool)arg2 error:(long long)arg3 message:(id)arg4;
- (void)_registerZipEntriesForZipArchiveContentKey:(id)arg1 contentCacheId:(id)arg2 overlayCacheId:(id)arg3 lensAssetCacheId:(id)arg4 videoZipEntryFullName:(id)arg5 overlayZipEntryFullName:(id)arg6 lensAssetsZipEntryFullName:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_saveToDiskAndGenerateAndSaveThumbnailIfVideoForContentData:(id)arg1 overlayData:(id)arg2 metadataDict:(id)arg3 mediaId:(id)arg4 containsVideo:(_Bool)arg5 videoExistsOnDisk:(_Bool)arg6 videoUrl:(id)arg7 thumbnailCacheId:(id)arg8 mediaType:(long long)arg9 saveVideoToDiskBlock:(CDUnknownBlockType)arg10 withCompletionHandler:(CDUnknownBlockType)arg11;
- (_Bool)contains:(id)arg1;
- (void)downloadContentForConversationId:(id)arg1 messageId:(id)arg2 media:(id)arg3 messageBodyType:(long long)arg4 userInitiated:(_Bool)arg5 useBoltUpload:(_Bool)arg6 senderUsername:(id)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (id)initWithContentDelivery:(id)arg1;
- (void)postProcessChatMedia:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)postProcessStoryMedia:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeContentForDedupeKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)retrieveContentAndOverlayForUnZippedMedia:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)retrieveContentForDedupeKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveLocalContent:(id)arg1 dedupeKey:(id)arg2 expirationDate:(id)arg3 isAuthoritative:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
