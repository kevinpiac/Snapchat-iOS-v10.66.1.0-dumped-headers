//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EphemeralMediaDelegate-Protocol.h"
#import "SCCustomStoriesUpdateListener-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"
#import "SCStoriesModelUpdateListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedProfileStoriesDataSource-Protocol.h"

@class NSArray, NSString, SCMyStories, SCNetworkImage, SCQueuePerformer, SCUnifiedProfileMyStoriesDataModel, SCUpdateListenerAnnouncer, SCUserSession;

@interface SCUnifiedProfileMyStoriesDataSource : NSObject <SCStoriesModelUpdateListener, EphemeralMediaDelegate, SCTraceEnabled, SCDataCoordinatorListener, SCCustomStoriesUpdateListener, SCUnifiedProfileStoriesDataSource>
{
    SCUserSession *_userSession;
    NSString *_storyIdentifier;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCQueuePerformer *_dataModelUpdatePerformer;
    SCMyStories *_myStories;
    SCUnifiedProfileMyStoriesDataModel *_storyHeaderDataModel;
    SCNetworkImage *_storyHeaderLargeThumbnail;
    SCNetworkImage *_storyHeaderThumbnail;
    NSArray *_storyCollectionDataModels;
    _Bool _canAutoSaveForGroupPublication;
    long long _autosaveStoryToggleStatusForGroupPublication;
    long long _profileType;
    long long _storyType;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_dispatchAnnounceUpdate:(id)arg1;
- (void)_dispatchStoryThumbnailNetworkImageUpdate;
- (void)_fetchAndUpdateAutosaveStoryToggleStatus;
- (void)_fetchAndUpdateMyStories;
- (void)_performAndWaitOnDataSourceQueueIfNeeded:(CDUnknownBlockType)arg1;
- (void)_performSetStoryHeaderThumbnail:(id)arg1 storyHeaderLargeThumbnail:(id)arg2;
- (void)_performUpdateStoryDataModelsWithStoryMediaIds:(id)arg1 newStoryCollectionDataModels:(id)arg2 newStoryHeaderDataModel:(id)arg3;
- (void)_setCanAutosaveForGroupPublication:(_Bool)arg1;
- (void)_setMyStories:(id)arg1;
- (void)_setStoryHeaderThumbnail:(id)arg1 storyHeaderLargeThumbnail:(id)arg2;
- (void)_updateMyStories;
- (void)_updateStoryDataModelsWithStoryMediaIds:(id)arg1 newStoryCollectionDataModels:(id)arg2 newStoryHeaderDataModel:(id)arg3;
- (void)addUpdateListener:(id)arg1;
- (long long)autosaveStoryStatus;
- (_Bool)canDeleteStory;
- (_Bool)canSaveStory;
- (_Bool)canStoryAutosave;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)didUpdateCustomStoriesWithPublicationIds:(id)arg1;
- (void)ephemeralMediaSendDidFailForMedia:(id)arg1;
- (void)ephemeralMediaSendDidSucceedForMedia:(id)arg1 snapIdsAndTimestamps:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)ephemeralMediaUploadDidFailForMedia:(id)arg1;
- (void)ephemeralMediaUploadDidStartForMedia:(id)arg1;
- (void)ephemeralMediaUploadDidSucceedForMedia:(id)arg1;
- (id)initWithUserSession:(id)arg1 type:(long long)arg2 profileType:(long long)arg3 storyIdentifier:(id)arg4;
- (id)myStories;
- (void)removeUpdateListener:(id)arg1;
- (void)storiesModelDidUpdateWithParams:(id)arg1;
- (id)storyCollectionDataModels;
- (id)storyDisplayName;
- (id)storyHeaderDataModel;
- (id)storyHeaderLargeThumbnail;
- (id)storyHeaderThumbnail;
- (id)storySectionIdentifier;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
- (void)tearDown;
- (void)updateAutosaveStoryToggleStatus:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

