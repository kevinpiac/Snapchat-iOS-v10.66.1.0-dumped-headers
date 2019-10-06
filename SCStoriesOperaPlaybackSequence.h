//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCStoriesPlaybackCustomStorySequence, SCStoriesPlaybackOurStorySequence, SCStoriesPlaybackUserStorySequence;

@interface SCStoriesOperaPlaybackSequence : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCStoriesPlaybackUserStorySequence *_friendMergedStory_playbackSequence;
    SCStoriesPlaybackCustomStorySequence *_groupChatStory_playbackSequence;
    SCStoriesPlaybackCustomStorySequence *_customStory_playbackSequence;
    SCStoriesPlaybackOurStorySequence *_ourStory_playbackSequence;
}

+ (id)customStoryWithPlaybackSequence:(id)arg1;
+ (id)friendMergedStoryWithPlaybackSequence:(id)arg1;
+ (id)groupChatStoryWithPlaybackSequence:(id)arg1;
+ (id)ourStoryWithPlaybackSequence:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchFriendMergedStory:(CDUnknownBlockType)arg1 groupChatStory:(CDUnknownBlockType)arg2 customStory:(CDUnknownBlockType)arg3 ourStory:(CDUnknownBlockType)arg4;
- (id)xLogObjectInfo;

@end
