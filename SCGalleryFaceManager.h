//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCloudSyncStatusListener-Protocol.h"

@class NSMutableSet, NSOperationQueue, NSString, SCGalleryFaceManagerListenerAnnouncer, SCQueuePerformer, SCUserSession;

@interface SCGalleryFaceManager : NSObject <SCCloudSyncStatusListener>
{
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
    NSOperationQueue *_processingQueue;
    SCGalleryFaceManagerListenerAnnouncer *_announcer;
    NSMutableSet *_mediaIdsCurrentlyProcessing;
}

+ (long long)faceVersionFromString:(id)arg1;
+ (id)faceVersionToString:(long long)arg1;
- (void).cxx_destruct;
- (void)_faceAnalyzeUnprocessedGallerySnaps;
- (void)addListener:(id)arg1;
- (id)allCurrentFeedback;
@property(retain, nonatomic) SCGalleryFaceManagerListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
- (void)clearUserFeedback;
- (void)cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(_Bool)arg3 mayUpload:(_Bool)arg4 requiresUpgrade:(_Bool)arg5;
- (void)dealloc;
- (id)faceAnalyzeGallerySnaps:(id)arg1 forceReprocess:(_Bool)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)faceAnalyzeRemainingGallerySnapsForcingReprocessing:(_Bool)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)feedbackForClusterId:(id)arg1;
- (unsigned long long)feedbackForFacesInGallerySnap:(id)arg1;
- (id)feedbackStorage;
- (void)indexGallerySnaps:(id)arg1;
- (void)indexGallerySnaps:(id)arg1 forceReprocess:(_Bool)arg2;
- (id)initWithUserSession:(id)arg1;
@property(retain, nonatomic) NSMutableSet *mediaIdsCurrentlyProcessing; // @synthesize mediaIdsCurrentlyProcessing=_mediaIdsCurrentlyProcessing;
- (void)pauseIndexing;
@property(retain, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSOperationQueue *processingQueue; // @synthesize processingQueue=_processingQueue;
- (void)removeListener:(id)arg1;
- (void)resumeIndexing;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (id)uploadRemainingFacesFoundWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)userProvidedFeedback:(unsigned long long)arg1 forClusterId:(id)arg2 totalClusters:(long long)arg3;
- (void)userProvidedFeedback:(unsigned long long)arg1 forFacesInGallerySnap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

