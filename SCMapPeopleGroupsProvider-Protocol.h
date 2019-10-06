//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCMapPeopleGroupsListenerAnnouncer, SCStoriesThumbnailInfo;

@protocol SCMapPeopleGroupsProvider <NSObject>
- (_Bool)canCreateGroupChatForPeople:(NSArray *)arg1;
- (NSString *)displayNameForExistingGroupChatContainingPeople:(NSArray *)arg1;
- (NSString *)groupIdForGroupChatContainingPeople:(NSArray *)arg1 ignoreLocal:(_Bool)arg2;
- (SCMapPeopleGroupsListenerAnnouncer *)groupsListenerAnnouncer;
- (_Bool)isStoryUnviewedForGroupId:(NSString *)arg1;
- (NSArray *)orderedPeopleForGroupId:(NSString *)arg1;
- (SCStoriesThumbnailInfo *)storyThumbnailForGroupId:(NSString *)arg1;
@end

