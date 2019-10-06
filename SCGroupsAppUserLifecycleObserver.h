//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAppUserLifecycleEventObserver-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"

@class NSString, SCLazy, SCPreferences;
@protocol SCGroupManager;

@interface SCGroupsAppUserLifecycleObserver : NSObject <SCDataCoordinatorListener, SCAppUserLifecycleEventObserver>
{
    SCLazy *_groupsDataRemoteFetcher;
    id <SCGroupManager> _groupManager;
    SCPreferences *_userPreferences;
}

- (void).cxx_destruct;
- (void)_remoteFetchGroups;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (id)initWithGroupsDataRemoteFetcher:(id)arg1 groupManager:(id)arg2 userPreferences:(id)arg3;
- (void)onAppDidBecomeActive;
- (void)onAppDidEnterBackground;
- (void)onAppDidFinishLaunching;
- (void)onAppWillEnterForeground;
- (void)onAppWillResignActive;
- (void)onAppWillTerminate;
- (void)onUserLoggedIn;
- (void)onUserRegistered;
- (void)onUserResumed:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

