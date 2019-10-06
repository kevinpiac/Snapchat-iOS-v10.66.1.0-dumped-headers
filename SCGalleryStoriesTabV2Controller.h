//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryCellActionMenuHelperDataSource-Protocol.h"
#import "SCGalleryCellActionMenuHelperDelegate-Protocol.h"
#import "SCGalleryCollectionViewHelperDataSource-Protocol.h"
#import "SCGalleryCollectionViewSelectionHelperDataSource-Protocol.h"
#import "SCGalleryCollectionViewSelectionHelperDelegate-Protocol.h"
#import "SCGalleryEntryViewCellDelegate-Protocol.h"
#import "SCGalleryLagunaTabHeaderViewDelegate-Protocol.h"
#import "SCGalleryOperaPresenterDelegate-Protocol.h"
#import "SCGalleryStoriesTabDataSourceDelegate-Protocol.h"
#import "SCGalleryStoryCellDelegate-Protocol.h"
#import "SCGalleryTabController-Protocol.h"
#import "SCLagunaAppStatusListener-Protocol.h"
#import "SCLagunaHomeWifiManagerEventListener-Protocol.h"
#import "SCSpectaclesEventListener-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, SCGalleryCellActionMenuHelper, SCGalleryCollectionViewHelper, SCGalleryCollectionViewSelectionHelper, SCGalleryLagunaTabHeaderView, SCGalleryOperaPresenter, SCGalleryStoriesTabDataSource, SCGalleryTabCollectionView, SCGalleryTabsConfiguration, SCLagunaAppStatusCoordinator, SCQueuePerformer, SCSpectaclesDevice, SCSpectaclesTransferSession, SCUserSession, UITextField, UIView, UIViewController;
@protocol SCGalleryTabControllerDelegate, SCStartChatDelegate;

@interface SCGalleryStoriesTabV2Controller : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, SCGalleryCollectionViewHelperDataSource, SCGalleryStoryCellDelegate, SCGalleryOperaPresenterDelegate, SCGalleryCollectionViewSelectionHelperDataSource, SCGalleryCollectionViewSelectionHelperDelegate, SCLagunaAppStatusListener, SCSpectaclesEventListener, SCGalleryCellActionMenuHelperDelegate, SCGalleryCellActionMenuHelperDataSource, SCGalleryEntryViewCellDelegate, SCGalleryLagunaTabHeaderViewDelegate, SCLagunaHomeWifiManagerEventListener, SCGalleryStoriesTabDataSourceDelegate, SCGalleryTabController>
{
    SCUserSession *_userSession;
    UIViewController *_containerViewController;
    SCGalleryTabsConfiguration *_configuration;
    UIView *_view;
    SCGalleryTabCollectionView *_collectionView;
    SCGalleryCollectionViewHelper *_collectionViewHelper;
    SCGalleryCollectionViewSelectionHelper *_collectionViewSelectionHelper;
    SCGalleryStoriesTabDataSource *_dataSource;
    NSMutableArray *_scrollingAnimationCompletionBlocks;
    double _lastNotifiedScrollContentOffset;
    SCGalleryOperaPresenter *_operaPresenter;
    SCGalleryCellActionMenuHelper *_actionMenuHelper;
    SCGalleryCellActionMenuHelper *_snapActionMenuHelper;
    SCLagunaAppStatusCoordinator *_lagunaAppStatusCoordinator;
    UITextField *_editingTextField;
    long long _lastState;
    SCSpectaclesTransferSession *_lastTransferSession;
    _Bool _noNewSnaps;
    SCGalleryLagunaTabHeaderView *_headerView;
    NSSet *_latestTransferredContentIds;
    NSMutableDictionary *_justTransferredContentIds;
    NSMutableSet *_seenTransferredContent;
    NSMutableSet *_entriesWithTransferStates;
    NSDate *_lastCloudUploadTimeForNotificationShown;
    unsigned long long _untransferredHdSnapCount;
    unsigned long long _transferringHdSnapCount;
    unsigned long long _transferredHdSnapCount;
    unsigned long long _previousSessionTransferCount;
    SCSpectaclesDevice *_previousHdDevice;
    double _memoriesStoriesTabStartLoadingTime;
    SCQueuePerformer *_performer;
    NSArray *_storyViewModels;
    _Bool _visible;
    _Bool _focused;
    _Bool _focusedAdjacentTab;
    _Bool _loading;
    _Bool _selectMode;
    id <SCGalleryTabControllerDelegate> _delegate;
    unsigned long long _tabType;
    id <SCStartChatDelegate> _startChatDelegate;
    struct UIEdgeInsets _scrollContentInset;
}

