//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCGroupInviteService, SCUserSession;
@protocol SCGroupInviteComposerViewsProvider, SCGroupInviteMapProvider, SCGroupInviteServiceChatIntegration, SCGroupInviteServiceChatLauncher, SCGroupInviteVenueSearchProvider, SCNComposerModuleFactory;

@interface SCGroupInviteUIDependencies : NSObject
{
    id <SCNComposerModuleFactory> _networkingModuleFactory;
    SCGroupInviteService *_groupInviteService;
    id <SCGroupInviteServiceChatIntegration> _chatIntegration;
    id <SCGroupInviteMapProvider> _mapProvider;
    SCUserSession *_userSession;
    id <SCGroupInviteServiceChatLauncher> _chatLauncher;
    id <SCGroupInviteVenueSearchProvider> _venueSearchProvider;
    id <SCGroupInviteComposerViewsProvider> _composerViewsProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCGroupInviteServiceChatIntegration> chatIntegration; // @synthesize chatIntegration=_chatIntegration;
@property(readonly, nonatomic) id <SCGroupInviteServiceChatLauncher> chatLauncher; // @synthesize chatLauncher=_chatLauncher;
@property(readonly, nonatomic) id <SCGroupInviteComposerViewsProvider> composerViewsProvider; // @synthesize composerViewsProvider=_composerViewsProvider;
- (void)ensureComposerNativeModulesLoaded;
@property(readonly, nonatomic) SCGroupInviteService *groupInviteService; // @synthesize groupInviteService=_groupInviteService;
- (id)initWithService:(id)arg1 chatIntegration:(id)arg2 mapProvider:(id)arg3 userSession:(id)arg4 chatLauncher:(id)arg5 venueSearchProvider:(id)arg6 composerViewsProvider:(id)arg7;
@property(readonly, nonatomic) id <SCGroupInviteMapProvider> mapProvider; // @synthesize mapProvider=_mapProvider;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) id <SCGroupInviteVenueSearchProvider> venueSearchProvider; // @synthesize venueSearchProvider=_venueSearchProvider;

@end
