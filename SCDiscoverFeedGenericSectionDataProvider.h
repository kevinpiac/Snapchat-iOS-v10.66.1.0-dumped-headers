//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSectionDataProviding-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSArray, NSString, SCEventListenerAnnouncer, SCExperimentManager, SCStreamingMediaManager, UIColor;
@protocol NSCopying, SCDiscoverFeedDataFetching, SCDiscoverFeedSnapAdsSharedInstanceStud, SCDiscoverFeedWhiteSpaceGestureCoordinating, SCImageDownloading, SCLegacyItemDownloading, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCDiscoverFeedGenericSectionDataProvider : NSObject <SCUpdateListener, SCSectionDataProviding>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSArray *_containerViewModels;
    long long _dataLoadingStatus;
    SCStreamingMediaManager *_streamingMediaManager;
    id <SCDiscoverFeedDataFetching> _discoverFeedDataFetcher;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _videoDownloader;
    SCExperimentManager *_experimentManager;
    _Bool _enablePublisherProfiles;
    NSString *_bitmojiAvatarId;
    CDUnknownFunctionPointerType _storyViewModelBuilderFunc;
    id <SCDiscoverFeedWhiteSpaceGestureCoordinating> _gestureCoordinator;
    id <SCDiscoverFeedSnapAdsSharedInstanceStud> _snapAdsSharedInstance;
    _Bool _disableLoadingSpinner;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
    UIColor *_backgroundColor;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_configureStoryCardCollectionViewCell:(id)arg1;
- (void)_performUpdateStoriesFromDataStore;
- (void)_reloadSection;
- (void)_reloadSectionWithContainerViewModels:(id)arg1;
- (void)addListener:(id)arg1;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (long long)dataLoadingStatus;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
@property(nonatomic) _Bool disableLoadingSpinner; // @synthesize disableLoadingSpinner=_disableLoadingSpinner;
- (long long)experimentalPagingMode;
- (CDUnknownBlockType)heroTileViewModelChangesComparator;
- (id)initWithDiscoverFeedDataFetcher:(id)arg1 imageDownloader:(id)arg2 videoDownloader:(id)arg3 experimentManager:(id)arg4 enablePublisherProfiles:(_Bool)arg5 bitmojiAvatarId:(id)arg6 storyViewModelBuilder:(CDUnknownFunctionPointerType)arg7 gestureCoordinator:(id)arg8 snapAdsSharedInstance:(id)arg9 streamingMediaManager:(id)arg10;
- (CDUnknownBlockType)modelCanUpdateComparator;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
- (void)setUp;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
- (void)tearDown;
- (CDUnknownBlockType)viewModelChangesComparator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

