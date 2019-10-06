//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFriendsFeedFetching-Protocol.h"
#import "SCNativeMessagingFeedManaging-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCArroyoFeedDataUpdateAnnouncer, SCLazy, SCNMessagingFeedManager, SCNMessagingSession, SCNativeQueryFeedParameters, SCPreferences;

@interface SCNativeFeedManager : NSObject <SCTraceEnabled, SCNativeMessagingFeedManaging, SCFriendsFeedFetching>
{
    SCNMessagingSession *_nativeSession;
    SCNMessagingFeedManager *_feedManager;
    SCArroyoFeedDataUpdateAnnouncer *_feedDataUpdateAnnouncer;
    SCLazy *_friendsFeedReadyLogger;
    SCLazy *_ghostToFeedLogger;
    SCPreferences *_userPreferences;
    SCNativeQueryFeedParameters *_queryFeedParameters;
    _Bool _hasMoreEntries;
}

- (void).cxx_destruct;
- (void)_announceFetchFeedFeedEntries:(id)arg1 fetchContext:(id)arg2;
- (void)_fetchAndSyncFeedForFetchContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchFeedFromTimestamp:(long long)arg1 fetchContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleArroyoFailure:(long long)arg1 failureStatus:(long long)arg2 fetchContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleSyncFeedCompleted:(id)arg1 deletedFeedIdentifiers:(id)arg2 resetFeed:(_Bool)arg3 fetchContext:(id)arg4 updateType:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_handleUserNotBootstrappedResult:(CDUnknownBlockType)arg1 feedUpdateType:(long long)arg2;
- (void)_queryFeedFromTimestamp:(long long)arg1 fetchContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_queryFeedParameters;
- (void)_setNativeQueryFeedParameters:(id)arg1;
- (void)_syncFeedForFetchContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_toastArroyoError:(long long)arg1 updateType:(long long)arg2;
- (void)_toastMessage:(id)arg1 color:(id)arg2;
- (void)_toastNotBootstrapped:(long long)arg1;
- (void)clearGroupConversationById:(id)arg1;
- (void)clearOneOnOneConversationByUserId:(id)arg1;
- (id)feedDataUpdateAnnouncer;
@property _Bool hasMoreEntries; // @synthesize hasMoreEntries=_hasMoreEntries;
- (_Bool)hasMoreFeedEntries;
- (id)initWithNativeSession:(id)arg1 feedDataUpdateAnnouncer:(id)arg2 friendsFeedReadyLogger:(id)arg3 ghostToFeedLogger:(id)arg4 userPreferences:(id)arg5;
- (void)paginateFeedForToken:(id)arg1 fetchContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncFeedForFetchContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAppStateChange:(_Bool)arg1;
- (void)updateFriendsFeedForFetchContext:(id)arg1 previousUpdateSucceeded:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
