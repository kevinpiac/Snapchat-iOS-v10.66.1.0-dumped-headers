//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSnapchattersFollowingFriendInfo, SCSnapchattersMutualFriendInfo, SCSnapchattersPendingFriendInfo;

@interface SCSnapchattersFriendSubtypeInfo : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCSnapchattersFollowingFriendInfo *_followingFriendInfo_followingFriendInfo;
    SCSnapchattersPendingFriendInfo *_pendingFriendInfo_pendingFriendInfo;
    SCSnapchattersMutualFriendInfo *_mutualFriendInfo_mutualFriendInfo;
}

+ (id)followingFriendInfoWithFollowingFriendInfo:(id)arg1;
+ (id)mutualFriendInfoWithMutualFriendInfo:(id)arg1;
+ (id)pendingFriendInfoWithPendingFriendInfo:(id)arg1;
- (void).cxx_destruct;
- (id)asFollowingFriendInfo;
- (id)asMutualFriendInfo;
- (id)asPendingFriendInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSameSubtype:(id)arg1;
- (void)matchFollowingFriendInfo:(CDUnknownBlockType)arg1 pendingFriendInfo:(CDUnknownBlockType)arg2 mutualFriendInfo:(CDUnknownBlockType)arg3;
- (unsigned long long)subtype;

@end

