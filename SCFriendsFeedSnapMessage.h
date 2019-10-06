//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCFriendsFeedSnapMediaTypeInfo;

@interface SCFriendsFeedSnapMessage : NSObject <NSCopying>
{
    _Bool _isInfiniteSnap;
    SCFriendsFeedSnapMediaTypeInfo *_snapMediaTypeInfo;
    NSString *_unopenedSnapMessageId;
    NSString *_actionPerformer;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *actionPerformer; // @synthesize actionPerformer=_actionPerformer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithSnapMediaTypeInfo:(id)arg1 unopenedSnapMessageId:(id)arg2 actionPerformer:(id)arg3 isInfiniteSnap:(_Bool)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isInfiniteSnap; // @synthesize isInfiniteSnap=_isInfiniteSnap;
@property(readonly, copy, nonatomic) SCFriendsFeedSnapMediaTypeInfo *snapMediaTypeInfo; // @synthesize snapMediaTypeInfo=_snapMediaTypeInfo;
@property(readonly, copy, nonatomic) NSString *unopenedSnapMessageId; // @synthesize unopenedSnapMessageId=_unopenedSnapMessageId;

@end

