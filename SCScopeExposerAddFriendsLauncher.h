//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAddFriendsLauncher-Protocol.h"
#import "SCAddFriendsWorkflowDelegate-Protocol.h"

@class NSString, SCScopeExposer;

@interface SCScopeExposerAddFriendsLauncher : NSObject <SCAddFriendsWorkflowDelegate, SCAddFriendsLauncher>
{
    SCScopeExposer *_addFriendsScopeExposer;
    _Bool _isLaunched;
}

- (void).cxx_destruct;
- (void)addFriendsWorkflowCompleted;
- (void)addFriendsWorkflowSkipped;
- (id)initWithAddFriendsScopeExposer:(id)arg1;
- (void)launchWithPresentingViewController:(id)arg1 navigationDelegate:(id)arg2 placement:(long long)arg3 addFriendsContext:(id)arg4 animated:(_Bool)arg5 customUIContainer:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

