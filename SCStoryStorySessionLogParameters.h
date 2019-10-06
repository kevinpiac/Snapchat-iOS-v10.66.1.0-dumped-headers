//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCStoryStorySessionLogParameters : NSObject <NSCopying>
{
    _Bool _isFullyViewed;
    unsigned long long _storyViewCount;
    unsigned long long _storyViewCountUnique;
    unsigned long long _snapViewCount;
    unsigned long long _snapViewCountUnique;
    long long _exitReason;
    long long _viewSource;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long exitReason; // @synthesize exitReason=_exitReason;
- (unsigned long long)hash;
- (id)initWithStoryViewCount:(unsigned long long)arg1 storyViewCountUnique:(unsigned long long)arg2 snapViewCount:(unsigned long long)arg3 snapViewCountUnique:(unsigned long long)arg4 exitReason:(long long)arg5 viewSource:(long long)arg6 isFullyViewed:(_Bool)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isFullyViewed; // @synthesize isFullyViewed=_isFullyViewed;
@property(readonly, nonatomic) unsigned long long snapViewCount; // @synthesize snapViewCount=_snapViewCount;
@property(readonly, nonatomic) unsigned long long snapViewCountUnique; // @synthesize snapViewCountUnique=_snapViewCountUnique;
@property(readonly, nonatomic) unsigned long long storyViewCount; // @synthesize storyViewCount=_storyViewCount;
@property(readonly, nonatomic) unsigned long long storyViewCountUnique; // @synthesize storyViewCountUnique=_storyViewCountUnique;
@property(readonly, nonatomic) long long viewSource; // @synthesize viewSource=_viewSource;

@end
