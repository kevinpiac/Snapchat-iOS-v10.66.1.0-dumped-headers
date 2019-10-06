//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCDocObjectContext, SCQueuePerformer, SCStoriesIndividualRequestDebouncer;
@protocol SCDataCoordinating, SCStoriesGrapheneMetricsEmitting;

@interface SCStoriesCustomStoriesMetadataFetcher : NSObject
{
    SCQueuePerformer *_performer;
    SCDocObjectContext *_docObjectContext;
    id <SCDataCoordinating> _storiesDataCoordinator;
    NSString *_currentUserId;
    id <SCStoriesGrapheneMetricsEmitting> _grapheneMetricsEmitter;
    SCStoriesIndividualRequestDebouncer *_debouncer;
}

- (void).cxx_destruct;
- (void)_fetchPublicationIdsOnPerfomer:(id)arg1 requestSource:(id)arg2;
- (void)clearLastFetchTimeForPublicationIds:(id)arg1;
- (void)fetchCustomStoriesMetadataIfPossibleWithFullMetadataRefresh:(_Bool)arg1 requestSource:(id)arg2;
- (void)fetchPublicationIds:(id)arg1 requestSource:(id)arg2;
- (id)initWithDocPerformer:(id)arg1 docObjectContext:(id)arg2 storiesDataCoordinator:(id)arg3 grapheneMetricsEmitter:(id)arg4 currentUserId:(id)arg5;

@end
