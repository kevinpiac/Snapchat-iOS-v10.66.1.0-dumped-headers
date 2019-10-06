//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class SCImpalaPublicProfileServiceConfig;
@protocol SCCBlizzardLogging, SCCStoryPlayerPlaying, SCCSubscriptionStore, SCComposerFoundationApplicationProtocol, SCComposerNetworkingClientProtocol, SCImpalaPresentationControlling, SCImpalaUrlActionHandling, SCImpalaWatchedStateCaching;

@interface SCImpalaPublisherProfileV2Context : SCComposerMarshallableObject
{
    id <SCComposerFoundationApplicationProtocol> _application;
    id <SCCBlizzardLogging> _blizzardLogger;
    id <SCComposerNetworkingClientProtocol> _networkingClient;
    id <SCCStoryPlayerPlaying> _player;
    id <SCImpalaPresentationControlling> _presentationController;
    SCImpalaPublicProfileServiceConfig *_serviceConfig;
    id <SCCSubscriptionStore> _subscriptionStore;
    id <SCImpalaUrlActionHandling> _urlActionHandler;
    id <SCImpalaWatchedStateCaching> _watchedStateCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SCComposerFoundationApplicationProtocol> application; // @synthesize application=_application;
@property(retain, nonatomic) id <SCCBlizzardLogging> blizzardLogger; // @synthesize blizzardLogger=_blizzardLogger;
- (id)initWithApplication:(id)arg1 blizzardLogger:(id)arg2 networkingClient:(id)arg3 player:(id)arg4 presentationController:(id)arg5 serviceConfig:(id)arg6 subscriptionStore:(id)arg7 urlActionHandler:(id)arg8 watchedStateCache:(id)arg9;
@property(retain, nonatomic) id <SCComposerNetworkingClientProtocol> networkingClient; // @synthesize networkingClient=_networkingClient;
@property(retain, nonatomic) id <SCCStoryPlayerPlaying> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SCImpalaPresentationControlling> presentationController; // @synthesize presentationController=_presentationController;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(retain, nonatomic) SCImpalaPublicProfileServiceConfig *serviceConfig; // @synthesize serviceConfig=_serviceConfig;
@property(retain, nonatomic) id <SCCSubscriptionStore> subscriptionStore; // @synthesize subscriptionStore=_subscriptionStore;
@property(retain, nonatomic) id <SCImpalaUrlActionHandling> urlActionHandler; // @synthesize urlActionHandler=_urlActionHandler;
@property(retain, nonatomic) id <SCImpalaWatchedStateCaching> watchedStateCache; // @synthesize watchedStateCache=_watchedStateCache;

@end

