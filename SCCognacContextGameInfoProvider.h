//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacComposerGameLauncherLifecycleDelegate-Protocol.h"
#import "SCCognacContextGameInfoProviding-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCUserSession;
@protocol NavigationDelegate;

@interface SCCognacContextGameInfoProvider : NSObject <SCCognacComposerGameLauncherLifecycleDelegate, SCCognacContextGameInfoProviding>
{
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    SCEventListenerAnnouncer *_eventAnnouncer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (id)buildGameLauncher;
- (void)gameLauncherDidCloseGame:(id)arg1;
- (void)gameLauncherWillLaunchGame:(id)arg1;
- (id)getUserContextToken;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

