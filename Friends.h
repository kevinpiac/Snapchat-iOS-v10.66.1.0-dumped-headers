//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCLegacyFriendsService-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class FriendsView, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString, SCAsyncDecoder, SCFriendEventListenerAnnouncer, SCFriendProfileCollection, SCQueuePerformer, SCRecentFriends, SuggestedFriendsView;

@interface Friends : NSObject <SCTraceEnabled, NSCoding, SCLegacyFriendsService>
{
    SCAsyncDecoder *_asyncDecoder;
    NSRecursiveLock *_encodingLock;
    _Bool _encodingForAsyncDecode;
    _Bool _notifyFriendsBitmojiAvatarChanged;
    _Bool _unreadAddedFriendsChanged;
    SCFriendProfileCollection *_friendProfileCollection;
    FriendsView *_friendsSnapshot;
    SuggestedFriendsView *_suggestedFriendsSnapshot;
    NSMutableDictionary *_allFriends;
    NSMutableDictionary *_allFriendsByUserId;
    NSMutableArray *_bestFriendsProperty;
    NSMutableArray *_blockedFriends;
    NSMutableSet *_blockedFriendsNameSet;
    NSMutableDictionary *_suggestedFriendsInfo;
    NSMutableDictionary *_suggestedFriendDisplayInfo;
    NSMutableArray *_friendsWhoAddedYou;
    NSMutableDictionary *_friendsWhoAddedYouDictionary;
    NSMutableArray *_nonexistentFriends;
    SCRecentFriends *_recentFriends;
    NSMutableArray *_sortedFriendsAndPendings;
    NSMutableArray *_sortedFriendsAndPendingsKeys;
    long long _friendFriendCount;
    long long _friendTypeFriendCount;
    long long _friendFollowingPendingFriendCount;
    NSArray *_unreadAddedFriends;
    NSDictionary *_actionProcessingDict;
    NSString *_deltaFriendToken;
    NSString *_deltaIncomingFriendToken;
    SCQueuePerformer *_performer;
    SCFriendEventListenerAnnouncer *_announcer;
}

