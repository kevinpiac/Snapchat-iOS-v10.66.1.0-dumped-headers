//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersDataFetching-Protocol.h"

@class SCPreferences;
@protocol SCLegacyFriendsProvider, SCSnapchatterUserInfoProvider;

@interface SCLegacySnapchattersDataProvider : NSObject <SCSnapchattersDataFetching>
{
    id <SCLegacyFriendsProvider> _friendsProvider;
    id <SCSnapchatterUserInfoProvider> _userInfoProvider;
    SCPreferences *_preferences;
}

- (void).cxx_destruct;
- (id)_allIncomingSnapchatters;
- (id)_allSnapchattersIncludeBlocked;
- (id)_contactSnapchatters:(_Bool)arg1;
- (id)_displayIncomingSnapchatters;
- (id)_outgoingSnapchatters;
- (id)_outgoingSnapchattersWithoutUser;
- (id)_rankedBestFriendSnapchatters;
- (id)_recentAndSuggestedFriendSnapchatters;
- (id)_recentFriendSnapchatters;
- (id)_snapchatterWithUserId:(id)arg1;
- (id)_snapchatterswithUserIds:(id)arg1;
- (id)_suggestedSnapchattersForSuggestionPage:(unsigned int)arg1 filterFriends:(_Bool)arg2;
- (struct NSDictionary *)_userIdSnapchatterMap;
- (void)allIncomingSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)contactSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)displayIncomingSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFriendsProvider:(id)arg1 userInfoProvider:(id)arg2 preferences:(id)arg3;
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

