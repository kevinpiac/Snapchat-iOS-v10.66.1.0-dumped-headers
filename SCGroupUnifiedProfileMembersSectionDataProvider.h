//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCGroupUnifiedProfileDataSource, SCLazy, SCUserSession;
@protocol NSCopying, SCImageDownloading, SCLegacyItemDownloading, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCGroupUnifiedProfileMembersSectionDataProvider : NSObject <SCUpdateListener, SCSectionDataProviding, SCDataCoordinatorListener>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCGroupUnifiedProfileDataSource *_dataSource;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _labelInfoFetcher;
    SCUserSession *_userSession;
    SCLazy *_pinnedConversationsDataCoordinator;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
    NSObject<NSCopying> *_sectionDataModel;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_configureGroupMembersCollectionViewCell:(id)arg1;
- (void)_configureMembersSectionCollectionViewCell:(id)arg1;
- (id)_containerCellViewModelForIndexPath:(id)arg1;
- (void)addListener:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)initWithDataSource:(id)arg1 imageDownloader:(id)arg2 labelInfoFetcher:(id)arg3 userSession:(id)arg4 pinnedConversationsDataCoordinator:(id)arg5;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

