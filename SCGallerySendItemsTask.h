//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, SCGallerySendItemsCounter, SCGallerySendItemsVideoSegmentHelper, SCGallerySmartSharing, SCGalleryUserContext, SCLazy, SCStoriesPostingConfiguration, SCUserSession;
@protocol SCGalleryOperaMagicMomentCaching, SCGallerySendItemsTaskDelegate, SCGallerySnap;

@interface SCGallerySendItemsTask : NSObject <SCDataCoordinatorListener>
{
    NSDictionary *_cloudFiles;
    SCUserSession *_userSession;
    _Bool _shouldShowToast;
    double _startTime;
    _Bool _didSetDestinations;
    NSArray *_recipientUsernames;
    SCStoriesPostingConfiguration *_storiesPostingConfig;
    NSArray *_businessIds;
    NSArray *_mischiefs;
    NSArray *_mischiefIds;
    NSString *_additionalText;
    NSMutableArray *_unprocessedMediaGroupQueueForChat;
    NSMutableArray *_unprocessedGalleryMediaQueueForStory;
    NSMutableSet *_galleryMediaToSendAsSnap;
    NSMutableArray *_processedAndUnsentToChatMediaSendTasksQueue;
    NSMutableArray *_processedAndUnpostToStoryEphemeralClientIDsQueue;
    NSDictionary *_smartSharedMediaIds;
    NSSet *_smartSharingFailures;
    long long _videoAssetOrientation;
    id <SCGallerySnap> _longVideoSnap;
    NSMutableArray *_unprocessedVideoUrlQueue;
    NSMutableArray *_processedEphmeralsForVideoUrlQueue;
    _Bool _didShowToastOnce;
    SCGallerySendItemsCounter *_sendItemsCounter;
    NSMutableSet *_galleryMediaGroupUuidsDidCallbackForSend;
    NSMutableSet *_galleryMediasDidCallbackForPost;
    NSMutableSet *_galleryMediasDidCallbackForSendSnap;
    NSMutableDictionary *_messageIdentifierToGalleryMediaGroup;
    NSMutableDictionary *_galleryMediaToPostState;
    NSMutableDictionary *_ephemeralIdToGalleryMedia;
    NSMutableSet *_observingStoryIds;
    CDUnknownBlockType _onDidFinishSendingMessageBlock;
    _Bool _didReportEndToEndSendingMetrics;
    NSString *_endToEndSendingMetricsReportId;
    SCGallerySendItemsVideoSegmentHelper *_videoSegmentHelper;
    SCGalleryUserContext *_userContext;
    SCGallerySmartSharing *_gallerySmartSharing;
    NSString *_failureReason;
    NSMutableSet *_smartSharedSnapIds;
    _Bool _useWebP;
    double _webPQuality;
    SCLazy *_arroyoMediaMessageSender;
    SCLazy *_arroyoGroupFilterer;
    NSSet *_arroyoConversationIds;
    NSArray *_uploadableChatMediasForArroyo;
    id <SCGalleryOperaMagicMomentCaching> _magicMomentCache;
    id <SCGallerySendItemsTaskDelegate> _delegate;
    NSArray *_mediaGroups;
}

