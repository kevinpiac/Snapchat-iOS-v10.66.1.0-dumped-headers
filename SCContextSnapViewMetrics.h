//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCContextSnapViewMetrics : NSObject <NSCopying>
{
    _Bool _hasEnoughFriendsToLogMentionCounts;
    _Bool _isViewerMentioned;
    long long _bidirectionalFriendMentionCount;
    long long _unidirectionalFriendMentionCount;
    long long _nonFriendMentionCount;
    NSString *_tildeSeparatedContextActions;
    NSString *_tildeSeparatedAvailableContextTypes;
    long long _numChatsSent;
    long long _numSnapsSent;
    double _CTAVisibleLatency;
    NSString *_inviteId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double CTAVisibleLatency; // @synthesize CTAVisibleLatency=_CTAVisibleLatency;
@property(readonly, nonatomic) long long bidirectionalFriendMentionCount; // @synthesize bidirectionalFriendMentionCount=_bidirectionalFriendMentionCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool hasEnoughFriendsToLogMentionCounts; // @synthesize hasEnoughFriendsToLogMentionCounts=_hasEnoughFriendsToLogMentionCounts;
- (unsigned long long)hash;
- (id)initWithHasEnoughFriendsToLogMentionCounts:(_Bool)arg1 bidirectionalFriendMentionCount:(long long)arg2 unidirectionalFriendMentionCount:(long long)arg3 nonFriendMentionCount:(long long)arg4 isViewerMentioned:(_Bool)arg5 tildeSeparatedContextActions:(id)arg6 tildeSeparatedAvailableContextTypes:(id)arg7 numChatsSent:(long long)arg8 numSnapsSent:(long long)arg9 CTAVisibleLatency:(double)arg10 inviteId:(id)arg11;
@property(readonly, copy, nonatomic) NSString *inviteId; // @synthesize inviteId=_inviteId;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isViewerMentioned; // @synthesize isViewerMentioned=_isViewerMentioned;
@property(readonly, nonatomic) long long nonFriendMentionCount; // @synthesize nonFriendMentionCount=_nonFriendMentionCount;
@property(readonly, nonatomic) long long numChatsSent; // @synthesize numChatsSent=_numChatsSent;
@property(readonly, nonatomic) long long numSnapsSent; // @synthesize numSnapsSent=_numSnapsSent;
@property(readonly, copy, nonatomic) NSString *tildeSeparatedAvailableContextTypes; // @synthesize tildeSeparatedAvailableContextTypes=_tildeSeparatedAvailableContextTypes;
@property(readonly, copy, nonatomic) NSString *tildeSeparatedContextActions; // @synthesize tildeSeparatedContextActions=_tildeSeparatedContextActions;
@property(readonly, nonatomic) long long unidirectionalFriendMentionCount; // @synthesize unidirectionalFriendMentionCount=_unidirectionalFriendMentionCount;

@end

