//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCActionable-Protocol.h"
#import "SCCollectionViewSection-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCSectionKitCollectionViewViewMoreActionableDelegate-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCStoriesModelUpdateListener-Protocol.h"

@class NSArray, NSString, SCCollectionViewSectionUpdateModel, SCEventListenerAnnouncer, SCLazy, SCQueuePerformer, SCScopedAccess, SCSearchQuery, SCSearchQueryStateAwareSupplementaryViewProvider, SCSearchSession, SCSearchThresholdBasedModelContainer;
@protocol SCActionHandling, SCCollectionViewSectionDelegate, SCCollectionViewSectionLayoutProviding, SCSearchIntentHandler, SCSnapchattersDataSearching;

@interface SCSearchResultFriendsSection : NSObject <SCSectionKitCollectionViewViewMoreActionableDelegate, SCDataCoordinatorListener, SCActionHandling, SCSnapchattersDataRequestListener, SCStoriesModelUpdateListener, SCCollectionViewSection, SCEventAnnouncing, SCActionable>
{
    SCQueuePerformer *_performer;
    SCSearchSession *_searchSession;
    SCScopedAccess *_friendsFeedDataAccess;
    SCSearchQuery *_currentQuery;
    NSArray *_displayedFriendsViewModel;
    SCSearchThresholdBasedModelContainer *_rankedFriendsContainer;
    SCEventListenerAnnouncer *_eventAnnouncer;
    _Bool _resetData;
    _Bool _didUpdateFriendInCurrentQuery;
    SCSearchQueryStateAwareSupplementaryViewProvider *_queryStateAwareSupplementaryProvider;
    SCScopedAccess *_friendmojiPresenter;
    id <SCSnapchattersDataSearching> _snapchatterSearcher;
    SCLazy *_usernameToSnapchatterFetcher;
    id <SCCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler_DEPRECATED;
    SCCollectionViewSectionUpdateModel *_sectionUpdateModel;
    long long _dataLoadingStatus;
    id <SCActionHandling> _actionHandler;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceActionWithData:(id)arg1;
- (void)_announceOnScreenForCell:(id)arg1 atIndexInSection:(unsigned long long)arg2;
- (void)_announceSearchResultForSection;
- (void)_expandResults;
- (id)_feedIconsForRankableFriends:(id)arg1;
- (id)_friendActivitiesForSnapchatters:(id)arg1;
- (void)_handleFriendsUpdate;
- (id)_indexPathForCell:(id)arg1;
- (id)_loggingInfoForAction:(long long)arg1 atIndexPath:(id)arg2;
- (void)_performNewQueryWithQuery:(id)arg1;
- (void)_processUpdatedDataModel:(id)arg1 withQuery:(id)arg2;
- (void)_reloadCellWithIndexes:(id)arg1 rankedFriends:(id)arg2 displayedViewModels:(id)arg3 queryText:(id)arg4;
- (void)_searchResultsForQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateCellsWithRankedFriends:(id)arg1 displayedViewModels:(id)arg2 queryText:(id)arg3;
- (void)_updateDataSourceWithRankedFriends:(id)arg1 displayedViewModels:(id)arg2 queryText:(id)arg3;
- (void)_updateForExpansion;
- (void)_updateResultsForFriendsUpdate;
- (void)_updateResultsForFriendsUpdateWithUpdatedRankedFriends:(id)arg1;
- (void)_updateSection;
- (void)_updateSectionIfDataLoadingStatusNeedsUpdate;
- (void)_updateSectionWithRankedFriends:(id)arg1 displayedViewModels:(id)arg2 queryText:(id)arg3;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)addListener:(id)arg1;
- (void)applyConfiguration:(id)arg1;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 atIndexInSection:(unsigned long long)arg3;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(nonatomic) __weak id <SCCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithSearchSession:(id)arg1 friendsFeedDataAccess:(id)arg2 usernameToSnapchatterFetcher:(id)arg3 snapchatterSearchResultsProvider:(id)arg4;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler_DEPRECATED; // @synthesize intentHandler_DEPRECATED=_intentHandler_DEPRECATED;
- (double)minimumSectionInteritemSpacing;
- (double)minimumSectionLineSpacing;
- (unsigned long long)numberOfCellsInSection;
- (void)removeListener:(id)arg1;
- (id)reuseCellClassesByIdentifiers;
- (id)sectionInfo;
@property(copy, nonatomic) SCCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
- (void)setUp;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (void)storiesModelDidUpdateWithParams:(id)arg1;
- (id)supplementaryViewProvider;
- (void)tearDown;
- (void)viewMoreCollectionViewCellDidTapViewMore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <SCCollectionViewSectionLayoutProviding> layoutCalculator;
@property(readonly) Class superclass;

@end

