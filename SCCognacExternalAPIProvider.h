//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacAPIProvider-Protocol.h"

@class NSString, SCCognacConcreteAdsManager, SCCognacConcreteGroupManager, SCUserSession, User;

@interface SCCognacExternalAPIProvider : NSObject <SCCognacAPIProvider>
{
    SCCognacConcreteGroupManager *_concreteGroupManager;
    SCCognacConcreteAdsManager *_concreteAdsManager;
    _Bool gameAudioDisabled;
    NSString *activeAppId;
    User *_user;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *activeAppId; // @synthesize activeAppId;
- (id)adsManager;
- (id)bitmojiAvatarId;
- (id)bitmojiSelfieId;
- (id)cognacDataStorage;
- (id)cognacServiceClient;
- (id)cognacServiceCoordinator;
- (id)cognacServiceEndpoint;
- (id)countryCodeByUserSettings;
- (id)deepLinkManagerWithNavigationDelegate:(id)arg1;
- (id)displayName;
- (_Bool)enableTrace;
- (unsigned long long)environment;
@property(nonatomic) _Bool gameAudioDisabled; // @synthesize gameAudioDisabled;
- (id)groupManager;
- (id)initWithUser:(id)arg1 userSession:(id)arg2;
- (id)languageCodeByUserSettings;
- (id)legacyUserDisplayMutator;
- (id)localStorageService;
- (unsigned long long)maxNumberParticipantsAllowedInAGroup;
- (id)notificationManager;
- (id)overrideWebProxyCacheExpiration;
- (id)presentCameraWithPresentingVC:(id)arg1 replyParameters:(id)arg2 stickerImage:(id)arg3 appId:(id)arg4 captureWorkflowResultDelegate:(id)arg5;
- (void)presentSendToControllerWithPresentingVC:(id)arg1 imageDownloader:(id)arg2 scoreShareMessage:(id)arg3 mediaViewAspectRatio:(double)arg4 sendingDelegate:(id)arg5 navigationDelegate:(id)arg6;
- (id)queryCoordinator;
- (id)sectionCreatorWithPresentingVC:(id)arg1 stateManager:(id)arg2;
- (void)setCognacServiceEndpoint:(id)arg1;
- (void)setScreenshotProvider:(id)arg1;
- (void)showWebProxyDebugBannerWithText:(id)arg1;
- (id)supportActionHandler;
- (id)supportDataProviderWithPlayerItem:(id)arg1 gameSessionId:(id)arg2;
- (id)talkManager;
@property(readonly, nonatomic) __weak User *user; // @synthesize user=_user;
- (id)userId;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (id)username;
- (id)webProxyCache;
- (id)webProxyLoader;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
