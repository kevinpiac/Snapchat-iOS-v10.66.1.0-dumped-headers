//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverFeedInterestSelectionDataCoordinating-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSArray, NSMutableDictionary, NSSet, NSString, SCDataCoordinatorListenerAnnouncer, SCEventListenerAnnouncer, SCQueuePerformer, SCSessionRequestManager, SCSnapTokenManager;
@protocol SCDiscoverFeedDataFetching;

@interface SCDiscoverFeedInterestSelectionDataCoordinator : NSObject <SCUpdateListener, SCDiscoverFeedInterestSelectionDataCoordinating>
{
    SCDataCoordinatorListenerAnnouncer *_dataCoordinatorListenerAnnouncer;
    SCQueuePerformer *_cacheUpdatePerformer;
    NSArray *_interestData;
    NSSet *_selectedTopicIds;
    NSArray *_lastSelectedTopics;
    NSMutableDictionary *_interestSelectionStateData;
    SCSessionRequestManager *_requestManager;
    SCSnapTokenManager *_snapTokenManager;
    NSString *_userId;
    unsigned long long _submissionStatus;
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCDiscoverFeedDataFetching> _discoverFeedDataStore;
    _Bool _isExistingUserCarousel;
    int _feedType;
    NSString *_sectionIdentifier;
}

+ (id)announcerIdentifier;
+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_announceDataCoordinatorUpdateWithDataRequest:(id)arg1;
- (void)_clearTopicDataIfNeeded;
- (void)_completeSubmissionIfPossible:(_Bool)arg1;
- (void)_fetchInterestSubmissionStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchInterestTopicDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchInterestTopicDataWithStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchInterestsFromDiscoverFeedDatastore;
- (void)_logSubmissionMetricsWithTopicId:(id)arg1;
- (void)_performFetchFromDiscoverFeedDatastore;
- (void)_performResetSubmissionState;
- (void)_performSubmission;
- (void)_performUpdateSelectedDataForCategoryId:(id)arg1 lastSelectedTimestamp:(double)arg2;
- (void)_resetSubmissionState;
- (void)_submitInterests;
- (void)_submitInterestsWithToken:(id)arg1;
- (void)_updateSelectedDataForTopicId:(id)arg1 lastSelectedTimestamp:(double)arg2;
- (void)_updateSubmissionStatus:(_Bool)arg1;
- (void)addDataUpdateListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
- (void)fetchInterestSubmissionStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInterestTopicDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInterestTopicDataWithStateDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleDataRequest:(id)arg1;
- (id)initWithRequestManager:(id)arg1 snapTokenManager:(id)arg2 userId:(id)arg3 discoverFeedDataStore:(id)arg4;
- (void)removeDataUpdateListener:(id)arg1;
- (void)removeListener:(id)arg1;
@property(retain, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

