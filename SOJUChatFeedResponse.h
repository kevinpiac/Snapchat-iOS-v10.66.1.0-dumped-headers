//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUChatFeedResponse-Protocol.h"

@class NSArray, NSString, SOJUConversationsResponseInfo, SOJUFeedDeltaSyncToken, SOJUFeedResponseInfo, SOJUFriendsResponse, SOJUMessagingGatewayInfo, SOJUServerInfoResponse, SOJUUpdatesResponse;

@interface SOJUChatFeedResponse : NSObject <SOJUChatFeedResponse>
{
    SOJUServerInfoResponse *_serverInfo;
    SOJUMessagingGatewayInfo *_messagingGatewayInfo;
    SOJUUpdatesResponse *_updatesResponse;
    SOJUFriendsResponse *_friendsResponse;
    SOJUFeedResponseInfo *_feedResponseInfo;
    NSArray *_mischiefResponse;
    NSArray *_conversationsResponse;
    SOJUConversationsResponseInfo *_conversationsResponseInfo;
    SOJUFeedDeltaSyncToken *_feedDeltaSyncToken;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *conversationsResponse; // @synthesize conversationsResponse=_conversationsResponse;
@property(readonly, copy, nonatomic) SOJUConversationsResponseInfo *conversationsResponseInfo; // @synthesize conversationsResponseInfo=_conversationsResponseInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) SOJUFeedDeltaSyncToken *feedDeltaSyncToken; // @synthesize feedDeltaSyncToken=_feedDeltaSyncToken;
@property(readonly, copy, nonatomic) SOJUFeedResponseInfo *feedResponseInfo; // @synthesize feedResponseInfo=_feedResponseInfo;
@property(readonly, copy, nonatomic) SOJUFriendsResponse *friendsResponse; // @synthesize friendsResponse=_friendsResponse;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithServerInfo:(id)arg1 messagingGatewayInfo:(id)arg2 updatesResponse:(id)arg3 friendsResponse:(id)arg4 feedResponseInfo:(id)arg5 mischiefResponse:(id)arg6 conversationsResponse:(id)arg7 conversationsResponseInfo:(id)arg8 feedDeltaSyncToken:(id)arg9;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SOJUMessagingGatewayInfo *messagingGatewayInfo; // @synthesize messagingGatewayInfo=_messagingGatewayInfo;
@property(readonly, copy, nonatomic) NSArray *mischiefResponse; // @synthesize mischiefResponse=_mischiefResponse;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) SOJUServerInfoResponse *serverInfo; // @synthesize serverInfo=_serverInfo;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) SOJUUpdatesResponse *updatesResponse; // @synthesize updatesResponse=_updatesResponse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
