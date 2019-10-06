//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersDataFetching-Protocol.h"

@class SCLazy, SCQueuePerformer, SCSnapchattersFetchedResultObserverRepository, SCUserIdToSnapchatterFetcher, SCUsernameToSnapchatterFetcher;

@interface SCSnapchattersDataProvider : NSObject <SCSnapchattersDataFetching>
{
    SCLazy *_userInfoRepository;
    SCLazy *_incomingFriendsTracker;
    SCQueuePerformer *_fetchPerformer;
    SCUserIdToSnapchatterFetcher *_userIdToSnapchatterFetcher;
    SCUsernameToSnapchatterFetcher *_usernameToSnapchatterFetcher;
    SCSnapchattersFetchedResultObserverRepository *_snapchattersFetchedResultObserverRepository;
}

- (void).cxx_destruct;
- (void)_allIncomingSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_contactSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_displayIncomingSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_mutualFriendSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_nonFriendContactSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_nonFriendSuggestedSnapchattersForSuggestionPage:(unsigned int)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_outgoingSnapchattersForLetterKey:(id)arg1 includingMyself:(_Bool)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_outgoingSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_outgoingSnapchattersWithoutUserWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_rankedBestFriendSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_rankedBestFriendsSnapchatters;
- (id)_recentAndSuggestedFriendSnapchatters;
- (void)_recentAndSuggestedFriendSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_recentFriendSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_recentSnapchatterPredicate;
- (void)_snapchatterWithUserId:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_snapchattersWithUserIds:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_snapchattersWithUserIdsWaitDeserialization:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_suggestedSnapchattersForSuggestionPage:(unsigned int)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)allIncomingSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)contactSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)displayIncomingSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithUserIdToSnapchatterFetcher:(id)arg1 usernameToSnapchatterFetcher:(id)arg2 snapchattersFetchedResultObserverRepository:(id)arg3 userInfoRepository:(id)arg4 incomingFriendsTracker:(id)arg5;
- (id)latestAddedFriendsTimestamp;
- (void)mutualFriendSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)mutualFriendsCount;
- (void)nonFriendContactSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)nonFriendsSuggestedSnapchattersForSuggestionPage:(unsigned int)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)outgoingFriendsCount;
- (void)outgoingSnapchattersForLetterKey:(id)arg1 includingMyself:(_Bool)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)outgoingSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)outgoingSnapchattersWithoutUserWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)rankedBestFriendSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)recentAndSuggestedFriendSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)recentFriendSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)snapchatterWithUserId:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)snapchattersWithUserIds:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)snapchattersWithUserIdsWaitDeserialization:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)suggestedSnapchattersForSuggestionPage:(unsigned int)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
