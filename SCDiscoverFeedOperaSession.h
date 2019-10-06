//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCDiscoverFeedStory;

@interface SCDiscoverFeedOperaSession : NSObject <NSCopying, NSCoding>
{
    unsigned long long _subtype;
    SCDiscoverFeedStory *_discoverFeedStorySession_lastPlayedDiscoverFeedStory;
    SCDiscoverFeedStory *_discoverFeedStorySession_initialDiscoverFeedStory;
    unsigned long long _discoverFeedStorySession_feedType;
    NSString *_friendStorySession_lastPlayedFriendStoryUsername;
}

+ (id)discoverFeedStorySessionWithLastPlayedDiscoverFeedStory:(id)arg1 initialDiscoverFeedStory:(id)arg2 feedType:(unsigned long long)arg3;
+ (id)friendStorySessionWithLastPlayedFriendStoryUsername:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchDiscoverFeedStorySession:(CDUnknownBlockType)arg1 friendStorySession:(CDUnknownBlockType)arg2;

@end
