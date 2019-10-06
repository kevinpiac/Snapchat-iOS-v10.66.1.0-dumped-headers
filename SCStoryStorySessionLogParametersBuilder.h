//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCStoryStorySessionLogParametersBuilder : NSObject
{
    unsigned long long _storyViewCount;
    unsigned long long _storyViewCountUnique;
    unsigned long long _snapViewCount;
    unsigned long long _snapViewCountUnique;
    long long _exitReason;
    long long _viewSource;
    _Bool _isFullyViewed;
}

+ (id)storyStorySessionLogParameters;
+ (id)storyStorySessionLogParametersFromExistingStoryStorySessionLogParameters:(id)arg1;
- (id)build;
- (id)withExitReason:(long long)arg1;
- (id)withIsFullyViewed:(_Bool)arg1;
- (id)withSnapViewCount:(unsigned long long)arg1;
- (id)withSnapViewCountUnique:(unsigned long long)arg1;
- (id)withStoryViewCount:(unsigned long long)arg1;
- (id)withStoryViewCountUnique:(unsigned long long)arg1;
- (id)withViewSource:(long long)arg1;

@end
