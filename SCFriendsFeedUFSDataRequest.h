//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SCFriendsFeedFetchContext, SOJUFeedResponseInfo;

@interface SCFriendsFeedUFSDataRequest : NSObject <NSCopying>
{
    _Bool _isFullSync;
    SOJUFeedResponseInfo *_feedResponse;
    NSArray *_mischiefResponse;
    NSArray *_conversationsResponse;
    long long _fetchType;
    SCFriendsFeedFetchContext *_fetchContext;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *conversationsResponse; // @synthesize conversationsResponse=_conversationsResponse;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SOJUFeedResponseInfo *feedResponse; // @synthesize feedResponse=_feedResponse;
@property(readonly, copy, nonatomic) SCFriendsFeedFetchContext *fetchContext; // @synthesize fetchContext=_fetchContext;
@property(readonly, nonatomic) long long fetchType; // @synthesize fetchType=_fetchType;
- (unsigned long long)hash;
- (id)initWithFeedResponse:(id)arg1 mischiefResponse:(id)arg2 conversationsResponse:(id)arg3 fetchType:(long long)arg4 fetchContext:(id)arg5 isFullSync:(_Bool)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isFullSync; // @synthesize isFullSync=_isFullSync;
@property(readonly, copy, nonatomic) NSArray *mischiefResponse; // @synthesize mischiefResponse=_mischiefResponse;

@end

