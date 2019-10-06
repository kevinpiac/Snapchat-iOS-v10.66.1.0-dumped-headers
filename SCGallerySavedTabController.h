//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NavigationDelegate-Protocol.h"
#import "SCGalleryCellActionMenuHelperDataSource-Protocol.h"
#import "SCGalleryCellActionMenuHelperDelegate-Protocol.h"
#import "SCGalleryCollectionViewHelperDataSource-Protocol.h"
#import "SCGalleryCollectionViewSelectionHelperDataSource-Protocol.h"
#import "SCGalleryCollectionViewSelectionHelperDelegate-Protocol.h"
#import "SCGalleryOperaPresenterDelegate-Protocol.h"
#import "SCGallerySavedTabDataSourceDelegate-Protocol.h"
#import "SCGallerySharedFolderCellDelegate-Protocol.h"
#import "SCGalleryTabController-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, SCGalleryCellActionMenuHelper, SCGalleryCollectionViewHelper, SCGalleryCollectionViewSelectionHelper, SCGalleryOperaPresenter, SCGallerySavedTabDataSource, SCGallerySharedFolderViewController, SCGalleryTabCollectionView, SCGalleryTabsConfiguration, SCUnifiedProfilePresenter, SCUserSession, UICollectionViewFlowLayout, UIView, UIViewController;
@protocol SCGalleryTabControllerDelegate, SCPageNameLogging, SCStartChatDelegate;

@interface SCGallerySavedTabController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, SCGalleryCollectionViewHelperDataSource, SCGalleryCollectionViewSelectionHelperDelegate, SCGalleryCollectionViewSelectionHelperDataSource, SCGallerySharedFolderCellDelegate, NavigationDelegate, SCGallerySavedTabDataSourceDelegate, SCGalleryOperaPresenterDelegate, SCGalleryCellActionMenuHelperDelegate, SCGalleryCellActionMenuHelperDataSource, SCGalleryTabController>
{
    SCUserSession *_userSession;
    UIViewController<SCPageNameLogging> *_containerViewController;
    SCGalleryTabsConfiguration *_configuration;
    UIView *_view;
    SCGalleryTabCollectionView *_collectionView;
    SCGalleryCollectionViewHelper *_collectionViewHelper;
    SCGalleryCollectionViewSelectionHelper *_collectionViewSelectionHelper;
    UICollectionViewFlowLayout *_layout;
    double _lastNotifiedScrollContentOffset;
    SCGallerySharedFolderViewController *_sharedFolderViewController;
    SCGallerySavedTabDataSource *_dataSource;
    _Bool _dataLoaded;
    NSString *_deferredSnapId;
    SCUnifiedProfilePresenter *_unifiedProfilePresenter;
    NSArray *_sharedFolderViewModels;
    NSArray *_allSharedEntries;
    SCGalleryOperaPresenter *_operaPresenter;
    SCGalleryCellActionMenuHelper *_actionMenuHelper;
    NSMutableArray *_scrollingAnimationCompletionBlocks;
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
- (id)_galleryItem:(id)arg1;
- (id)_galleryItems;
- (void)_handleTap:(id)arg1;
- (void)_notifyScrollContentOffsetChange;
- (void)_presentMiniProfileForPublisher:(id)arg1;
- (void)_presentProfileForFriend:(id)arg1;
- (void)_presentProfileForGroup:(id)arg1;
- (double)_sectionInsetTop;
- (struct UIEdgeInsets)_sectionInsetsWithInsets:(struct UIEdgeInsets)arg1;
- (void)_updateWithScrollContentInset;
- (id)allItems;
- (unsigned long long)allItemsCount;
- (_Bool)canPerformNavigation;
- (void)changeSelected:(_Bool)arg1 forGalleryItem:(id)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (unsigned long long)currentMediaScenePathComponent;
- (void)dealloc;
@property(nonatomic) __weak id <SCGalleryTabControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endEditing;
@property(nonatomic) _Bool focused; // @synthesize focused=_focused;
@property(nonatomic) _Bool focusedAdjacentTab; // @synthesize focusedAdjacentTab=_focusedAdjacentTab;
- (id)galleryCellActionMenuHelper:(id)arg1 transferSessionForItem:(id)arg2;
- (id)galleryCellActionMenuHelper:(id)arg1 viewModelForItem:(id)arg2;
- (void)galleryCellActionMenuHelperDidSaveFeaturedStory:(id)arg1 item:(id)arg2;
- (void)galleryCellActionMenuHelperIsSavingFeaturedStory:(id)arg1 item:(id)arg2;
- (id)galleryCellActionMenuHelperShouldUpdateSourceView:(id)arg1 item:(id)arg2 snap:(id)arg3;
- (id)galleryCollectionViewHelper:(id)arg1 itemAtIndexPath:(id)arg2;
- (_Bool)galleryCollectionViewIsFullyVisible:(id)arg1;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didChangeSelected:(_Bool)arg2 forItem:(id)arg3;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didTapItemAtIndexPath:(id)arg2;
- (id)galleryCollectionViewSelectionHelper:(id)arg1 galleryItemAtIndexPath:(id)arg2;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 handleLongPress:(id)arg2 itemAtIndexPath:(id)arg3;
- (_Bool)galleryCollectionViewSelectionHelper:(id)arg1 overrideTapHandlingAtIndexPath:(id)arg2;
- (_Bool)galleryCollectionViewSelectionHelper:(id)arg1 shouldChangeSelectedAtIndexPath:(id)arg2;
- (void)galleryViewDidDisappear;
- (void)galleryViewWillAppear;
- (id)indexPathForItem:(id)arg1 isFeatured:(_Bool)arg2;
- (id)initWithUserSession:(id)arg1 containerViewController:(id)arg2 configuration:(id)arg3 delegate:(id)arg4 tabType:(unsigned long long)arg5;
- (_Bool)isAtFarLeft;
- (_Bool)isDragging;
- (_Bool)isEditing;
- (_Bool)isPrivate;
- (_Bool)isTracking;
- (_Bool)isViewLoaded;
- (id)itemsInRect:(struct CGRect)arg1;
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
- (void)presentFarLeftVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentLeftVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentMiddleVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentOnCurrentVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentRightVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)profileTransitionCoordinator;
- (void)savedTabDataSourceDidReceiveData:(id)arg1 viewModels:(id)arg2 allEntries:(id)arg3;
- (void)scheduleToPresentSnapWithSnapId:(id)arg1;
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
- (void)setScrollContentOffset:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
- (void)sharedFolderCellDidLongPressItem:(id)arg1 index:(long long)arg2 viewModel:(id)arg3 fromView:(id)arg4 longPress:(id)arg5;
- (void)sharedFolderCellDidTapAvatarForCell:(id)arg1;
- (void)sharedFolderCellDidTapItem:(id)arg1 index:(long long)arg2 viewModel:(id)arg3 fromView:(id)arg4;
- (_Bool)shouldAlignInitialScrollContentDistanceToTopOfOtherTabControllerToThisTabController;
- (_Bool)shouldAlignInitialScrollContentDistanceToTopOfThisTabControllerToOtherTabController;
- (_Bool)shouldDisplay;
@property(readonly, nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

