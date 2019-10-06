//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCRetrySignalAnnouncerServices, SCStoriesAutoRetryer, SCStoriesRetryerServices, SCUserSessionScope;

@interface SCStoriesAutoRetryerEntryPoint : SCEntryPoint
{
    SCStoriesAutoRetryer *_autoRetryer;
    SCUserSessionScope *_userSessionScope;
    SCStoriesRetryerServices *_StoriesRetryServices;
    SCRetrySignalAnnouncerServices *_retrySignalAnnouncerServices;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SCStoriesRetryerServices *StoriesRetryServices; // @synthesize StoriesRetryServices=_StoriesRetryServices;
- (void)begin;
- (id)end;
@property(nonatomic) __weak SCRetrySignalAnnouncerServices *retrySignalAnnouncerServices; // @synthesize retrySignalAnnouncerServices=_retrySignalAnnouncerServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end
