//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, SOJUFeedDeltaSyncToken, SOJUFriendsRequest;

@interface SOJUChatFeedRequestBuilder : NSObject
{
    NSString *_checksumsDict;
    NSString *_featuresMap;
    NSNumber *_pullToRefresh;
    SOJUFriendsRequest *_friendsRequest;
    NSArray *_groupDeltaRequests;
    NSNumber *_excludeFriends;
    NSString *_messagesTier;
    NSDictionary *_conversationDeltaQueryMap;
    NSDictionary *_conversationSnapDeltaQueryMap;
    NSString *_feedIterToken;
    NSString *_messageIterToken;
    NSString *_groupPaginationType;
    NSString *_fetchReason;
    SOJUFeedDeltaSyncToken *_feedDeltaSyncToken;
}

+ (id)withJUChatFeedRequest:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setChecksumsDict:(id)arg1;
- (id)setConversationDeltaQueryMap:(id)arg1;
- (id)setConversationSnapDeltaQueryMap:(id)arg1;
- (id)setExcludeFriends:(id)arg1;
- (id)setExcludeFriendsValue:(_Bool)arg1;
- (id)setFeaturesMap:(id)arg1;
- (id)setFeedDeltaSyncToken:(id)arg1;
- (id)setFeedIterToken:(id)arg1;
- (id)setFetchReason:(id)arg1;
- (id)setFetchReasonEnum:(long long)arg1;
- (id)setFriendsRequest:(id)arg1;
- (id)setGroupDeltaRequests:(id)arg1;
- (id)setGroupPaginationType:(id)arg1;
- (id)setGroupPaginationTypeEnum:(long long)arg1;
- (id)setMessageIterToken:(id)arg1;
- (id)setMessagesTier:(id)arg1;
- (id)setMessagesTierEnum:(long long)arg1;
- (id)setPullToRefresh:(id)arg1;
- (id)setPullToRefreshValue:(_Bool)arg1;

@end

