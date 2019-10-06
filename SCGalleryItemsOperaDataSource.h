//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryOperaSnapResolving-Protocol.h"
#import "SCGallerySingleItemOperaDataSourceDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SCGalleryOperaConfiguration, SCGalleryOperaMediaManager, SCOperaPerformanceTrackingPlugin, SCUserSession;
@protocol SCGalleryItemsOperaDataSourceDelegate, SCGalleryOperaMagicMomentCaching, SCOperaViewModelConnectionsCallbackController;

@interface SCGalleryItemsOperaDataSource : NSObject <SCGallerySingleItemOperaDataSourceDelegate, SCGalleryOperaSnapResolving>
{
    SCGalleryOperaConfiguration *_configuration;
    SCUserSession *_userSession;
    NSMutableDictionary *_itemIdToDataSource;
    NSString *_currentItemId;
    NSString *_currentBrowsePageId;
    NSMutableArray *_items;
    NSMutableDictionary *_itemIdToGalleryItem;
    NSDictionary *_itemIdToInitialPresentSnapIdMap;
    NSObject<SCGalleryOperaMagicMomentCaching> *_magicMomentCache;
    id <SCGalleryItemsOperaDataSourceDelegate> _delegate;
    SCGalleryOperaMediaManager *_galleryOperaMediaManager;
    id <SCOperaViewModelConnectionsCallbackController> _viewModelConnectionsCallbackController;
    SCOperaPerformanceTrackingPlugin *_operaPerformanceTracker;
}

- (void).cxx_destruct;
- (void)_buildDataSourceIfNecessaryForGalleryItem:(id)arg1;
- (id)_buildItemIdToGalleryItemMapFromItems:(id)arg1;
- (_Bool)_isValidPageContext:(id)arg1;
- (id)_pageId:(id)arg1;
- (_Bool)_shouldUpdatePlaylistToItems:(id)arg1 currentItemIndex:(long long)arg2;
- (id)_singleDataSourceIdForOperaPage:(id)arg1;
- (void)_updateItemsWithItems:(id)arg1 currentItemIndex:(long long)arg2;
- (void)_updateViewModels;
- (void)attachPresentAnimationFrame:(id)arg1;
- (void)buildRootViewModels;
- (id)currentViewItem;
- (id)currentViewModel;
- (id)currentViewSnap;
@property(nonatomic) __weak id <SCGalleryItemsOperaDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailToDisplayAtPage:(id)arg1 error:(id)arg2;
@property(readonly, nonatomic) SCGalleryOperaMediaManager *galleryOperaMediaManager; // @synthesize galleryOperaMediaManager=_galleryOperaMediaManager;
- (void)handleMoveToNextEventAtPage:(id)arg1 didTapToNext:(_Bool)arg2;
- (id)initWithItems:(id)arg1 currentItemIndex:(long long)arg2 initialSnapId:(id)arg3 configuration:(id)arg4 userSession:(id)arg5;
- (id)initialPresentSnapIdForSingleDataSource:(id)arg1;
- (_Bool)isFirstItemInPlaylist:(id)arg1;
@property(readonly, nonatomic) NSObject<SCGalleryOperaMagicMomentCaching> *magicMomentCache; // @synthesize magicMomentCache=_magicMomentCache;
- (id)magicMomentUpdatedSnaps;
@property(nonatomic) __weak SCOperaPerformanceTrackingPlugin *operaPerformanceTracker; // @synthesize operaPerformanceTracker=_operaPerformanceTracker;
- (void)prepareToViewPage:(id)arg1;
- (void)removeMediaAtPage:(id)arg1;
- (void)requestCallbackWhenViewModelConnectionIsStable:(CDUnknownBlockType)arg1;
- (id)resolveGalleryItemAtPage:(id)arg1;
- (id)resolveGalleryOperaSnapAtPage:(id)arg1;
- (id)resolveGallerySnapAtPage:(id)arg1;
@property(nonatomic) __weak id <SCOperaViewModelConnectionsCallbackController> viewModelConnectionsCallbackController; // @synthesize viewModelConnectionsCallbackController=_viewModelConnectionsCallbackController;
- (_Bool)shouldDeferLoadNeighborBasedOnRootViewModel;
- (void)singleDataSource:(id)arg1 didChangeContentWithinGalleryItem:(id)arg2 hasSnapsToPresent:(_Bool)arg3;
- (void)singleDataSource:(id)arg1 didSwitchToNewGalleryItem:(id)arg2;
- (void)singleDataSource:(id)arg1 reportFailToPreparePageWithPageId:(id)arg2 layerType:(unsigned long long)arg3 error:(id)arg4;
- (void)singleDataSource:(id)arg1 willRemoveCurrentSnap:(id)arg2;
- (void)startToBrowsePage:(id)arg1;
- (void)updateMagicMomentFrameTime:(id)arg1 forPage:(id)arg2;
- (void)updatePlaylistWithItems:(id)arg1 currentItemIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
