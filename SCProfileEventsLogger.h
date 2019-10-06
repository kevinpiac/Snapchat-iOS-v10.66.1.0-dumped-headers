//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface SCProfileEventsLogger : NSObject
{
    NSString *_profileSessionId;
    _Bool _profileSessionEnded;
    NSMutableSet *_availableSections;
}

+ (long long)getPageTypeFromPageName:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_logProfileAddFriendsPageView:(id)arg1;
- (long long)getActionMethod:(id)arg1;
- (id)getOrCreateSessionId;
- (long long)getProfilePageTypeFromPageName:(id)arg1;
- (long long)getRequestSourceFromFriendSource:(long long)arg1;
- (id)getSessionId;
- (long long)getVerificationType:(_Bool)arg1;
- (id)init;
- (void)logFindFriendNumbers:(unsigned long long)arg1 maxNumberLength:(unsigned long long)arg2;
- (void)logMiniProfileAddFriendButton:(id)arg1 profileId:(id)arg2 viewLocation:(long long)arg3 logProfileId:(_Bool)arg4;
- (void)logMiniProfileChatButton:(id)arg1;
- (void)logMiniProfileExit:(id)arg1 openTime:(double)arg2 profileId:(id)arg3 logProfileId:(_Bool)arg4 profilePageType:(long long)arg5;
- (void)logMiniProfileSettingsGearButton:(id)arg1;
- (void)logMiniProfileSnapButton:(id)arg1;
- (void)logMiniProfileView:(id)arg1 viewLocation:(long long)arg2 profileType:(long long)arg3 profileId:(id)arg4 logProfileId:(_Bool)arg5;
- (void)logProfileAddedMePageView:(id)arg1;
- (void)logProfileAddressBookAddContactsFooter:(id)arg1;
- (void)logProfileAddressBookContactInviteInitiate;
- (void)logProfileAddressBookContactPermissionContinue:(_Bool)arg1 source:(id)arg2;
- (void)logProfileAddressBookContactPermissionDeny:(_Bool)arg1 source:(id)arg2;
- (void)logProfileAddressBookContactPermissionGrant:(_Bool)arg1 source:(id)arg2;
- (void)logProfileAddressBookFriendDelete;
- (void)logProfileAddressBookFriendRequestSent;
- (void)logProfileAddressBookSearchClear:(unsigned long long)arg1;
- (void)logProfileAddressBookSearchPerform:(unsigned long long)arg1 keyStrokeCount:(unsigned long long)arg2 snapchatterCount:(unsigned long long)arg3 nonSnapchatterCount:(unsigned long long)arg4;
- (void)logProfileContactPermissionContinue:(long long)arg1 hasVerifiedNumber:(_Bool)arg2 source:(id)arg3;
- (void)logProfileContactPermissionDeny:(long long)arg1 hasVerifiedNumber:(_Bool)arg2 source:(id)arg3;
- (void)logProfileContactPermissionGrant:(long long)arg1 hasVerifiedNumber:(_Bool)arg2 source:(id)arg3;
- (void)logProfileDisplayNameChange:(id)arg1;
- (void)logProfileFriendDelete:(long long)arg1;
- (void)logProfileFriendRequestDelete:(_Bool)arg1 source:(long long)arg2 method:(id)arg3;
- (void)logProfileFriendRequestIgnore:(_Bool)arg1 source:(long long)arg2 method:(id)arg3;
- (void)logProfileFriendRequestNameEdit:(_Bool)arg1 source:(long long)arg2 name:(id)arg3 display:(id)arg4;
- (void)logProfileFriendRequestSent:(long long)arg1;
- (void)logProfileInviteContactEnd:(id)arg1 inviteType:(long long)arg2 inviteUrl:(id)arg3;
- (void)logProfileInviteContactStart:(long long)arg1 inviteUrl:(id)arg2;
- (void)logProfileMainPageExit:(id)arg1 newAddedMeCount:(unsigned long long)arg2;
- (void)logProfileMyContactsContactInviteInitiate;
- (void)logProfileMyContactsContactPermissionContinue:(_Bool)arg1;
- (void)logProfileMyContactsContactPermissionDeny:(_Bool)arg1;
- (void)logProfileMyContactsContactPermissionGrant:(_Bool)arg1;
- (void)logProfileMyContactsFriendDelete;
- (void)logProfileMyContactsFriendRequestSent;
- (void)logProfileMyContactsSearchClear:(unsigned long long)arg1;
- (void)logProfileMyContactsSearchPerform:(unsigned long long)arg1 keyStrokeCount:(unsigned long long)arg2 snapchatterCount:(unsigned long long)arg3 nonSnapchatterCount:(unsigned long long)arg4;
- (void)logProfileMyFriendsFriendDelete;
- (void)logProfileMyFriendsFriendRequestSent;
- (void)logProfileMyFriendsNameEdit:(id)arg1 display:(id)arg2;
- (void)logProfileMyFriendsPageView:(id)arg1;
- (void)logProfileMyFriendsSearchClear:(unsigned long long)arg1;
- (void)logProfileMyFriendsSearchPerform:(unsigned long long)arg1 keyStrokeCount:(unsigned long long)arg2 friendSearchCount:(unsigned long long)arg3;
- (void)logProfilePicturesSharePictures:(id)arg1 withPicture:(_Bool)arg2 forUsername:(id)arg3 isForSelf:(_Bool)arg4;
- (void)logProfileSearchClear:(long long)arg1 charCount:(unsigned long long)arg2;
- (void)logProfileShareUsernameEndWithActivityType:(id)arg1 completed:(_Bool)arg2 errorMessage:(id)arg3 source:(long long)arg4;
- (void)logProfileShareUsernameStart:(id)arg1 source:(long long)arg2;
- (void)logProfileUsernameFriendDelete;
- (void)logProfileUsernameFriendRequestSent;
- (void)logProfileUsernamePageView:(id)arg1;
- (void)logProfileUsernameSearchClear:(unsigned long long)arg1;

@end
