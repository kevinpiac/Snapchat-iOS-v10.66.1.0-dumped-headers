//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, SCUserSession, SOJUMyGroupStories, SOJUPartialStoryLogbook;

@protocol SCOurStorySettingsActionDelegate
- (void)didDeletedStoryWithId:(NSString *)arg1;
- (void)registerStory:(SOJUPartialStoryLogbook *)arg1 fromOurStory:(SOJUMyGroupStories *)arg2;
- (void)saveStoryWithId:(NSString *)arg1 userSession:(SCUserSession *)arg2 completion:(void (^)(_Bool))arg3;
@end

