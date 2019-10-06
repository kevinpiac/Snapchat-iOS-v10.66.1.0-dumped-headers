//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSectionDataProviding-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSArray, NSDictionary, NSOperationQueue, NSString, SCDisposableObserverLifecycle, SCEventListenerAnnouncer, SCLazy, SCSelectionTracker;
@protocol NSCopying, SCImageDownloading, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCSnapchatterSelectionSectionDataProvider : NSObject <SCSnapchattersDataRequestListener, SCSectionDataProviding>
{
    SCLazy *_snapchatterSectionDataSource;
    SCLazy *_snapchattersDataTracker;
    SCSelectionTracker *_selectionTracker;
    id <SCImageDownloading> _imageDownloader;
    CDUnknownBlockType _viewModelGenerator;
    NSString *_cellReuseIdentifier;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCDisposableObserverLifecycle *_subscription;
    NSOperationQueue *_observationQueue;
    long long _dataLoadingStatus;
    NSArray *_containerViewModels;
    NSDictionary *_selectionIdentifierToIndexMap;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_configureRecipientCollectionViewCell:(id)arg1;
- (id)_containerCellViewModelForSnapchatter:(id)arg1 index:(unsigned long long)arg2 isSelected:(_Bool)arg3 count:(unsigned long long)arg4;
- (void)_setItemToSelectionStateMap:(struct NSDictionary *)arg1;
- (void)_setSnapchatters:(id)arg1;
- (void)_updateSectionDataModel;
- (void)addListener:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (long long)dataLoadingStatus;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void)didEndSnapchattersFetchDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)initWithSnapchatterSectionDataSource:(id)arg1 snapchattersDataTracker:(id)arg2 selectionTracker:(id)arg3 imageDownloader:(id)arg4 viewModelGenerator:(CDUnknownBlockType)arg5;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
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

