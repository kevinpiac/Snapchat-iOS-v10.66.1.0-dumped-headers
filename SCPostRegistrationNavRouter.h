//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPostRegistrationRouter-Protocol.h"

@class NSString, SCScopeExposer;
@protocol SCUIContainer;

@interface SCPostRegistrationNavRouter : NSObject <SCPostRegistrationRouter>
{
    id <SCUIContainer> _uiContainer;
    SCScopeExposer *_contactPermissionRequestScopeExposer;
    SCScopeExposer *_addFriendsScopeExposer;
}

- (void).cxx_destruct;
- (void)endContactPermissionRequestWorkflow;
- (void)endPostRegAddFriendsWorkflow;
- (id)initWithUIContainer:(id)arg1 contactPermissionRequestScopeExposer:(id)arg2 addFriendsScopeExposer:(id)arg3;
- (void)startContactPermissionRequestWorkflow:(id)arg1;
- (void)startPostRegAddFriendsWorkflow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

