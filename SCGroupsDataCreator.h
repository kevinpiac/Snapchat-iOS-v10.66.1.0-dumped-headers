//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGroupsDataCreating-Protocol.h"

@class NSString;
@protocol SCGroupManager;

@interface SCGroupsDataCreator : NSObject <SCGroupsDataCreating>
{
    id <SCGroupManager> _groupManager;
}

- (void).cxx_destruct;
- (void)createDolphinGroupWithUserAsFriend:(id)arg1 groupName:(id)arg2 creationSource:(long long)arg3 source:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)createEmptyGroupsOnServerIfNecessary:(id)arg1 source:(long long)arg2 groupStoryRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createGroupInviteOnServerWithGroupInviteId:(id)arg1 groupInviteType:(long long)arg2 groupId:(id)arg3 source:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)createGroupWithName:(id)arg1 recipients:(id)arg2 creationSource:(long long)arg3 source:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)createGroupsOnServerIfNecessary:(id)arg1 source:(long long)arg2 groupStoryRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createLocalGroupWithFriends:(id)arg1 creationSource:(long long)arg2 completion:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (id)initWithGroupManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

