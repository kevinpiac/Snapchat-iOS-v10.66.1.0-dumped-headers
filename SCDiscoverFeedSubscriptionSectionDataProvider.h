//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCDiscoverFeedSectionCollapseCoordinatingDelegate-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSArray, NSString, SCDiscoverFeedDataStore, SCDiscoverFeedSectionHeaderViewModel, SCDiscoverFeedSectionViewAllButtonStates, SCEventListenerAnnouncer, SCUserSession;
@protocol NSCopying, SCDiscoverFeedSectionCollapseCoordinating, SCDiscoverFeedSnapAdsSharedInstanceStud, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCDiscoverFeedSubscriptionSectionDataProvider : NSObject <SCUpdateListener, SCDataCoordinatorListener, SCSectionDataProviding, SCDiscoverFeedSectionCollapseCoordinatingDelegate>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSArray *_containerViewModels;
    SCUserSession *_userSession;
    long long _dataLoadingStatus;
    SCDiscoverFeedDataStore *_storiesDataStore;
    long long _layoutType;
    SCDiscoverFeedSectionViewAllButtonStates *_sectionViewAllButtonStates;
    id <SCDiscoverFeedSectionCollapseCoordinating> _collapseCoordinator;
    SCDiscoverFeedSectionHeaderViewModel *_headerViewModel;
    id <SCDiscoverFeedSnapAdsSharedInstanceStud> _snapAdsSharedInstance;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_configureStoryCardCollectionViewCell:(id)arg1;
- (id)_defaultHeaderViewModel;
- (void)_performUpdateStoriesFromDataStore;
- (void)_prefetchThumbnailsIfNeededForViewModels:(id)arg1;
- (void)_reloadSection;
- (void)_reloadSectionWithContainerViewModels:(id)arg1;
- (void)_reloadSectionWithTweaks;
- (void)addListener:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (long long)dataLoadingStatus;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)initWithUserSession:(id)arg1 storiesDataStore:(id)arg2 layoutType:(long long)arg3 sectionViewAllButtonStates:(id)arg4 collapseCoordinator:(id)arg5 snapAdsSharedInstance:(id)arg6;
- (CDUnknownBlockType)modelCanUpdateComparator;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (void)removeListener:(id)arg1;
- (void)sectionCollapseCoordinatorDidUpdate:(id)arg1;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
- (void)setUp;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
- (id)supplementaryViewModels;
- (void)tearDown;
- (CDUnknownBlockType)viewModelChangesComparator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

