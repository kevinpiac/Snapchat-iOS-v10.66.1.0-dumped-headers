//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCBloopsServices, SCConversationServices, SCCreatorSettingsService, SCFriendmojiServices, SCFriendsFeedServices, SCNativeMessagingServices, SCOneTapLoginServices, SCScopeExposer, SCSettingsScope, SCSettingsWorkflow, SCShakeToReportServices, SCSnapProServices, SCSnapchatterServices, SCSystemScope, SCUserSessionScope;

@interface SCSettingsEntryPoint : SCEntryPoint
{
    SCSettingsWorkflow *_settingsWorkflow;
    SCSystemScope *_systemScope;
    SCUserSessionScope *_userSessionScope;
    SCFriendmojiServices *_friendmojiServices;
    SCSettingsScope *_settingsScope;
    SCNativeMessagingServices *_nativeMessagingServices;
    SCFriendsFeedServices *_friendsFeedServices;
    SCConversationServices *_conversationServices;
    SCSnapchatterServices *_snapchatterServices;
    SCSnapProServices *_snapProServices;
    SCCreatorSettingsService *_creatorSettingsService;
    SCBloopsServices *_bloopsServices;
    SCShakeToReportServices *_shakeToReportServices;
    SCOneTapLoginServices *_oneTapLoginServices;
    SCScopeExposer *_logoutScopeExposer;
}

- (void).cxx_destruct;
- (void)begin;
@property(nonatomic) __weak SCBloopsServices *bloopsServices; // @synthesize bloopsServices=_bloopsServices;
@property(nonatomic) __weak SCConversationServices *conversationServices; // @synthesize conversationServices=_conversationServices;
@property(nonatomic) __weak SCCreatorSettingsService *creatorSettingsService; // @synthesize creatorSettingsService=_creatorSettingsService;
@property(nonatomic) __weak SCFriendmojiServices *friendmojiServices; // @synthesize friendmojiServices=_friendmojiServices;
@property(nonatomic) __weak SCFriendsFeedServices *friendsFeedServices; // @synthesize friendsFeedServices=_friendsFeedServices;
@property(retain, nonatomic) SCScopeExposer *logoutScopeExposer; // @synthesize logoutScopeExposer=_logoutScopeExposer;
@property(nonatomic) __weak SCNativeMessagingServices *nativeMessagingServices; // @synthesize nativeMessagingServices=_nativeMessagingServices;
@property(nonatomic) __weak SCOneTapLoginServices *oneTapLoginServices; // @synthesize oneTapLoginServices=_oneTapLoginServices;
@property(nonatomic) __weak SCSettingsScope *settingsScope; // @synthesize settingsScope=_settingsScope;
@property(nonatomic) __weak SCShakeToReportServices *shakeToReportServices; // @synthesize shakeToReportServices=_shakeToReportServices;
@property(nonatomic) __weak SCSnapProServices *snapProServices; // @synthesize snapProServices=_snapProServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end

