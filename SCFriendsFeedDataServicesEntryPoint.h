//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAppUserLifecycleEventHandler, SCConversationServices, SCEntryPointCleanup, SCFriendsFeedLoggingServices, SCFriendsFeedUFSServices, SCFriendsFeedUpdateServices, SCGroupServices, SCIdentityDataServices, SCLazy, SCLegacySnapchatterServices, SCNativeMessagingServices, SCPinnedConversationsServices, SCServicesExposer, SCShakeToReportServices, SCSnapchatterServices, SCStoriesServices, SCSystemScope, SCUserSessionScope, SCUserStorageServices;

@interface SCFriendsFeedDataServicesEntryPoint : SCEntryPoint
{
    SCAppUserLifecycleEventHandler *_appUserLifecycleEventHandler;
    SCLazy *_friendsFeedDataCoordinator;
    SCEntryPointCleanup *_cleanup;
    SCSystemScope *_systemScope;
    SCUserSessionScope *_userSessionScope;
    SCUserStorageServices *_userStorageServices;
    SCFriendsFeedUpdateServices *_friendsFeedUpdatesServices;
    SCFriendsFeedUFSServices *_friendsFeedUFSServices;
    SCConversationServices *_conversationServices;
    SCIdentityDataServices *_identityDataServices;
    SCStoriesServices *_storiesServices;
    SCNativeMessagingServices *_nativeMessagingServices;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCSnapchatterServices *_snapchatterServices;
    SCPinnedConversationsServices *_pinnedConversationsServices;
    SCFriendsFeedLoggingServices *_friendsFeedLoggingServices;
    SCGroupServices *_groupServices;
    SCShakeToReportServices *_shakeToReportServices;
    SCServicesExposer *_friendsFeedServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
@property(nonatomic) __weak SCConversationServices *conversationServices; // @synthesize conversationServices=_conversationServices;
- (id)end;
@property(nonatomic) __weak SCFriendsFeedLoggingServices *friendsFeedLoggingServices; // @synthesize friendsFeedLoggingServices=_friendsFeedLoggingServices;
@property(retain, nonatomic) SCServicesExposer *friendsFeedServicesExposer; // @synthesize friendsFeedServicesExposer=_friendsFeedServicesExposer;
@property(nonatomic) __weak SCFriendsFeedUFSServices *friendsFeedUFSServices; // @synthesize friendsFeedUFSServices=_friendsFeedUFSServices;
@property(nonatomic) __weak SCFriendsFeedUpdateServices *friendsFeedUpdatesServices; // @synthesize friendsFeedUpdatesServices=_friendsFeedUpdatesServices;
@property(nonatomic) __weak SCGroupServices *groupServices; // @synthesize groupServices=_groupServices;
@property(nonatomic) __weak SCIdentityDataServices *identityDataServices; // @synthesize identityDataServices=_identityDataServices;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCNativeMessagingServices *nativeMessagingServices; // @synthesize nativeMessagingServices=_nativeMessagingServices;
@property(nonatomic) __weak SCPinnedConversationsServices *pinnedConversationsServices; // @synthesize pinnedConversationsServices=_pinnedConversationsServices;
@property(nonatomic) __weak SCShakeToReportServices *shakeToReportServices; // @synthesize shakeToReportServices=_shakeToReportServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCStoriesServices *storiesServices; // @synthesize storiesServices=_storiesServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;

@end

