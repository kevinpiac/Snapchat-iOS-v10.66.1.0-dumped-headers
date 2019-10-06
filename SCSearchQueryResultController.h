//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCSectionBasedCollectionViewUpdaterDelegate-Protocol.h"

@class NSArray, NSString, SCEventListenerAnnouncer, SCSearchQuery, SCSearchSectionController, SCSearchSuspendedQueryResultController, SCSectionBasedCollectionViewUpdater, UICollectionView;
@protocol SCSearchIntentHandler, SCSearchQueryCoordinating, SCSearchQueryResultControllerDelegate, SCSearchSectionCreating, UICollectionViewDelegate;

@interface SCSearchQueryResultController : NSObject <SCEventListener, SCSectionBasedCollectionViewUpdaterDelegate, SCEventAnnouncing>
{
    id <SCSearchQueryCoordinating> _queryCoordinator;
    id <SCSearchSectionCreating> _sectionCreator;
    id <SCSearchIntentHandler> _intentHandler;
    SCSearchSuspendedQueryResultController *_suspenedResultController;
    SCSearchSectionController *_sectionController;
    UICollectionView *_resultCollectionView;
    SCSearchQuery *_pendingQuery;
    long long _pendingResultState;
    NSArray *_pendingCurrentSectionConfigurations;
    SCSearchQuery *_displayedQuery;
    NSArray *_noResultSectionDescriptors;
    SCEventListenerAnnouncer *_eventAnnouncer;
    _Bool _shouldPerformAnimationWhenQueryChanges;
    _Bool _disableSectionRecycle;
    id <SCSearchQueryResultControllerDelegate> _delegate;
    SCSectionBasedCollectionViewUpdater *_collectionViewUpdater;
    SCSearchQuery *_query;
    long long _currentQueryResultState;
    NSArray *_currentSectionConfigurations;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceNoResultEvent;
- (void)_applyNewQueryResults:(id)arg1;
- (void)_applySectionsChangesWithQuery:(id)arg1 newSectionWithConfigurations:(id)arg2 resultState:(long long)arg3;
- (_Bool)_hasItemsInResult;
- (void)_notifyQueryStateAwareSupplementaryViewProviders;
- (void)_releasePendingQueryResult;
- (void)_updateCurrentResultState:(long long)arg1;
- (void)_updateCurrentSectionConfigurations:(id)arg1;
- (void)_updateResultsWithQuery:(id)arg1 sectionDescriptors:(id)arg2 resultState:(long long)arg3;
- (void)_updateSuspendedQueryResult:(id)arg1;
- (void)_updateWithNoResultSections;
- (void)addListener:(id)arg1;
@property(nonatomic) __weak id <UICollectionViewDelegate> collectionViewDelegate;
@property(readonly, nonatomic) SCSectionBasedCollectionViewUpdater *collectionViewUpdater; // @synthesize collectionViewUpdater=_collectionViewUpdater;
@property(readonly, nonatomic) long long currentQueryResultState; // @synthesize currentQueryResultState=_currentQueryResultState;
@property(readonly, copy, nonatomic) NSArray *currentSectionConfigurations; // @synthesize currentSectionConfigurations=_currentSectionConfigurations;
@property(nonatomic) __weak id <SCSearchQueryResultControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
@property(nonatomic) _Bool disableSectionRecycle; // @synthesize disableSectionRecycle=_disableSectionRecycle;
- (id)initWithResultCollectionView:(id)arg1 queryCoordinator:(id)arg2 sectionCreator:(id)arg3 intentHandler:(id)arg4;
- (id)presentingViewControllerForSectionBasedCollectionViewUpdater:(id)arg1;
@property(copy, nonatomic) SCSearchQuery *query; // @synthesize query=_query;
- (void)releasePendingQueryResultWithLoadingQueryResult:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didSetUpSections:(id)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didTearDownSections:(id)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateLayoutWithAnimationFinished:(_Bool)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateSectionsWithAnimationFinished:(_Bool)arg2;
- (void)sectionBasedCollectionViewUpdaterWillUpdateCollectionView:(id)arg1;
- (struct UIEdgeInsets)sectionInsetsForSectionBasedCollectionViewUpdater:(id)arg1;
@property(nonatomic) _Bool shouldPerformAnimationWhenQueryChanges; // @synthesize shouldPerformAnimationWhenQueryChanges=_shouldPerformAnimationWhenQueryChanges;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
