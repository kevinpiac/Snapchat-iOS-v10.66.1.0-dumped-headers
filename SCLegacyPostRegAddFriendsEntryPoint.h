//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

#import "SCAddFriendsWorkflowDelegate-Protocol.h"

@class SCAddFriendsScope, SCLegacySnapchatterServices, SCNetworkImageServices, SCPostRegAddFriendsServices, SCPostRegAddFriendsWorkflow, SCSnapchatterServices, SCUserSessionScope;

@interface SCLegacyPostRegAddFriendsEntryPoint : SCEntryPoint <SCAddFriendsWorkflowDelegate>
{
    SCPostRegAddFriendsWorkflow *_workflow;
    SCUserSessionScope *_userSessionScope;
    SCAddFriendsScope *_addFriendsScope;
    SCSnapchatterServices *_snapchatterServices;
    SCNetworkImageServices *_networkImageServices;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCPostRegAddFriendsServices *_postRegAddFriendsServices;
}

- (void).cxx_destruct;
- (id)_createActionHandlerWithMutator:(id)arg1 inviteFriendStateTracker:(id)arg2;
- (id)_createCollectionViewCellViewModelGeneratorWithMultiAddEnabled:(_Bool)arg1;
- (id)_createOutgoingFriendsObserverWithSnapchaterTracker:(id)arg1 enableMultiAdd:(_Bool)arg2 inviteFriendStateTracker:(id)arg3;
- (id)_createSearchSectionCreatorWithSnapchatterTracker:(id)arg1 collectionViewCellViewModelGenerator:(id)arg2 inviteFriendStateTracker:(id)arg3;
@property(nonatomic) __weak SCAddFriendsScope *addFriendsScope; // @synthesize addFriendsScope=_addFriendsScope;
- (void)addFriendsWorkflowCompleted;
- (void)addFriendsWorkflowSkipped;
- (void)begin;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCNetworkImageServices *networkImageServices; // @synthesize networkImageServices=_networkImageServices;
@property(nonatomic) __weak SCPostRegAddFriendsServices *postRegAddFriendsServices; // @synthesize postRegAddFriendsServices=_postRegAddFriendsServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end