- (void).cxx_destruct;
- (void)_animateHeader;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (Class)_cellClassForViewModel:(id)arg1;
- (struct UIEdgeInsets)_contentInsetsWithInsets:(struct UIEdgeInsets)arg1;
- (long long)_currentHeaderViewMode;
- (void)_displayHdOnlyAlertView;
- (void)_expandTransferredEntries;
- (id)_galleryItem:(id)arg1;
- (id)_galleryItems;
- (id)_getOkNoOpButton;
- (void)_handleLongPress:(id)arg1 cell:(id)arg2 viewModel:(id)arg3;
- (void)_handleTap:(id)arg1;
- (_Bool)_hasHdContentToDownload;
- (id)_indexPathsFromIndexSet:(id)arg1;
- (_Bool)_isCurrentlyTransferringForEntry:(id)arg1;
- (_Bool)_isCurrentlyTransferringLastSnapForStory;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_lagunaCellForEntryId:(id)arg1;
- (id)_lagunaDeviceForHDSelect;
- (id)_lagunaStoryCellForIndexPath:(id)arg1;
- (void)_markHomeWifiTransferredContentAsSynced:(_Bool)arg1;
- (void)_notifyScrollContentOffsetChange;
- (void)_removeSeenContentFromJustTransferredContent;
- (void)_resetAllCellTransferSessions;
- (void)_resetFoundNoNewSnaps;
- (void)_selectSnap:(id)arg1 forStoryCell:(id)arg2 viewModel:(id)arg3;
- (void)_setCurrentContentAsSeen;
- (void)_showAlertForPendingSnaps;
- (void)_toggleExpand:(id)arg1 cell:(id)arg2;
- (void)_updateAllVisibleTransferSessionCells;
- (void)_updateCurrentlyTransferringCell;
- (void)_updateEntryWithContentId:(id)arg1;
- (void)_updateGetHDBar;
- (void)_updateGetHDBar:(_Bool)arg1;
- (void)_updateJustTransferredContentForViewModel:(id)arg1 cell:(id)arg2;
- (void)_updateTransferSessionForViewModel:(id)arg1 cell:(id)arg2;
- (void)_updateTransferringHDSnapsCount;
- (void)_updateVisibleTransferSessionCellForViewModel:(id)arg1;
- (void)_updateWithScrollContentInset;
- (id)allItems;
- (unsigned long long)allItemsCount;
- (void)changeSelected:(_Bool)arg1 forGalleryItem:(id)arg2;
- (void)changeSelected:(_Bool)arg1 forGallerySnapItem:(id)arg2;
- (void)changeSelected:(_Bool)arg1 forItems:(id)arg2 snapItems:(id)arg3;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (unsigned long long)currentMediaScenePathComponent;
@property(nonatomic) __weak id <SCGalleryTabControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endEditing;
@property(nonatomic) _Bool focused; // @synthesize focused=_focused;
@property(nonatomic) _Bool focusedAdjacentTab; // @synthesize focusedAdjacentTab=_focusedAdjacentTab;
- (id)galleryCellActionMenuHelper:(id)arg1 transferSessionForItem:(id)arg2;
- (id)galleryCellActionMenuHelper:(id)arg1 viewModelForItem:(id)arg2;
- (void)galleryCellActionMenuHelperDidSaveFeaturedStory:(id)arg1 item:(id)arg2;
- (void)galleryCellActionMenuHelperDidTriggerAddToStory:(id)arg1 item:(id)arg2;
- (void)galleryCellActionMenuHelperIsSavingFeaturedStory:(id)arg1 item:(id)arg2;
- (id)galleryCellActionMenuHelperShouldUpdateSourceView:(id)arg1 item:(id)arg2 snap:(id)arg3;
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
- (void)galleryEntryViewCell:(id)arg1 shouldDeselectForEntry:(id)arg2;
- (void)galleryViewDidDisappear;
- (void)galleryViewWillAppear;
- (void)headerView:(id)arg1 didTapImport:(id)arg2;
- (void)headerViewDidTapAddHomeWifi:(id)arg1;
- (void)headerViewDidTapCancelWifi:(id)arg1;
- (id)indexPathForItem:(id)arg1 isFeatured:(_Bool)arg2;
- (id)initWithUserSession:(id)arg1 containerViewController:(id)arg2 configuration:(id)arg3 delegate:(id)arg4 tabType:(unsigned long long)arg5;
- (_Bool)isDragging;
- (_Bool)isEditing;
- (_Bool)isPrivate;
- (_Bool)isTracking;
- (_Bool)isViewLoaded;
- (id)itemsInRect:(struct CGRect)arg1;
- (void)lagunaOnShareWifiCredentialsUpdate:(unsigned long long)arg1 device:(id)arg2 wifiSsid:(id)arg3;
- (void)loadViewIfNeeded;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
- (id)operaPresenter:(id)arg1 didOpenViewWithItem:(id)arg2;
- (id)operaPresenter:(id)arg1 didOpenViewWithSnap:(id)arg2;
- (void)operaPresenter:(id)arg1 didSwitchToNewCreatedItem:(id)arg2;
- (long long)operaPresenter:(id)arg1 overrideTransitionModeForItem:(id)arg2;
- (void)operaPresenterBeganDismiss:(id)arg1;
- (void)operaPresenterCancelledDismiss:(id)arg1;
- (void)operaPresenterDidDismiss:(id)arg1 item:(id)arg2;
- (void)operaPresenterDidPresent:(id)arg1;
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
- (void)setExcludedItemIdentifier:(id)arg1;
- (void)setScrollContentOffset:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
- (_Bool)shouldAlignInitialScrollContentDistanceToTopOfOtherTabControllerToThisTabController;
- (_Bool)shouldAlignInitialScrollContentDistanceToTopOfThisTabControllerToOtherTabController;
- (_Bool)shouldDisplay;
- (void)spectaclesDevice:(id)arg1 didReceiveLastCloudUploadTime:(id)arg2;
- (void)spectaclesDeviceDidUpdateContentList:(id)arg1;
- (void)spectaclesDeviceDidUpdateState:(id)arg1;
- (void)statusCoordinator:(id)arg1 needsToUpdateStateForDevice:(id)arg2;
- (void)statusCoordinatorBluetoothTurnedOff:(id)arg1;
- (void)statusCoordinatorBluetoothTurnedOn:(id)arg1;
- (void)statusCoordinatorNeedsToPair:(id)arg1;
- (void)statusCoordinatorNumberOfDevicesUpdated:(id)arg1;
- (void)statusCoordinatorPressedLearnMoreForBluetoothOverloadError:(id)arg1;
- (void)storiesTabDataSourceDidReceiveData:(id)arg1 viewModels:(id)arg2;
- (void)storyCell:(id)arg1 didBeginEditing:(id)arg2;
- (void)storyCell:(id)arg1 didLongPress:(id)arg2 snap:(id)arg3 viewModel:(id)arg4 fromView:(id)arg5;
- (void)storyCell:(id)arg1 didSelectSnap:(id)arg2 viewModel:(id)arg3 snapCell:(id)arg4 fromView:(id)arg5;
- (void)storyCell:(id)arg1 didTapActionButton:(id)arg2;
- (void)storyCell:(id)arg1 didTapShowAll:(id)arg2 reload:(_Bool)arg3;
- (void)storyCell:(id)arg1 didTapStory:(id)arg2;
- (void)storyCell:(id)arg1 expandCell:(id)arg2;
- (void)storyCell:(id)arg1 handleLongPress:(id)arg2 viewModel:(id)arg3;
- (_Bool)storyCellIsCollectionViewFullyVisible:(id)arg1;
- (_Bool)storyCellIsTabFocused:(id)arg1;
@property(readonly, nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