+ (id)asyncDecodePath;
+ (void)checkExistenceOfFriendUsername:(id)arg1 includePublicStory:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)checkExistenceOfFriendUsername:(id)arg1 includePublicStory:(_Bool)arg2 sojuCompletion:(CDUnknownBlockType)arg3;
+ (void)deleteAllContacts:(id)arg1 completionQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
+ (void)deleteFriendWithParameters:(id)arg1 sessionRequestManager:(id)arg2 queue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (void)doAdditionWithFriend:(id)arg1 context:(id)arg2 sourceType:(long long)arg3 sessionRequestManager:(id)arg4 queue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (void)doBlockOrReportFriendName:(id)arg1 friendId:(id)arg2 action:(id)arg3 blockReasonId:(id)arg4 sessionRequestManager:(id)arg5 queue:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
+ (void)doMultiAdditionSojuFriends:(id)arg1 context:(id)arg2 sessionRequestManager:(id)arg3 queue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
+ (void)doSignUpSkipAddSnapchatterWithContext:(id)arg1 sessionRequestManager:(id)arg2;
+ (void)fetchFriendsListWithFriendsRequest:(id)arg1 sessionRequestManager:(id)arg2 queue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (void)fetchScoreForFriend:(id)arg1 sessionRequestManager:(id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)fetchSyncedContactList:(id)arg1 completionQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)findFriendsWithPhoneNumbers:(id)arg1 shouldRecommend:(_Bool)arg2 isFullSync:(_Bool)arg3 source:(id)arg4 sessionRequestManager:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (void)ignoreFriendRequest:(id)arg1 sessionRequestManager:(id)arg2 queue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (void)logUnblockProfileEvent:(_Bool)arg1 unblockedFriend:(id)arg2 context:(id)arg3;
+ (void)muteFriendWithUserId:(id)arg1 sessionRequestManager:(id)arg2 queue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (id)requestsSuggestedFriendContext;
+ (void)searchForVerifiedUsersWithQuery:(id)arg1 userSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)sendRegistrationContactsSeen:(id)arg1 added:(id)arg2 seenQuickAdd:(id)arg3 addedQuickAdd:(id)arg4 tokenMap:(id)arg5 userSession:(id)arg6;
+ (void)setDisplayForFriendName:(id)arg1 friendId:(id)arg2 friendDisplay:(id)arg3 sessionRequestManager:(id)arg4 queue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (void)showFriendingStatusDebugPopupWithAction:(id)arg1 friendUsername:(id)arg2 sourceType:(long long)arg3 context:(id)arg4 index:(id)arg5 suggestionToken:(id)arg6;
+ (void)unblockFriendName:(id)arg1 friendId:(id)arg2 sessionRequestManager:(id)arg3 queue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
+ (void)unmuteFriendWithUserId:(id)arg1 sessionRequestManager:(id)arg2 queue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
- (void)_addSuggestedFriendAtBeginingForAllQuickAddPages:(id)arg1 displayInfo:(id)arg2 userId:(id)arg3;
- (void)_addUserId:(id)arg1 inAction:(id)arg2;
- (void)_announceOutgoingFriendsDidUpdate:(id)arg1 updateType:(unsigned long long)arg2 context:(id)arg3;
- (void)_buildAllFriends;
- (void)_checkIfBitmojiAvatarChanged:(id)arg1 withUpdate:(id)arg2;
- (id)_constructDisplayInformation:(id)arg1;
- (id)_constructSuggestedFriendDisplayResultsFromResponse:(id)arg1;
- (id)_constructSuggestedFriendResultsFromResponse:(id)arg1;
- (id)_createCellInformation:(id)arg1 withCellIndex:(long long)arg2;
- (id)_createCellInformationList:(id)arg1;
- (void)_didEndSnapchattersFetchDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)_didEndSnapchattersSuggestDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)_didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)_didStartSnapchattersFetchDataRequest:(id)arg1;
- (void)_didStartSnapchattersSuggestDataRequest:(id)arg1;
- (void)_didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)_doFriendAddition:(id)arg1 sessionRequestManager:(id)arg2 context:(id)arg3 sourceType:(long long)arg4 completion:(CDUnknownBlockType)arg5 showErrMsgOnFailure:(_Bool)arg6;
- (void)_fetchSuggestedFriendsWithQueue:(id)arg1 isNotificationPrefetch:(_Bool)arg2 sessionRequestManager:(id)arg3 SuccessBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)_findSuggestedFriends:(id)arg1 isNotificationPrefetch:(_Bool)arg2 sessionRequestManager:(id)arg3 queue:(id)arg4 queuePerformer:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_friendsRequestSinceTime:(id)arg1 fromAddedFriends:(id)arg2;
- (id)_generateSuggestedFriendsWithSize:(long long)arg1;
- (id)_getAllFriendsByFriendType:(long long)arg1 shouldExcludeSelf:(_Bool)arg2;
- (id)_getRecents:(_Bool)arg1;
- (unsigned long long)_getSuggestionNumLimitForPlacement:(unsigned long long)arg1;
- (void)_hideSuggestedFriend:(id)arg1 context:(id)arg2 sessionRequestManager:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_hideSuggestedFriend:(id)arg1 context:(id)arg2 sessionRequestManager:(id)arg3 queue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)_hideSuggestedFriendUnitWithPlacement:(id)arg1 sessionRequestManager:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_incomingFriendTokenForFriendsRequest;
- (id)_nameForSourceType:(unsigned long long)arg1;
- (void)_notifyFriendsDeltaDidArrive:(id)arg1 source:(unsigned long long)arg2;
- (void)_notifyUnreadAddedFriendsDidChange;
- (void)_orderAddedFriends;
- (unsigned long long)_pendingSnapsCountForUsername:(id)arg1;
- (_Bool)_pendingSnapsExistForUsername:(id)arg1;
- (void)_promoteSuggestedFriendToTopForAddFriendsFooterPage:(id)arg1;
- (void)_removeSuggestedFriendFromDisplayInfo:(id)arg1 withFriendId:(id)arg2;
- (void)_removeSuggestedFriendWithUserId:(id)arg1;
- (void)_removeUserIdInAction:(id)arg1;
- (void)_saveBadgingRangeWithSuggestedFriendResponse:(id)arg1;
- (_Bool)_shouldDisplayUnreadAddedFriend:(id)arg1;
- (id)_suggestedFriendCellInformationListToJson:(id)arg1;
- (void)_takeFriendsSnapshot;
- (void)_takeSuggestedFriendsSnapshot;
- (void)_updateAddedFriendsWithAddedFriends:(id)arg1;
- (id)_updateFindSuggestedFriendsResultsTimestamps:(id)arg1;
- (void)_updateFriendRequestViewedWithSnapchatters:(id)arg1;
- (void)_updateFriendmojiDictIfNecessary:(id)arg1 readOnlyDict:(id)arg2;
- (void)_updateSuggestedFriends:(id)arg1 suggestedFriendDisplayInfo:(id)arg2;
- (void)_updateUnreadAddedFriends;
- (void)_updateWithSoju:(id)arg1 completion:(CDUnknownBlockType)arg2 source:(unsigned long long)arg3 triggerType:(long long)arg4 sessionRequestManager:(id)arg5;
@property(copy, nonatomic) NSDictionary *actionProcessingDict; // @synthesize actionProcessingDict=_actionProcessingDict;
- (void)addFriend:(id)arg1 context:(id)arg2 sourceType:(long long)arg3 fromQuickAction:(_Bool)arg4 pageType:(long long)arg5 sessionRequestManager:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)addFriend:(id)arg1 context:(id)arg2 sourceType:(long long)arg3 pageType:(long long)arg4 sessionRequestManager:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)addFriendToBlocked:(id)arg1;
- (void)addListener:(id)arg1;
- (void)addMultiFriendsWithSourceType:(id)arg1 context:(id)arg2 pageType:(long long)arg3 sessionRequestManager:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)addNewContactAsSuggestedFriend:(id)arg1;
- (id)addedFriendForName:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *allFriends; // @synthesize allFriends=_allFriends;
@property(retain, nonatomic) NSMutableDictionary *allFriendsByUserId; // @synthesize allFriendsByUserId=_allFriendsByUserId;
- (id)allOutgoingFriends;
- (id)allOutgoingFriendsExceptSelf;
@property(readonly, nonatomic) SCFriendEventListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
- (id)bestFriends;
- (id)bestFriendsObjects;
@property(retain, nonatomic) NSMutableArray *bestFriendsProperty; // @synthesize bestFriendsProperty=_bestFriendsProperty;
- (void)blockFriend:(id)arg1 blockReasonId:(id)arg2 context:(id)arg3 sessionRequestManager:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property(retain, nonatomic) NSMutableArray *blockedFriends; // @synthesize blockedFriends=_blockedFriends;
@property(retain, nonatomic) NSMutableSet *blockedFriendsNameSet; // @synthesize blockedFriendsNameSet=_blockedFriendsNameSet;
- (void)clear;
- (void)clearSuggestedFriend;
- (void)deleteFriend:(id)arg1 context:(id)arg2 parameters:(id)arg3 errorMessage:(id)arg4 sessionRequestManager:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)deleteFriend:(id)arg1 context:(id)arg2 sessionRequestManager:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSString *deltaFriendToken; // @synthesize deltaFriendToken=_deltaFriendToken;
@property(copy, nonatomic) NSString *deltaIncomingFriendToken; // @synthesize deltaIncomingFriendToken=_deltaIncomingFriendToken;
- (void)didUpdateSuggestionViewedWithSuggestDataRequest:(id)arg1;
- (void)doBlockOrReport:(id)arg1 action:(id)arg2 blockReasonId:(id)arg3 context:(id)arg4 errorText:(id)arg5 sessionRequestManager:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)doFriendsMultiAddition:(id)arg1 index:(long long)arg2 usernameToOldFriendsMap:(id)arg3 context:(id)arg4 pageType:(long long)arg5 sessionRequestManager:(id)arg6 callback:(CDUnknownBlockType)arg7;
- (void)encodeWithCoder:(id)arg1;
- (void)ensureNonNilObjectsWithCoder:(id)arg1;
- (void)fetchAsyncOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchFriendsListWithCompletion:(CDUnknownBlockType)arg1 triggerType:(long long)arg2 source:(unsigned long long)arg3 forceFullSync:(_Bool)arg4 sessionRequestManager:(id)arg5;
- (void)fetchFriendsListWithSessionRequestManager:(id)arg1;
- (void)findSuggestedFriendsWithCompletion:(CDUnknownBlockType)arg1 sessionRequestManager:(id)arg2;
@property(nonatomic) long long friendFollowingPendingFriendCount; // @synthesize friendFollowingPendingFriendCount=_friendFollowingPendingFriendCount;
- (id)friendForName:(id)arg1;
- (id)friendForUserId:(id)arg1;
@property(nonatomic) long long friendFriendCount; // @synthesize friendFriendCount=_friendFriendCount;
@property(retain, nonatomic) SCFriendProfileCollection *friendProfileCollection; // @synthesize friendProfileCollection=_friendProfileCollection;
@property(nonatomic) long long friendTypeFriendCount; // @synthesize friendTypeFriendCount=_friendTypeFriendCount;
- (id)friendsForUserIds:(id)arg1;
- (id)friendsRequest;
@property(retain) FriendsView *friendsSnapshot; // @synthesize friendsSnapshot=_friendsSnapshot;
@property(retain, nonatomic) NSMutableArray *friendsWhoAddedYou; // @synthesize friendsWhoAddedYou=_friendsWhoAddedYou;
@property(retain, nonatomic) NSMutableDictionary *friendsWhoAddedYouDictionary; // @synthesize friendsWhoAddedYouDictionary=_friendsWhoAddedYouDictionary;
- (id)fullyInitialized;
- (id)getAllFriends;
- (id)getAllMutualFriends;
- (id)getAllMutualFriendsExceptSelf;
- (id)getBlockedFriends;
- (id)getBlockedStoryFriends;
- (id)getFriendsListFriends;
- (id)getOrCreateTempFriendForName:(id)arg1;
- (id)getRecentlyAdded;
- (id)getRecents;
- (id)getSojuFriendForAddition:(id)arg1 sourceType:(long long)arg2;
- (id)getUnreadAddedFriends;
- (void)hideSuggestedFriend:(id)arg1 context:(id)arg2 sessionRequestManager:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)hideSuggestedFriendUnitWithPlacement:(id)arg1 sessionRequestManager:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)ignoreFriendRequest:(id)arg1 context:(id)arg2 sessionRequestManager:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)inProcessingSnapchatterIds;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (_Bool)isFriend:(id)arg1;
- (_Bool)isSuggestedFriendsAvailable:(id)arg1;
- (_Bool)isUsernameBlocked:(id)arg1;
@property(retain, nonatomic) NSMutableArray *nonexistentFriends; // @synthesize nonexistentFriends=_nonexistentFriends;
@property(nonatomic) _Bool notifyFriendsBitmojiAvatarChanged; // @synthesize notifyFriendsBitmojiAvatarChanged=_notifyFriendsBitmojiAvatarChanged;
- (void)notifyFriendsDidChange;
- (void)notifyFriendsDidChangeWithActionType:(id)arg1;
- (void)notifyFriendsDidChangeWithUserInfo:(id)arg1;
@property(readonly, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
- (void)prefetchSuggestedFriendsForNotification:(CDUnknownBlockType)arg1 sessionRequestManager:(id)arg2;
- (void)promoteSuggestionsToTopOfAddFriendsFooter:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)putFriend:(id)arg1;
@property(retain, nonatomic) SCRecentFriends *recentFriends; // @synthesize recentFriends=_recentFriends;
- (id)removeFriendForName:(id)arg1;
- (void)removeFriendFromSortedFriendsAndPendings:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)resetFriendCount;
- (void)setDisplay:(id)arg1 forAddedFriend:(id)arg2 context:(id)arg3 sessionRequestManager:(id)arg4 onComplete:(CDUnknownBlockType)arg5;
- (void)setDisplay:(id)arg1 forFriend:(id)arg2 context:(id)arg3 sessionRequestManager:(id)arg4 onComplete:(CDUnknownBlockType)arg5;
- (void)setDisplay:(id)arg1 forOutgoingFriend:(id)arg2 context:(id)arg3 sessionRequestManager:(id)arg4 onComplete:(CDUnknownBlockType)arg5;
- (void)setPerformer:(id)arg1;
@property(retain, nonatomic) NSMutableArray *sortedFriendsAndPendings; // @synthesize sortedFriendsAndPendings=_sortedFriendsAndPendings;
@property(retain, nonatomic) NSMutableArray *sortedFriendsAndPendingsKeys; // @synthesize sortedFriendsAndPendingsKeys=_sortedFriendsAndPendingsKeys;
@property(retain, nonatomic) NSMutableDictionary *suggestedFriendDisplayInfo; // @synthesize suggestedFriendDisplayInfo=_suggestedFriendDisplayInfo;
@property(retain, nonatomic) NSMutableDictionary *suggestedFriendsInfo; // @synthesize suggestedFriendsInfo=_suggestedFriendsInfo;
@property(retain) SuggestedFriendsView *suggestedFriendsSnapshot; // @synthesize suggestedFriendsSnapshot=_suggestedFriendsSnapshot;
@property(retain, nonatomic) NSArray *unreadAddedFriends; // @synthesize unreadAddedFriends=_unreadAddedFriends;
@property(nonatomic) _Bool unreadAddedFriendsChanged; // @synthesize unreadAddedFriendsChanged=_unreadAddedFriendsChanged;
- (_Bool)shouldIncludeFriendWhoAddedMe:(id)arg1;
- (void)suggestedFriendsDidChangeWithUserInfo:(id)arg1;
- (id)suggestedFriendsFor:(unsigned long long)arg1;
- (id)suggestedFriendsFor:(unsigned long long)arg1 filterFriends:(_Bool)arg2;
- (id)suggestedFriendsToSuggestedFriendCellInformationListJson:(id)arg1;
- (void)takeFriendsSnapshot;
- (void)unblockFriend:(id)arg1 context:(id)arg2 sessionRequestManager:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateAddedFriendsWithDeltaAddedFriends:(id)arg1;
- (id)updateFriend:(id)arg1 withFriend:(id)arg2;
- (void)updateFriendRequestViewedWithSnapchatters:(id)arg1;
- (id)updateFriendsWithFriend:(id)arg1;
- (void)updateFriendsWithFriends:(id)arg1 withSyncType:(long long)arg2;
- (_Bool)updateIncomingFriendsWithSojuFriendsResponse:(id)arg1;
- (void)updateMuteStateToIsMuted:(_Bool)arg1 forUsername:(id)arg2 sessionRequestManager:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)updateRecentsWithUsernameTimestampMap:(id)arg1;
- (void)updateStoryPrivacyWithFriendsToBlock:(id)arg1 storyPrivacy:(long long)arg2;
- (void)updateUnreadAddedFriends;
- (void)updateWithFriendAdditionOnSuccess:(id)arg1 friendName:(id)arg2 friendUserId:(id)arg3 context:(id)arg4;
- (void)updateWithOldFriendOnFailure:(id)arg1 friendName:(id)arg2 error:(id)arg3;
- (void)updateWithSoju:(id)arg1 source:(unsigned long long)arg2 triggerType:(long long)arg3 sessionRequestManager:(id)arg4 completion:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