+ (id)_venueIdIfPresent:(id)arg1;
+ (void)sendableMediaGroupsWithGalleryItems:(id)arg1 gallerySnaps:(id)arg2 sendableMediaGroupsRef:(id *)arg3 createStatusRef:(long long *)arg4 userSession:(id)arg5;
+ (id)sharedPerformer;
- (void).cxx_destruct;
- (unsigned long long)_chatMessageCount;
- (void)_createEphemeralMediaWithPhotoAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createEphemeralMediaWithPhotoSnap:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createEphemeralMediaWithVideoSnap:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createEphemeralMediasWithLongVideoSnap:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createEphemeralMediasWithVideoAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createEphermalMediasForGalleryMedia:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createMediaSendTaskWithMediaGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_createMediaSendTaskWithMediaGroup:(id)arg1 uploadableChatMedias:(id)arg2;
- (id)_createSnap3DBlobUploadOperationForEphemeralMedia:(id)arg1 lensMetadata:(id)arg2;
- (id)_createUploadableChatMediaWithGalleryMedia:(id)arg1;
- (id)_createUploadableChatMediaWithGallerySnap:(id)arg1;
- (id)_createUploadableChatMediaWithPhotoAsset:(id)arg1;
- (id)_creatorAttributionFromGalleryMedia:(id)arg1;
- (id)_decorateUploadableChatMedia:(id)arg1 withGallerySnap:(id)arg2 venue:(_Bool)arg3;
- (void)_ephemeralDidPost:(id)arg1 didSucceed:(_Bool)arg2;
- (void)_ephemeralDidSendSnap:(id)arg1 didSucceed:(_Bool)arg2;
- (void)_fetchImageForPhotoSnap:(id)arg1 snapDetail:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)_fetchLocationForMedia:(id)arg1;
- (void)_fillInCounterForInitialCounts;
- (void)_galleryMediaGroupDidSend:(id)arg1 didSucceed:(_Bool)arg2 messageId:(id)arg3 failureReason:(id)arg4;
- (id)_gallerySnapDetailForGallerySnap:(id)arg1;
- (void)_galleryStoreStoryWithSnapDetail:(id)arg1 originalPhoto:(id)arg2 photoSnapOverlayFormat:(id)arg3 ephemeralMediaClientId:(id)arg4 photoSnap:(id)arg5;
- (void)_initEndToEndSendingMetrics;
- (void)_logGallerySnapSendForEphemeralMedia:(id)arg1 snapDetail:(id)arg2 clientId:(id)arg3 smartShared:(_Bool)arg4;
- (void)_logWhenStartSharing;
- (void)_mediaQualityLevelFromVideoSnap:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_monitorPostingStateChangeWithClientId:(id)arg1 postingState:(long long)arg2;
- (void)_postOneStory:(id)arg1 creationDate:(id)arg2 isFromCameraRoll:(_Bool)arg3 creatorAttribution:(id)arg4 lensAssetsUploadOperation:(id)arg5;
- (void)_prepareUploadableChatMedia:(id)arg1 withGalleryMedia:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_prepareUploadableChatMedia:(id)arg1 withGallerySnap:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_prepareUploadableChatMedia:(id)arg1 withPhotoAsset:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_prepareUploadableChatMedias:(id)arg1 withGalleryMedias:(id)arg2 index:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_processAndPostOnePendingGalleryMediaForStoryWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_processOneMessageForChatOrStory;
- (void)_processOnePendingMediaGroupForGroupChatOrAttachmentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_processPendingUrlsForVideoAssetWithCompletionHandler:(CDUnknownBlockType)arg1 userSendStartTimestamp:(double)arg2;
- (void)_reportEndToEndBlizzardEvent;
- (void)_reportEndToEndSendingMetricsIfNeeded;
- (void)_sendAdditionalText;
- (void)_sendAllMediasForArroyo;
- (void)_sendOnePendingMediaSendTask;
- (void)_showSentErrorToast:(id)arg1;
- (void)_showSentToast:(id)arg1;
- (void)_showToastIfNeeded;
- (unsigned long long)_snapSendCount;
- (unsigned long long)_storyPostCount;
- (id)_storyTitleWithMediaGroup:(id)arg1;
- (_Bool)_willPostToStories;
- (_Bool)_willSendAsNonArroyoChat;
- (_Bool)_willSendMediaAsArroyoChat;
- (_Bool)_willSendMediaAsDirectChat:(id)arg1;
- (_Bool)_willSendMediaAsGroupChat;
- (_Bool)_willSendMediaAsSnap:(id)arg1;
- (void)_willSendStoryToChat;
- (_Bool)_willSendToChat;
@property(readonly, copy, nonatomic) NSDictionary *cloudFiles; // @synthesize cloudFiles=_cloudFiles;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
@property(nonatomic) __weak id <SCGallerySendItemsTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (id)failureReasonWithPostingState:(long long)arg1;
- (void)galleryMediaDidPost:(id)arg1 didSucceed:(_Bool)arg2;
- (void)galleryMediaDidSendSnap:(id)arg1 didSucceed:(_Bool)arg2;
- (void)galleryMediaGroupDidSend:(id)arg1 didSucceed:(_Bool)arg2;
- (id)initWithSendableMediaGroups:(id)arg1 cloudFiles:(id)arg2 sendItemsCounter:(id)arg3 smartSharedMediaIds:(id)arg4 smartSharingFailures:(id)arg5 shouldShowToast:(_Bool)arg6 userContext:(id)arg7 userSession:(id)arg8 arroyoMediaMessageSender:(id)arg9 arroyoGroupFilterer:(id)arg10 magicMomentCache:(id)arg11;
@property(readonly, copy, nonatomic) NSArray *mediaGroups; // @synthesize mediaGroups=_mediaGroups;
- (void)sendSnapUsingChatV3:(id)arg1 captureDate:(id)arg2 isFromCameraRoll:(_Bool)arg3 lensAssetsUploadOperation:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)sendToRecipientUsernames:(id)arg1 storiesPostingConfig:(id)arg2 businessIds:(id)arg3 mischiefs:(id)arg4 additionalText:(id)arg5;
@property(readonly, copy, nonatomic) SCGalleryUserContext *userContext; // @synthesize userContext=_userContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

