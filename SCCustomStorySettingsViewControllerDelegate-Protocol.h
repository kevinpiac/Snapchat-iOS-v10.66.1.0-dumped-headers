//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCCustomStorySettingsViewController, SCMyGroupStories, SCStoriesCustomStoryMetadata;

@protocol SCCustomStorySettingsViewControllerDelegate <NSObject>
- (void)customStorySettingsViewController:(SCCustomStorySettingsViewController *)arg1 updateTableForCustomStoryCreation:(SCStoriesCustomStoryMetadata *)arg2;
- (void)customStorySettingsViewController:(SCCustomStorySettingsViewController *)arg1 updateTableForPublicationReaddition:(NSString *)arg2;
- (void)customStorySettingsViewController:(SCCustomStorySettingsViewController *)arg1 updateTableForPublicationRemoval:(NSString *)arg2 groupStories:(SCMyGroupStories *)arg3;
- (void)customStorySettingsViewControllerDidAttemptToKeepEditing:(SCCustomStorySettingsViewController *)arg1;
- (void)customStorySettingsViewControllerDidFinishEditing:(SCCustomStorySettingsViewController *)arg1;
@end

