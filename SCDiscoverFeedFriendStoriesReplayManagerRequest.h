//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCDiscoverFeedFriendStoriesReplayManagerRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_playedStory_storyId;
    long long _clearAll_reason;
}

+ (id)clearAllWithReason:(long long)arg1;
+ (id)expandAllStories;
+ (id)playedStoryWithStoryId:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchPlayedStory:(CDUnknownBlockType)arg1 clearAll:(CDUnknownBlockType)arg2 expandAllStories:(CDUnknownBlockType)arg3;

@end

