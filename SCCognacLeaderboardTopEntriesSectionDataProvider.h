//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSectionDataProviding-Protocol.h"

@class NSString, SCCognacLeaderboardDataProvider, SCContainerCellViewModel, SCEventListenerAnnouncer;
@protocol NSCopying, SCImageDownloading, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCCognacLeaderboardTopEntriesSectionDataProvider : NSObject <SCSectionDataProviding>
{
    id <SCImageDownloading> _imageDownloader;
    SCCognacLeaderboardDataProvider *_leaderboardDataProvider;
    long long _dataLoadingStatus;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCContainerCellViewModel *_containerCellViewModel;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_getLeaderboardDataWithLeaderboard:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_isEntryRightEntry:(id)arg1;
- (id)_makeBitmojiWithEntry:(id)arg1;
- (id)_makeContainerCellViewModelWithUserId:(id)arg1 leaderboard:(id)arg2 entries:(id)arg3 podiumImage:(id)arg4;
- (id)_makePodiumEntryViewModelWithUserId:(id)arg1 leaderboard:(id)arg2 entry:(id)arg3;
- (void)_setDataLoadingStatus:(long long)arg1 containerCellViewModel:(id)arg2;
- (_Bool)_shouldShowTopEntriesWithEntries:(id)arg1 podiumImage:(id)arg2;
- (void)_updateContainerCellViewModel;
- (void)addListener:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (long long)dataLoadingStatus;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (id)initWithImageDownloader:(id)arg1 leaderboardDataProvider:(id)arg2;
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

