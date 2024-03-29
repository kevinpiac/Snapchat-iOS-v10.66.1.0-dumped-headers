//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "SCGalleryCellActionMenuHelperBoomboxDataSource-Protocol.h"
#import "SCGalleryCollectionViewHelperDataSource-Protocol.h"
#import "SCGalleryCollectionViewSelectionHelperDataSource-Protocol.h"
#import "SCGalleryCollectionViewSelectionHelperDelegate-Protocol.h"
#import "SCGalleryFeaturedStoryCellDelegate-Protocol.h"
#import "SCGalleryOperaPresenterV2Delegate-Protocol.h"
#import "SCGallerySnapCellDelegate-Protocol.h"
#import "SCGallerySnapsTabDataSourceDelegate-Protocol.h"
#import "SCGallerySnapsTabOnboardingTooltipSectionControllerDelegate-Protocol.h"
#import "SCGallerySnapsTabSnapsSectionControllerDelegate-Protocol.h"
#import "SCGallerySnapsTabSpectaclesImportSectionControllerDelegate-Protocol.h"
#import "SCGalleryTabCollectionViewFlowLayoutDelegate-Protocol.h"
#import "SCGalleryTabController-Protocol.h"
#import "SCSpectaclesStatusControllerDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IGListAdapter, NSArray, NSMutableArray, NSString, SCGalleryCellActionMenuHelper, SCGalleryCollectionViewHelper, SCGalleryCollectionViewSelectionHelper, SCGalleryOperaV2Presenter, SCGalleryPreviewController, SCGallerySendController, SCGallerySnapFeaturedStoriesSectionViewModel, SCGallerySnapsTabDataSource, SCGalleryTabCollectionView, SCGalleryTabEmptyView, SCGalleryTabsConfiguration, SCSpectaclesImportSectionViewModel, SCSpectaclesStatusController, SCUserSession, UIView, UIViewController;
@protocol SCGalleryTabControllerDelegate;

@interface SCGallerySnapsTabController : NSObject <UICollectionViewDelegateFlowLayout, SCGallerySnapsTabDataSourceDelegate, SCGalleryOperaPresenterV2Delegate, SCGallerySnapCellDelegate, SCSpectaclesStatusControllerDelegate, IGListAdapterDataSource, SCGalleryFeaturedStoryCellDelegate, SCGallerySnapsTabSpectaclesImportSectionControllerDelegate, SCGallerySnapsTabSnapsSectionControllerDelegate, SCGalleryCollectionViewSelectionHelperDataSource, SCGalleryCollectionViewSelectionHelperDelegate, SCGalleryCollectionViewHelperDataSource, SCGallerySnapsTabOnboardingTooltipSectionControllerDelegate, SCGalleryTabCollectionViewFlowLayoutDelegate, SCGalleryCellActionMenuHelperBoomboxDataSource, SCGalleryTabController>
{
    SCUserSession *_userSession;
    UIViewController *_containerViewController;
    SCGalleryTabsConfiguration *_configuration;
    UIView *_view;
    SCGalleryTabCollectionView *_collectionView;
    SCGalleryCollectionViewHelper *_collectionViewHelper;
    double _lastNotifiedScrollContentOffset;
    SCGalleryTabEmptyView *_emptyView;
    _Bool _isLoadingSnaps;
    SCGallerySnapsTabDataSource *_dataSource;
    NSArray *_momentViewModels;
    NSArray *_displayedGalleryItems;
    SCGallerySnapFeaturedStoriesSectionViewModel *_featuredStoriesSectionViewModel;
    IGListAdapter *_adapter;
    SCSpectaclesStatusController *_spectacleStatusController;
    long long _lastState;
    SCSpectaclesImportSectionViewModel *_importSectionViewModel;
    SCGalleryCellActionMenuHelper *_entryActionMenuHelper;
    SCGalleryCellActionMenuHelper *_storyActionMenuHelper;
    _Bool _dataLoaded;
    _Bool _showingOnboardingTooltip;
    NSString *_deferredSnapId;
    SCGalleryOperaV2Presenter *_operaV2Presenter;
    NSString *_presentingGroupViewModelId;
    SCGalleryPreviewController *_previewController;
    SCGallerySendController *_sendController;
    NSMutableArray *_scrollingAnimationCompletionBlocks;
    SCGalleryCollectionViewSelectionHelper *_collectionViewSelectionHelper;
    _Bool _visible;
    _Bool _focused;
    _Bool _focusedAdjacentTab;
    _Bool _loading;
    _Bool _selectMode;
    id <SCGalleryTabControllerDelegate> _delegate;
    unsigned long long _tabType;
    struct UIEdgeInsets _scrollContentInset;
}

