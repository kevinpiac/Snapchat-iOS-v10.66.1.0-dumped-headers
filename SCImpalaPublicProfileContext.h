//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class SCImpalaPublicProfileServiceConfig;
@protocol SCCFriendStoring, SCCLensActionHandling, SCCStoryPlayerPlaying, SCCStoryPlayerStorySnapViewStateProviding, SCCSubscriptionStore, SCComposerFoundationApplicationProtocol, SCImpalaChatActionHandling, SCImpalaCommerceActionHandling, SCImpalaPresentationControlling, SCImpalaProfilePresenting, SCImpalaPublicProfileActionHandling, SCImpalaPublicProfileHandlerProviding, SCImpalaUrlActionHandling;

@interface SCImpalaPublicProfileContext : SCComposerMarshallableObject
{
    id <SCComposerFoundationApplicationProtocol> _application;
    SCImpalaPublicProfileServiceConfig *_serviceConfig;
    id <SCCStoryPlayerPlaying> _player;
    id <SCImpalaPublicProfileHandlerProviding> _handlerProvider;
    id <SCImpalaPresentationControlling> _presentationController;
    id <SCCStoryPlayerStorySnapViewStateProviding> _storySnapViewStateProvider;
    id <SCCLensActionHandling> _lensActionHandler;
    id <SCImpalaPublicProfileActionHandling> _publicProfileActionHandler;
    id <SCImpalaUrlActionHandling> _urlActionHandler;
    id <SCImpalaCommerceActionHandling> _commerceActionHandler;
    id <SCImpalaChatActionHandling> _chatActionHandler;
    id <SCCFriendStoring> _friendStore;
    id <SCImpalaProfilePresenting> _profilePresenter;
    id <SCCSubscriptionStore> _subscriptionStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SCComposerFoundationApplicationProtocol> application; // @synthesize application=_application;
@property(retain, nonatomic) id <SCImpalaChatActionHandling> chatActionHandler; // @synthesize chatActionHandler=_chatActionHandler;
@property(retain, nonatomic) id <SCImpalaCommerceActionHandling> commerceActionHandler; // @synthesize commerceActionHandler=_commerceActionHandler;
@property(retain, nonatomic) id <SCCFriendStoring> friendStore; // @synthesize friendStore=_friendStore;
@property(retain, nonatomic) id <SCImpalaPublicProfileHandlerProviding> handlerProvider; // @synthesize handlerProvider=_handlerProvider;
- (id)initWithApplication:(id)arg1 serviceConfig:(id)arg2 player:(id)arg3 handlerProvider:(id)arg4 presentationController:(id)arg5 storySnapViewStateProvider:(id)arg6 lensActionHandler:(id)arg7 publicProfileActionHandler:(id)arg8 urlActionHandler:(id)arg9 commerceActionHandler:(id)arg10 chatActionHandler:(id)arg11 friendStore:(id)arg12;
- (id)initWithApplication:(id)arg1 serviceConfig:(id)arg2 player:(id)arg3 handlerProvider:(id)arg4 presentationController:(id)arg5 storySnapViewStateProvider:(id)arg6 lensActionHandler:(id)arg7 publicProfileActionHandler:(id)arg8 urlActionHandler:(id)arg9 commerceActionHandler:(id)arg10 chatActionHandler:(id)arg11 friendStore:(id)arg12 profilePresenter:(id)arg13 subscriptionStore:(id)arg14;
@property(retain, nonatomic) id <SCCLensActionHandling> lensActionHandler; // @synthesize lensActionHandler=_lensActionHandler;
@property(retain, nonatomic) id <SCCStoryPlayerPlaying> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SCImpalaPresentationControlling> presentationController; // @synthesize presentationController=_presentationController;
@property(retain, nonatomic) id <SCImpalaProfilePresenting> profilePresenter; // @synthesize profilePresenter=_profilePresenter;
@property(retain, nonatomic) id <SCImpalaPublicProfileActionHandling> publicProfileActionHandler; // @synthesize publicProfileActionHandler=_publicProfileActionHandler;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(retain, nonatomic) SCImpalaPublicProfileServiceConfig *serviceConfig; // @synthesize serviceConfig=_serviceConfig;
@property(retain, nonatomic) id <SCCStoryPlayerStorySnapViewStateProviding> storySnapViewStateProvider; // @synthesize storySnapViewStateProvider=_storySnapViewStateProvider;
@property(retain, nonatomic) id <SCCSubscriptionStore> subscriptionStore; // @synthesize subscriptionStore=_subscriptionStore;
@property(retain, nonatomic) id <SCImpalaUrlActionHandling> urlActionHandler; // @synthesize urlActionHandler=_urlActionHandler;

@end

