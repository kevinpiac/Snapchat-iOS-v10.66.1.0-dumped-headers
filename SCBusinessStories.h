//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMyStories.h"

@class NSMutableDictionary, SCScopedAccess, SCUserSession;

@interface SCBusinessStories : SCMyStories
{
    SCUserSession *_userSession;
    SCScopedAccess *_scopedUserSession;
    NSMutableDictionary *_pollersByStoryClientId;
}

- (void).cxx_destruct;
- (void)_businessStoriesCommonInit;
- (void)_removePollers;
- (void)_removeStory:(id)arg1;
- (void)_updatePollers;
- (void)_updatePollersWithStories:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (_Bool)removeStory:(id)arg1 didDelete:(_Bool)arg2;
- (void)setStories:(id)arg1;

@end

