//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacAppInstanceAuthTokenProviding-Protocol.h"
#import "SCSearchV2CognacTokenProviding-Protocol.h"

@class NSString, NSURL, SCQueuePerformer, SCSessionRequestManager, SCSnapTokenManager;

@interface SCCognacServiceClient : NSObject <SCSearchV2CognacTokenProviding, SCCognacAppInstanceAuthTokenProviding>
{
    SCSessionRequestManager *_requestManager;
    SCSnapTokenManager *_snapTokenManager;
    SCQueuePerformer *_userContextPerformer;
    NSString *_userId;
    NSString *_userContextToken;
    NSString *_hostName;
    NSURL *_baseURL;
}

- (void).cxx_destruct;
- (id)_getUserContextToken;
- (void)_submitRequestWithEndpoint:(id)arg1 protoRequest:(id)arg2 requestId:(id)arg3 responseClass:(Class)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_syncUserContextTokenWithCountryCode:(id)arg1;
@property(retain) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void)batchGetChatDockWithConversationIds:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)createUserAppSessionRequestWithAppInstanceId:(id)arg1 buildId:(id)arg2 hasMajorUpdate:(_Bool)arg3 majorUpdateVersion:(int)arg4 minorUpdateVersion:(int)arg5 completionQueue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)externalUserProfileWithAppId:(id)arg1 avatarId:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)externalUserProfilesWithAppId:(id)arg1 realUserInfos:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)getAppInstanceAuthTokenWithAppInstanceId:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getAppWithAppId:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getChatDockWithConversationId:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getLeaderboardScoreVisibilitiesWithAppId:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getLeaderboardWithLeaderboardId:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)getUserContextToken;
- (void)getUserContextTokenWithCompletion:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (id)initWithUserSession:(id)arg1;
- (void)launchAppInstanceWithAppId:(id)arg1 conversationId:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)listAppsWithCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)listFriendLeaderboardEntriesWithLeaderboardId:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)listGlobalLeaderboardEntriesWithLeaderboardId:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)listLeaderboardsWithAppId:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (void)sendAbandonInviteNotificationWithAppInstanceId:(id)arg1 invitedUserIds:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)sendInviteFriendsNotificationWithAppInstanceId:(id)arg1 invitedUserIds:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setLeaderboardScoreVisibilityWithAppId:(id)arg1 leaderboardId:(id)arg2 scoreVisible:(_Bool)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)submitLeaderboardScoreWithAppId:(id)arg1 leaderboardId:(id)arg2 score:(long long)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)syncUserContextTokenWithCountryCode:(id)arg1;
- (void)terminateAppInstanceWithAppInstanceId:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)terminateUserAppSessionRequestWithId:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

