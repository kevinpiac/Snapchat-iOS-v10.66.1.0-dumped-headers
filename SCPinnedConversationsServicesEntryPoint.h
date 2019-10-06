//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCFriendmojiServices, SCGroupServices, SCServicesExposer, SCSnapchatterServices, SCUserStorageServices;

@interface SCPinnedConversationsServicesEntryPoint : SCEntryPoint
{
    SCUserStorageServices *_userStorageServices;
    SCFriendmojiServices *_friendmojiServices;
    SCSnapchatterServices *_snapchatterServices;
    SCGroupServices *_groupServices;
    SCServicesExposer *_pinnedConversationsServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
@property(nonatomic) __weak SCFriendmojiServices *friendmojiServices; // @synthesize friendmojiServices=_friendmojiServices;
@property(nonatomic) __weak SCGroupServices *groupServices; // @synthesize groupServices=_groupServices;
@property(retain, nonatomic) SCServicesExposer *pinnedConversationsServicesExposer; // @synthesize pinnedConversationsServicesExposer=_pinnedConversationsServicesExposer;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;

@end
