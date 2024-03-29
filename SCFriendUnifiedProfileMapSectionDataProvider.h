//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapPersonLocationsListener-Protocol.h"
#import "SCMapStatusFetcherListener-Protocol.h"
#import "SCProfileLocationSharingControllerDataListener-Protocol.h"
#import "SCProfileMapCardBitmojiLoaderDelegate-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSString, SCEmbeddedMapViewLoggingSession, SCEventListenerAnnouncer, SCFriendUnifiedProfileDataSource, SCProfileLocationSharingController, SCProfileMapCardBitmojiLoader, SCProfileMapFriendCardDataProvider, SCUserSession;
@protocol NSCopying, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCFriendUnifiedProfileMapSectionDataProvider : NSObject <SCProfileLocationSharingControllerDataListener, SCMapStatusFetcherListener, SCMapPersonLocationsListener, SCProfileMapCardBitmojiLoaderDelegate, SCUpdateListener, SCSectionDataProviding>
{
    SCUserSession *_userSession;
    SCFriendUnifiedProfileDataSource *_dataSource;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCEmbeddedMapViewLoggingSession *_mapLoggingSession;
    SCProfileMapCardBitmojiLoader *_bitmojiLoader;
    SCProfileMapFriendCardDataProvider *_cardDataProvider;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
    NSObject<NSCopying> *_sectionDataModel;
    SCProfileLocationSharingController *_locationSharingController;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_configureMapCardCell:(id)arg1;
- (void)_reloadCardDataProvider;
- (void)addListener:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)initWithUserSession:(id)arg1 dataSource:(id)arg2;
@property(readonly, nonatomic) SCProfileLocationSharingController *locationSharingController; // @synthesize locationSharingController=_locationSharingController;
- (void)mapStatusFetcherDidLoadStatuses:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)personLocationsProviderDidUpdate:(id)arg1;
- (void)profileLocationSharingControllerDidUpdate:(id)arg1;
- (void)profileMapCardBitmojiLoaderDidFinishFetching:(id)arg1;
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

