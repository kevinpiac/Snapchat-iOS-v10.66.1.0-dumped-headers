//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerBaseViewModelDataProvider-Protocol.h"
#import "SCLensExplorerImagesDataStoreProtocol-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSArray, NSMutableArray, NSString, SCLensExplorerImagesDataStore, SCLensExplorerLensCellViewModelDataProviderConfiguration, SCLensExplorerLensDataStore, SCQueuePerformer, SCUpdateListenerAnnouncer;
@protocol SCLensExplorerHalfHeightLensActionHandler;

@interface SCLensExplorerLensCellViewModelDataProvider : NSObject <SCUpdateListener, SCLensExplorerBaseViewModelDataProvider, SCLensExplorerImagesDataStoreProtocol>
{
    SCLensExplorerImagesDataStore *_imagesDataStore;
    SCLensExplorerLensDataStore *_lensExplorerLensDataStore;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCQueuePerformer *_performer;
    SCLensExplorerLensCellViewModelDataProviderConfiguration *_configuration;
    NSObject<SCLensExplorerHalfHeightLensActionHandler> *_halfHeightLensActionHandler;
    NSMutableArray *_lensCellViewModels;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)_convertFromDataModel:(id)arg1;
- (id)_lensExplorerCellViewModelWithUnlockableId:(id)arg1;
- (void)_loadLensViewModel;
- (void)_updateLensViewModelsFromDataStore;
- (void)addUpdateListener:(id)arg1;
- (void)cancelOperationsForLensExplorerItem:(id)arg1;
- (void)clearMemoryCache;
- (void)dealloc;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (_Bool)hasMoreItems;
- (id)initWithLensDataStore:(id)arg1 lensExplorerImagesDataStore:(id)arg2 configuration:(id)arg3 halfHeightLensActionHandler:(id)arg4;
@property(retain, nonatomic) NSMutableArray *lensCellViewModels; // @synthesize lensCellViewModels=_lensCellViewModels;
- (id)lensExplorerAnimationForLensItem:(id)arg1 preferredSize:(struct CGSize)arg2;
- (id)lensExplorerImageForURL:(id)arg1 preferredSize:(struct CGSize)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)refreshCachedItems;
- (void)removeUpdateListener:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *viewModels;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
