//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAddFriendsProgressActionTracker, SCAddFriendsScope, SCBitmojiSelfieServices, SCBusinessLogicHarness, SCOnboardingResourceDownloadServices, SCServicesExposer, SCSnapchatterServices, SCUserSessionScope, SCUserStorageServices;

@interface SCAddFriendsProgressEntryPoint : SCEntryPoint
{
    SCBusinessLogicHarness *_businessLogicHarness;
    SCAddFriendsProgressActionTracker *_actionTracker;
    SCUserSessionScope *_userSessionScope;
    SCAddFriendsScope *_addFriendsScope;
    SCBitmojiSelfieServices *_bitmojiSelfieServices;
    SCSnapchatterServices *_snapchatterServices;
    SCOnboardingResourceDownloadServices *_resourceDownloaderServices;
    SCUserStorageServices *_userStorageServices;
    SCServicesExposer *_addFriendsProgressServicesExposer;
}

- (void).cxx_destruct;
- (void)_exposeServicesWithFriendsCount:(unsigned long long)arg1;
@property(retain, nonatomic) SCServicesExposer *addFriendsProgressServicesExposer; // @synthesize addFriendsProgressServicesExposer=_addFriendsProgressServicesExposer;
@property(nonatomic) __weak SCAddFriendsScope *addFriendsScope; // @synthesize addFriendsScope=_addFriendsScope;
- (void)begin;
@property(nonatomic) __weak SCBitmojiSelfieServices *bitmojiSelfieServices; // @synthesize bitmojiSelfieServices=_bitmojiSelfieServices;
@property(nonatomic) __weak SCOnboardingResourceDownloadServices *resourceDownloaderServices; // @synthesize resourceDownloaderServices=_resourceDownloaderServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;

@end
