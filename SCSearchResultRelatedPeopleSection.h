//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCollectionViewSection-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCSearchCarouselContainerCollectionViewCellDelegate-Protocol.h"

@class NSArray, NSString, SCCollectionViewSectionUpdateModel, SCEventListenerAnnouncer, SCSearchQueryStateAwareSupplementaryViewProvider, SCSearchSession, SCSearchUserCardCarouselSectionConfiguration;
@protocol SCCollectionViewSectionDelegate, SCCollectionViewSectionLayoutProviding, SCSearchIntentHandler;

@interface SCSearchResultRelatedPeopleSection : NSObject <SCSearchCarouselContainerCollectionViewCellDelegate, SCEventListener, SCCollectionViewSection, SCEventAnnouncing>
{
    SCSearchSession *_searchSession;
    SCSearchUserCardCarouselSectionConfiguration *_configuration;
    NSArray *_carouselContainerCellModels;
    SCEventListenerAnnouncer *_eventAnnouncer;
    _Bool _shouldResetCarouselContentOffset;
    SCSearchQueryStateAwareSupplementaryViewProvider *_queryStateAwareSupplementaryProvider;
    SCCollectionViewSectionUpdateModel *_sectionUpdateModel;
    id <SCCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler_DEPRECATED;
    long long _dataLoadingStatus;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceSearchResults;
- (id)_extraDataForIndexPath:(id)arg1 actionIdentifier:(id)arg2;
- (void)_handleOpenMiniProfileWithSnapchatter:(id)arg1 searchPerson:(id)arg2 searchPersonViewModel:(id)arg3 indexPath:(id)arg4;
- (void)_playStoryWithSourceView:(id)arg1 friendStories:(id)arg2;
- (void)_resetSectionIfNeeded;
- (void)_showMiniprofileWithPersonViewModel:(id)arg1 indexPath:(id)arg2;
- (void)_updateReplaceConfiguration:(id)arg1;
- (void)_updateReplaceConfigurationAndReload:(id)arg1;
- (void)_updateReplaceContainerCellModels:(id)arg1;
- (void)_updateViewStateForViewModelAtIndex:(unsigned long long)arg1;
- (void)_updateWithConfiguration:(id)arg1 shouldResetContentOffset:(_Bool)arg2;
- (void)addListener:(id)arg1;
- (void)applyConfiguration:(id)arg1;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(nonatomic) __weak id <SCCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithSearchSession:(id)arg1;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler_DEPRECATED; // @synthesize intentHandler_DEPRECATED=_intentHandler_DEPRECATED;
- (unsigned long long)numberOfCellsInSection;
- (void)removeListener:(id)arg1;
- (id)reuseCellClassesByIdentifiers;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 didTapItemAtIndexPath:(id)arg2;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 didTriggerActionOnItemAtIndexPath:(id)arg2 withActionModel:(id)arg3 fromSourceView:(id)arg4;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 willDisplayAtIndexPath:(id)arg2 scrolled:(_Bool)arg3;
- (id)sectionInfo;
@property(copy, nonatomic) SCCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
- (void)setUp;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (id)supplementaryViewProvider;
- (void)tearDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <SCCollectionViewSectionLayoutProviding> layoutCalculator;
@property(readonly) Class superclass;

@end

