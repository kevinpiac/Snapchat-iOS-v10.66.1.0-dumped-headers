//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFriendsFeedDisplayItemComparisonHelper.h"

@class NSString, SCFriendsFeedChatItem;

@interface SCFriendsFeedChatItemComparisonHelper : SCFriendsFeedDisplayItemComparisonHelper
{
    SCFriendsFeedChatItem *_chatItem;
    NSString *_currentUsername;
    NSString *_currentUserId;
}

- (void).cxx_destruct;
- (id)getItem;
- (_Bool)hasConsumableContent;
- (id)initWithChatItem:(id)arg1 currentUsername:(id)arg2 currentUserId:(id)arg3;
- (_Bool)isSendingOrFailed;
- (_Bool)isSentByUser;
- (long long)timeStampInMs;
- (unsigned long long)typePriority;

@end