- (void).cxx_destruct;
- (id)_buildOperaDataModelWithGroupId:(id)arg1 snaps:(id)arg2 userSession:(id)arg3;
- (id)_cellViewModelForIndexPath:(id)arg1;
- (struct UIEdgeInsets)_contentInsetsWithInsets:(struct UIEdgeInsets)arg1;
- (id)_entryActionMenuHelper;
- (id)_entryForIndexPath:(id)arg1;
- (id)_groupViewModelForSection:(long long)arg1;
- (_Bool)_isCollectionViewVisible;
- (void)_notifyScrollContentOffsetChange;
- (void)_presentPreviewForSingleSnap:(id)arg1 inEntry:(id)arg2;
- (void)_prioritizeTransferIfNeeded:(id)arg1;
- (void)_resetFoundNoNewSnaps;
- (double)_sectionInsetTop;
- (_Bool)_shouldShowSnapsTabOnboardingTooltip;
- (id)_singleSnapInFeaturedStory:(id)arg1;
- (id)_snapForIndexPath:(id)arg1;
- (id)_storyActionMenuHelper;
- (void)_updateCellsScreenPosition;
- (void)_updateSectionControllersSelectMode;
- (void)_updateSpectaclesImportSectionViewModelWithMode:(long long)arg1 device:(id)arg2 untransferredContent:(id)arg3 transferredContent:(id)arg4 transferringContent:(id)arg5;
- (void)_updateWithScrollContentInset;
- (id)allItems;
- (unsigned long long)allItemsCount;
- (void)changeSelected:(_Bool)arg1 forGalleryItem:(id)arg2;
- (void)changeSelected:(_Bool)arg1 forGallerySnapItem:(id)arg2;
- (void)changeSelected:(_Bool)arg1 forItems:(id)arg2 snapItems:(id)arg3;
- (id)collectionView;
- (unsigned long long)currentMediaScenePathComponent;
- (void)dealloc;
@property(nonatomic) __weak id <SCGalleryTabControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)endEditing;
- (void)featuredStoryCell:(id)arg1 didDismissTooltip:(id)arg2;
- (void)featuredStoryCell:(id)arg1 editStory:(id)arg2;
- (void)featuredStoryCell:(id)arg1 presentActionMenu:(id)arg2;
- (void)featuredStoryCell:(id)arg1 saveStory:(id)arg2;
- (void)featuredStoryCell:(id)arg1 sendStory:(id)arg2;
- (_Bool)flowLayout:(id)arg1 sectionShouldDisplayOverlay:(long long)arg2;
@property(nonatomic) _Bool focused; // @synthesize focused=_focused;
@property(nonatomic) _Bool focusedAdjacentTab; // @synthesize focusedAdjacentTab=_focusedAdjacentTab;
- (void)galleryCellActionMenuHelper:(id)arg1 fetchSnapsForItem:(id)arg2 sourceSnap:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)galleryCollectionViewHelper:(id)arg1 itemAtIndexPath:(id)arg2;
- (_Bool)galleryCollectionViewIsFullyVisible:(id)arg1;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didChangeSelected:(_Bool)arg2 forItem:(id)arg3;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didChangeSelected:(_Bool)arg2 forItems:(id)arg3 snapItems:(id)arg4;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didChangeSelected:(_Bool)arg2 forSnapItem:(id)arg3;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didTapItemAtIndexPath:(id)arg2;
- (id)galleryCollectionViewSelectionHelper:(id)arg1 galleryItemAtIndexPath:(id)arg2;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 handleLongPress:(id)arg2 itemAtIndexPath:(id)arg3;
- (_Bool)galleryCollectionViewSelectionHelper:(id)arg1 overrideTapHandlingAtIndexPath:(id)arg2;
- (_Bool)galleryCollectionViewSelectionHelper:(id)arg1 shouldChangeSelectedAtIndexPath:(id)arg2;
- (id)galleryCollectionViewSelectionHelper:(id)arg1 snapsForEntry:(id)arg2;
- (void)galleryCollectionViewSelectionHelperRequestSelectMode:(id)arg1;
- (void)gallerySnapCell:(id)arg1 shouldDeselectForViewModel:(id)arg2;
- (void)galleryViewDidDisappear;
- (void)galleryViewWillAppear;
- (id)indexPathForItem:(id)arg1 isFeatured:(_Bool)arg2;
- (id)initWithUserSession:(id)arg1 containerViewController:(id)arg2 configuration:(id)arg3 delegate:(id)arg4 tabType:(unsigned long long)arg5;
- (_Bool)isDragging;
- (_Bool)isEditing;
- (_Bool)isPrivate;
- (_Bool)isTracking;
- (_Bool)isViewLoaded;
- (id)itemsInRect:(struct CGRect)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (void)loadViewIfNeeded;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
- (id)objectsForListAdapter:(id)arg1;
- (void)operaPresenterDidDismiss:(id)arg1 item:(id)arg2;
- (id)operaPresenterV2:(id)arg1 didOpenViewWithSnap:(id)arg2;
- (void)operaPresenterV2:(id)arg1 willOpenViewWithSnap:(id)arg2;
- (void)operaPresenterV2DidDismiss:(id)arg1;
- (void)operaPresenterV2DidPresent:(id)arg1;
- (id)pageName;
- (_Bool)prefersAllItemsAreNotIterated;
- (double)scrollBarTopOffset;
@property(readonly, nonatomic) double scrollContentDistanceToTop;
@property(nonatomic) struct UIEdgeInsets scrollContentInset; // @synthesize scrollContentInset=_scrollContentInset;
@property(nonatomic) double scrollContentOffset;
- (void)scrollToGalleryItem:(id)arg1 animated:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(nonatomic) _Bool selectMode; // @synthesize selectMode=_selectMode;
- (id)selectedGalleryItems;
- (id)selectedSnapItems;
- (void)setScrollContentOffset:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
- (_Bool)shouldAlignInitialScrollContentDistanceToTopOfOtherTabControllerToThisTabController;
- (_Bool)shouldAlignInitialScrollContentDistanceToTopOfThisTabControllerToOtherTabController;
- (void)shouldDismissSnapsTabOnboardingTooltip;
- (_Bool)shouldDisplay;
- (void)spectaclesImportSectionControllerShouldHandleAddHomeWifiAction:(id)arg1;
- (void)spectaclesImportSectionControllerShouldHandleImportFirstTimeAlert:(id)arg1;
- (void)spectaclesStatusController:(id)arg1 didUpdateDeviceStatus:(id)arg2 device:(id)arg3 untransferredContent:(id)arg4 transferredContent:(id)arg5 transferringContent:(id)arg6;
@property(readonly, nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
- (void)updateFeaturedStoriesViewModel:(id)arg1;
- (void)updateGroups:(id)arg1;
- (void)updateIsLoadingSnaps:(_Bool)arg1;
- (void)updateMomentViewModels:(id)arg1;
- (void)updateWithData:(id)arg1;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

