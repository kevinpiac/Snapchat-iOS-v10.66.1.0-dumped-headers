//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCServicesExposer, SCUserNetworkServices;

@interface SCFriendmojiEntryPoint : SCEntryPoint
{
    SCUserNetworkServices *_userNetworkServices;
    SCServicesExposer *_friendmojiServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
@property(retain, nonatomic) SCServicesExposer *friendmojiServicesExposer; // @synthesize friendmojiServicesExposer=_friendmojiServicesExposer;
@property(nonatomic) __weak SCUserNetworkServices *userNetworkServices; // @synthesize userNetworkServices=_userNetworkServices;

@end

