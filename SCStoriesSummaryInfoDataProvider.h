//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCStoriesSummaryInfoProviding-Protocol.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCQueuePerformer, SCStoriesRankedStoryIdentifiersObserver, SCStoriesSummariesObserver;

@interface SCStoriesSummaryInfoDataProvider : NSObject <SCDataCoordinatorListener, SCStoriesSummaryInfoProviding>
{
    SCStoriesRankedStoryIdentifiersObserver *_rankedStoryIdentifiersObserver;
    SCStoriesSummariesObserver *_storiesSummariesObserver;
    SCQueuePerformer *_performer;
    SCDataCoordinatorListenerAnnouncer *_updateAnnouncer;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)addDataUpdateListener:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)fetchRankedStoryIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleDataRequest:(id)arg1;
- (id)initWithDocObjectContext:(id)arg1;
- (void)removeDataUpdateListener:(id)arg1;
- (void)storiesSummaryFilteredByIds:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

