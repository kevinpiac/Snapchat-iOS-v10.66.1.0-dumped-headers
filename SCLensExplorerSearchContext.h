//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@protocol SCCBlizzardLogging, SCCLensActionHandling, SCComposerNetworkingClientProtocol, SCLensExplorerSearchActionHandler, SCLensExplorerSearchActiveUserInfoProviding;

@interface SCLensExplorerSearchContext : SCComposerMarshallableObject
{
    id <SCComposerNetworkingClientProtocol> _networkingClient;
    id <SCCBlizzardLogging> _blizzardLoggger;
    id <SCLensExplorerSearchActiveUserInfoProviding> _activeUserInfoProvider;
    id <SCCLensActionHandling> _lensActionHandler;
    id <SCLensExplorerSearchActionHandler> _actionHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SCLensExplorerSearchActionHandler> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id <SCLensExplorerSearchActiveUserInfoProviding> activeUserInfoProvider; // @synthesize activeUserInfoProvider=_activeUserInfoProvider;
@property(retain, nonatomic) id <SCCBlizzardLogging> blizzardLoggger; // @synthesize blizzardLoggger=_blizzardLoggger;
- (id)initWithNetworkingClient:(id)arg1 blizzardLoggger:(id)arg2 activeUserInfoProvider:(id)arg3 lensActionHandler:(id)arg4 actionHandler:(id)arg5;
- (id)initWithNetworkingClient:(id)arg1 lensActionHandler:(id)arg2 actionHandler:(id)arg3;
@property(retain, nonatomic) id <SCCLensActionHandling> lensActionHandler; // @synthesize lensActionHandler=_lensActionHandler;
@property(retain, nonatomic) id <SCComposerNetworkingClientProtocol> networkingClient; // @synthesize networkingClient=_networkingClient;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;

@end

