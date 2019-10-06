//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCHovaOverscrollControllerDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCSearchCardsIntentHandlerDelegate-Protocol.h"
#import "SCSearchContentViewControlling-Protocol.h"
#import "SCSearchInAppNotificationHandling-Protocol.h"
#import "SCSearchModalPresenting-Protocol.h"
#import "SCSearchQueryResultControllerDelegate-Protocol.h"
#import "SCSearchTransitioning-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSDate, NSString, SCEventListenerAnnouncer, SCHovaOverscrollController, SCSearchContentViewControllerContext, SCSearchNetworkLogger, SCSearchQuery, SCSearchQueryResultController, SCSearchSession, UIButton, UICollectionView, UIView;
@protocol SCSearchIntentHandler, SCSearchQueryCoordinating, SCSearchResultsViewControllerDelegate, SCSearchSectionCreating, SCSearchViewControllerTransitioning;

@interface SCSearchResultsViewController : UIViewController <SCEventListener, UICollectionViewDelegate, SCTraceEnabled, SCSearchCardsIntentHandlerDelegate, SCSearchQueryResultControllerDelegate, SCHovaOverscrollControllerDelegate, SCSearchContentViewControlling, SCEventAnnouncing, SCSearchInAppNotificationHandling, SCSearchTransitioning, SCSearchModalPresenting, SCPageNameLogging>
{
    SCSearchSession *_searchSession;
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSString *_captureToken;
    id <SCSearchIntentHandler> _intentHandler;
    id <SCSearchQueryCoordinating> _queryCoordinator;
    id <SCSearchSectionCreating> _sectionCreator;
    SCSearchQuery *_initialQuery;
    SCSearchQuery *_postViewAppearQuery;
    long long _queryId;
    NSString *_queryDebugId;
    _Bool _scrolled;
    _Bool _shouldReloadFreshData;
    NSDate *_lastLoadingStartTime;
    _Bool _isPullingToDismiss;
    _Bool _isFirstViewDidAppearAfterLoad;
    SCSearchQueryResultController *_queryResultController;
    SCHovaOverscrollController *_overscrollController;
    SCSearchNetworkLogger *_networkLogger;
    _Bool _didTapCloseButton;
    _Bool _isFromPullToSearch;
    _Bool _shouldHandleOverscroll;
    SCSearchContentViewControllerContext *_searchContentViewControllerContext;
    id <SCSearchResultsViewControllerDelegate> _delegate;
    id <SCSearchViewControllerTransitioning> _transitionController;
    UICollectionView *_resultsCollectionView;
    UIView *_contentView;
    UIButton *_debugButton;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_animateOverscroll;
- (void)_announceSearchBarReturnAction;
- (void)_announceSearchQueryEventWithUUID:(id)arg1;
- (_Bool)_canDismissResultsViewController;
- (void)_didBeginOverscrollWithScrollView:(id)arg1;
- (void)_didEndOverscrollWithScrollView:(id)arg1;
- (void)_didOverscrollWithScrollView:(id)arg1;
- (void)_disableLoadRefreshContentIfNeeded;
- (void)_dismissIfEmpty;
- (void)_dismissSearchResultsViewControllerWithDismissAction:(long long)arg1;
- (id)_extraLoggingDataFromBasicSearchViewController;
- (void)_handleNewQuery:(id)arg1;
- (void)_handleResultsCollectionViewUpdateCompletion;
- (void)_invalidateResultCollectionViewLayout;
- (void)_logDismissEvents;
- (void)_logExposureForSearchServerExperiments:(id)arg1;
- (void)_logNoResults;
- (void)_refreshSearchResults:(id)arg1;
- (void)_resetCollectionViewResetContentOffsetAnimated:(_Bool)arg1;
- (void)_sendSearchRequest:(id)arg1;
- (void)_setupRequestManagerContexts;
- (void)_updateCellLayoutIfNeededWithScrollView:(id)arg1;
- (void)_updateForRotationTransitions;
- (void)_updateLastLoadingStartTimeWithResultState:(long long)arg1;
- (void)_updateResultCollectionViewContentInset;
- (void)_userDidTakeScreenshot;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic) UIView *containerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double contentViewAlpha;
- (void)dealloc;
@property(retain, nonatomic) UIButton *debugButton; // @synthesize debugButton=_debugButton;
@property(nonatomic) __weak id <SCSearchResultsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapCloseButton;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
@property(retain, nonatomic) SCEventListenerAnnouncer *eventAnnouncer; // @synthesize eventAnnouncer=_eventAnnouncer;
- (_Bool)handleInAppNotificationIfNeeded:(id)arg1 notificationDismissed:(_Bool)arg2;
- (_Bool)hovaOverOverscrollControllerOverscrollDidChange:(id)arg1 shouldOverscrollForViewController:(id)arg2;
- (id)initWithSearchSession:(id)arg1 queryCoordinator:(id)arg2 sectionCreator:(id)arg3 intentHandler:(id)arg4 initialQuery:(id)arg5;
@property(nonatomic) _Bool isFromPullToSearch; // @synthesize isFromPullToSearch=_isFromPullToSearch;
- (id)navigationViewForScrollViewOverscrollController:(id)arg1;
- (id)pageViewName;
- (void)performSearch:(id)arg1;
- (id)presentingViewControllerForSearchQueryResultController:(id)arg1;
- (void)removeListener:(id)arg1;
@property(retain, nonatomic) UICollectionView *resultsCollectionView; // @synthesize resultsCollectionView=_resultsCollectionView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(retain, nonatomic) SCSearchContentViewControllerContext *searchContentViewControllerContext; // @synthesize searchContentViewControllerContext=_searchContentViewControllerContext;
- (void)searchControllerDidChangeToText:(id)arg1 byChangingCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)searchControllerDidTapClearButton;
- (_Bool)searchControllerShouldReturnWithSearchText:(id)arg1;
- (void)searchModalPresenterDismissViewController:(id)arg1 animated:(_Bool)arg2;
- (void)searchModalPresenterPresentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)searchQueryResultController:(id)arg1 willUpdateResultForQuery:(id)arg2 fromQuery:(id)arg3;
- (void)searchQueryResultControllerDidDelayReloadFreshResult:(id)arg1;
- (void)searchQueryResultControllerDidUpdateQueryResult:(id)arg1;
- (_Bool)searchQueryResultControllerShouldReloadFreshResult:(id)arg1;
@property(retain, nonatomic) SCSearchSession *searchSession; // @synthesize searchSession=_searchSession;
@property(readonly, nonatomic) UICollectionView *searchTransitionCollectionView;
@property(nonatomic) _Bool shouldHandleOverscroll; // @synthesize shouldHandleOverscroll=_shouldHandleOverscroll;
@property(retain, nonatomic) id <SCSearchViewControllerTransitioning> transitionController; // @synthesize transitionController=_transitionController;
- (_Bool)shouldDismissViewControllerWhenEnterBackground;
- (_Bool)shouldPopToRootViewController;
- (_Bool)shouldPopToRootViewControllerLater;
- (id)transitionSectionHeaderForSection:(long long)arg1;
- (void)viewControllerDismissSelf;
- (_Bool)viewControllerPrefersSelfDismiss;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)visibleSectionHeaderViewForTransitionAnimation;
- (void)willPerformNavigation;
- (void)willPresentCameraView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

