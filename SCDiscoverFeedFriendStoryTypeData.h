//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCFriendsFeedGroup, SCFriendsFeedSnapchatter;

@interface SCDiscoverFeedFriendStoryTypeData : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCFriendsFeedSnapchatter *_friendStory_friend;
    SCFriendsFeedGroup *_groupChatStory_group;
    NSString *_groupChatStory_publicationId;
    _Bool _customStory_currentUserCanPost;
    _Bool _geoStory_currentUserCanPost;
}

+ (id)customStoryWithCurrentUserCanPost:(_Bool)arg1;
+ (id)friendStoryWithFriend:(id)arg1;
+ (id)geoStoryWithCurrentUserCanPost:(_Bool)arg1;
+ (id)groupChatStoryWithGroup:(id)arg1 publicationId:(id)arg2;
+ (id)privateStory;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchFriendStory:(CDUnknownBlockType)arg1 groupChatStory:(CDUnknownBlockType)arg2 customStory:(CDUnknownBlockType)arg3 privateStory:(CDUnknownBlockType)arg4 geoStory:(CDUnknownBlockType)arg5;

@end
