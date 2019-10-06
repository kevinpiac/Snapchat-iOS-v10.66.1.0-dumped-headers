//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCFriendsFeedFetchContext;

@interface SCConversationsUpdateDataRequest : NSObject <NSCopying>
{
    NSString *_trackingIdentifier;
    NSArray *_conversations;
    SCFriendsFeedFetchContext *_fetchContext;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *conversations; // @synthesize conversations=_conversations;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCFriendsFeedFetchContext *fetchContext; // @synthesize fetchContext=_fetchContext;
- (unsigned long long)hash;
- (id)initWithTrackingIdentifier:(id)arg1 conversations:(id)arg2 fetchContext:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *trackingIdentifier; // @synthesize trackingIdentifier=_trackingIdentifier;

@end

