//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventAnnouncing-Protocol.h"
#import "SCSearchQueryCoordinating-Protocol.h"

@class NSDictionary, NSString, SCEventListenerAnnouncer, SCSearchCachedRequestManager, SCSearchNavigationCoordinator, SCSearchQuery, SCSearchQueryDeduplicator, SCSearchSession;

@interface SCSearchV1QueryCoordinator : NSObject <SCSearchQueryCoordinating, SCEventAnnouncing>
{
    SCSearchSession *_searchSession;
    NSString *_queryIdentifier;
    _Bool _isFirstLoadingAfterInit;
    unsigned long long _loadingCondition;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCSearchQueryDeduplicator *_queryDeduplicator;
    SCSearchCachedRequestManager *_cachedRequestManager;
    SCSearchQuery *_currentQuery;
    SCSearchNavigationCoordinator *_navigationCoordinator;
    NSDictionary *_sectionParsers;
    NSString *_currentQueryDebugID;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceCachedResults:(id)arg1 forCacheKey:(id)arg2;
- (void)_announceResponseLatencyWithQuery:(id)arg1 isResponseUpToDate:(_Bool)arg2 isCachedResponse:(_Bool)arg3 responseLatency:(double)arg4;
- (void)_announceResultsWithQuery:(id)arg1 currentQuery:(id)arg2 forCacheKey:(id)arg3;
- (void)_executeLocalQueryWithQuery:(id)arg1 queryIdentifier:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_executeRemoteQueryWithQuery:(id)arg1 queryIdentifier:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_handleLoadingSectionsWithQuery:(id)arg1 requestType:(long long)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_handleQuery:(id)arg1 queryIdentifier:(id)arg2 shouldSendQueryImmediately:(_Bool)arg3 updatingBlock:(CDUnknownBlockType)arg4;
- (void)_handleRequestSuccessWithResponse:(id)arg1 originQueryForResponse:(id)arg2 query:(id)arg3 isResponseUpToDate:(_Bool)arg4 isRefreshing:(_Bool)arg5 isCachedResponse:(_Bool)arg6 responseLatency:(double)arg7 requestType:(long long)arg8 updatingBlock:(CDUnknownBlockType)arg9;
- (void)_handleResponse:(id)arg1 responseQuery:(id)arg2 query:(id)arg3 isResponseUpToDate:(_Bool)arg4 isRefreshing:(_Bool)arg5 isCachedResponse:(_Bool)arg6 starteDate:(id)arg7 requestType:(long long)arg8 updatingBlock:(CDUnknownBlockType)arg9;
- (void)_loadSearchResponseWithQuery:(id)arg1 responseDataSource:(unsigned long long)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (id)_localSectionsForQuery:(id)arg1 localResultType:(long long)arg2;
- (id)_postTypeLocalSectionDescriptorsWithQueryConfiguration:(id)arg1 query:(id)arg2 localResultType:(long long)arg3;
- (id)_pretypeLocalSectionDescriptorsWithQueryConfiguration:(id)arg1 query:(id)arg2 localResultType:(long long)arg3;
- (id)_sectionDescriptorsFromResponse:(id)arg1 query:(id)arg2 originQueryForResponse:(id)arg3 requestType:(long long)arg4;
- (void)_setCurrentQueryDebugID:(id)arg1;
- (void)_updateFallbackQueryResultWithQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;
- (void)_updateLocalQueryResultWithQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;
- (void)addListener:(id)arg1;
- (_Bool)canPerformQuery:(id)arg1;
@property(copy, nonatomic) SCSearchQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(readonly, copy, nonatomic) NSString *currentQueryDebugID; // @synthesize currentQueryDebugID=_currentQueryDebugID;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithSearchSession:(id)arg1;
@property(readonly, nonatomic) _Bool isLoading;
@property(nonatomic) __weak SCSearchNavigationCoordinator *navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
- (void)removeListener:(id)arg1;
- (void)resultsForQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSDictionary *sectionParsers; // @synthesize sectionParsers=_sectionParsers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

