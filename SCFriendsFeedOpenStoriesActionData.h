//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCFriendsFeedStory;

@interface SCFriendsFeedOpenStoriesActionData : NSObject <NSCopying>
{
    SCFriendsFeedStory *_currentStory;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCFriendsFeedStory *currentStory; // @synthesize currentStory=_currentStory;
- (unsigned long long)hash;
- (id)initWithCurrentStory:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end
