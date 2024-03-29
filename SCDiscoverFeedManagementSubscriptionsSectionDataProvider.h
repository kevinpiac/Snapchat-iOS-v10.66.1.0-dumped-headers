//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SCCreatorSettingsDataFetcher, SCCreatorSettingsDataTracker, SCDiscoverFeedManagementFullScreenViewDataCoordinator, SCEventListenerAnnouncer, SCUserSession;
@protocol NSCopying, SCImageDownloading, SCPerforming, SCSectionDataProvidingDelegate, SCSnapchattersDataFetching;

@interface SCDiscoverFeedManagementSubscriptionsSectionDataProvider : NSObject <SCDataCoordinatorListener, SCEventListener, SCSectionDataProviding>
{
    NSArray *_containerCellViewModels;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCCreatorSettingsDataFetcher *_creatorSettingsFetcher;
    SCCreatorSettingsDataTracker *_creatorSettingsTracker;
    SCDiscoverFeedManagementFullScreenViewDataCoordinator *_discoverFeedManagementFullScreenDataCoordinator;
    id <SCSnapchattersDataFetching> _snapchattersDataFetching;
    SCUserSession *_userSession;
    id <SCImageDownloading> _imageDownloader;
    _Bool _isEditing;
    unsigned long long _isSnapchattersMetadataFetchingStatus;
    unsigned long long _isPublishersMetadataFetchingStatus;
    NSArray *_snapchattersMetadata;
    NSDictionary *_snapchatterBusinessProfiles;
    NSArray *_publishersMetadata;
    NSMutableDictionary *_creatorSettings;
    CDUnknownBlockType _filterBlock;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_configureSubscriptionCellForReuse:(id)arg1;
- (void)_fetchAndUpdateViewModels;
- (void)_fetchPublishersMetadata:(id)arg1;
- (void)_fetchSnapchattersBusinessProfile:(id)arg1;
- (void)_fetchSnapchattersMetadata:(id)arg1;
- (void)_updateContainerCellViewModels:(id)arg1;
- (void)_updatePublishersMetadata:(id)arg1;
- (void)_updateSnapchattersMetadata:(id)arg1 businessProfiles:(id)arg2;
- (void)_updateViewModels;
- (void)addListener:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithDiscoverFeedManagementFullScreenDataCoordinator:(id)arg1 snapchattersDataFetcher:(id)arg2 userSession:(id)arg3 imageDownloader:(id)arg4;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)reloadDataWithFilterBlock:(CDUnknownBlockType)arg1;
- (void)removeListener:(id)arg1;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
- (void)setUp;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
- (void)tearDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

