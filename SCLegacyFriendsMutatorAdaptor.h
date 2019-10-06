//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacyFriendsMutator-Protocol.h"

@class SCLazy, SCSessionRequestManager, User;

@interface SCLegacyFriendsMutatorAdaptor : NSObject <SCLegacyFriendsMutator>
{
    User *_user;
    SCLazy *_friends;
    SCSessionRequestManager *_sessionRequestManager;
}

- (void).cxx_destruct;
- (void)addFriend:(id)arg1 addSource:(long long)arg2 placement:(long long)arg3 cellIndex:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)blockSnapchatter:(id)arg1 blockReasonId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearSuggestedFriend;
- (void)clearfindFriendsResults;
- (void)deleteAllContactsWithRequestManager:(id)arg1 completionQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (void)deleteFriend:(id)arg1 deleteSource:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didUpdateSuggestionViewedWithSuggestDataRequest:(id)arg1;
- (void)fetchFriendsFromFetchSource:(unsigned long long)arg1 triggerType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchServerContactsWithRequestManager:(id)arg1 CompletionQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)fetchSuggestedSnapchatters:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)findFriendsWithContactSource:(long long)arg1 shouldRecommend:(_Bool)arg2 isAllUpdate:(_Bool)arg3 isDelta:(_Bool)arg4 shouldAccessContactBook:(_Bool)arg5;
- (void)hideAllSuggestionsWithPlacement:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideSuggestedSnapchatter:(id)arg1 placement:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)ignoreIncomingFriend:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUser:(id)arg1 friends:(id)arg2 sessionRequestManager:(id)arg3;
- (void)multiAddWithAddSourceTypeFriendsMap:(id)arg1 placement:(long long)arg2 isRegistration:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)muteStory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)promoteAddFriendsSuggestionsOfUserIds:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setDisplayName:(id)arg1 displayName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unblockSnapchatter:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unmuteStory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateContactSync:(_Bool)arg1 requestManager:(id)arg2;
- (_Bool)updateFriendRequestViewedWithSnapchatters:(id)arg1;
- (_Bool)updateRecentFriends:(id)arg1;
- (_Bool)updateSnapStreakForUsername:(id)arg1 snapstreakCount:(long long)arg2 expirationServerTimestamp:(id)arg3;
- (void)updateStoryPrivacy:(long long)arg1 userIds:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)updateWithSojuFriendsResponse:(id)arg1 source:(unsigned long long)arg2 triggerType:(long long)arg3 completion:(CDUnknownBlockType)arg4;

@end

