//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCFriendsFeedUpdateServices : NSObject
{
    SCLazy *_friendsFeedLegacyGroupUpdatesDataCoordinator;
    SCLazy *_friendsFeedSnapchatterUpdatesDataCoordinator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLazy *friendsFeedLegacyGroupUpdatesDataCoordinator; // @synthesize friendsFeedLegacyGroupUpdatesDataCoordinator=_friendsFeedLegacyGroupUpdatesDataCoordinator;
@property(readonly, nonatomic) SCLazy *friendsFeedSnapchatterUpdatesDataCoordinator; // @synthesize friendsFeedSnapchatterUpdatesDataCoordinator=_friendsFeedSnapchatterUpdatesDataCoordinator;
- (id)initWithFriendsFeedLegacyGroupUpdatesDataCoordinator:(id)arg1 friendsFeedSnapchatterUpdatesDataCoordinator:(id)arg2;

@end

