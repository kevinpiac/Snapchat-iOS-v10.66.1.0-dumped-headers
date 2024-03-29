//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCFriendsFeedAutoRetryer, SCFriendsFeedRetryerServices, SCRetrySignalAnnouncerServices, SCUserSessionScope;

@interface SCFriendsFeedAutoRetryerEntryPoint : SCEntryPoint
{
    SCFriendsFeedAutoRetryer *_autoRetryer;
    SCUserSessionScope *_userSessionScope;
    SCFriendsFeedRetryerServices *_friendsFeedRetryServices;
    SCRetrySignalAnnouncerServices *_retrySignalAnnouncerServices;
}

- (void).cxx_destruct;
- (void)begin;
- (id)end;
@property(nonatomic) __weak SCFriendsFeedRetryerServices *friendsFeedRetryServices; // @synthesize friendsFeedRetryServices=_friendsFeedRetryServices;
@property(nonatomic) __weak SCRetrySignalAnnouncerServices *retrySignalAnnouncerServices; // @synthesize retrySignalAnnouncerServices=_retrySignalAnnouncerServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end

