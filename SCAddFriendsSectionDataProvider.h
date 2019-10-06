//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAddFriendsSnapchatterCollectionCellViewModelProvider-Protocol.h"
#import "SCAddFriendsViewModelsDecorationListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSArray, NSString, SCBehaviorSubject, SCEventListenerAnnouncer, SCLazy;
@protocol NSCopying, SCAddFriendsViewModelsDecorating, SCImageDownloading, SCLegacyItemDownloading, SCPerforming, SCSectionDataProvidingDelegate, SCSnapchatterRanking;

@interface SCAddFriendsSectionDataProvider : NSObject <SCSnapchattersDataRequestListener, SCAddFriendsViewModelsDecorationListener, SCSectionDataProviding, SCAddFriendsSnapchatterCollectionCellViewModelProvider>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataTracker;
    double _displayTimestamp;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _labelInfoFetcher;
    long long _dataLoadingStatus;
    NSArray *_containerViewModels;
    CDUnknownBlockType _viewModelGenerator;
    CDUnknownBlockType _displayFilter;
    id <SCSnapchatterRanking> _snapchatterRanker;
    id <SCAddFriendsViewModelsDecorating> _viewModelsDecorator;
    long long _placement;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
    SCBehaviorSubject *_containerCellViewModelsSubject;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_configureRecipientCollectionViewCell:(id)arg1;
- (id)_containerCellViewModelForSnapchatter:(id)arg1 index:(unsigned long long)arg2;
- (void)_promoteUnviewedAndSetSnapchatters:(id)arg1;
- (void)_rankAndSetSnapchatters:(id)arg1;
- (void)_setSnapchatters:(id)arg1;
- (void)_updateSectionDataModel;
- (void)_updateSectionDataModelWithPerformer;
- (void)addListener:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
@property(readonly) SCBehaviorSubject *containerCellViewModelsSubject; // @synthesize containerCellViewModelsSubject=_containerCellViewModelsSubject;
- (id)contentCellClassesByReuseIdentifier;
- (long long)dataLoadingStatus;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void)decorationDidBecomeAvailable;
- (void)didEndSnapchattersContactDataRequest:(id)arg1 withResult:(id)arg2;
- (void)didEndSnapchattersFetchDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersSuggestDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataTracker:(id)arg2 imageDownloader:(id)arg3 labelInfoFetcher:(id)arg4 displayTimestamp:(double)arg5 viewModelGenerator:(CDUnknownBlockType)arg6 displayFilter:(CDUnknownBlockType)arg7 snapchatterRanker:(id)arg8 viewModelsDecorator:(id)arg9 placement:(long long)arg10;
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
