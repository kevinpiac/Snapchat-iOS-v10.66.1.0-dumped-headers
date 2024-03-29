//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEventAnnouncing-Protocol.h"

@class NSString, SCCreateCustomStoryLogParameters, SCStoriesPlaybackLoggingInfo, SCStorySnapViewLogParameters, SCStoryStorySessionLogParameters, SCStoryStoryViewLogParameters;

@protocol SCStoriesBlizzardLogging <SCEventAnnouncing>
- (void)logCreateCustomStoryWithLogParameters:(SCCreateCustomStoryLogParameters *)arg1;
- (void)logDeleteCustomStoryWithPublicationId:(NSString *)arg1 storyTypeSpecific:(long long)arg2 leaveType:(long long)arg3;
- (void)logFailedToCreateCustomStoryWithFailType:(long long)arg1;
- (void)logStorySnapView:(SCStorySnapViewLogParameters *)arg1 loggingInfo:(SCStoriesPlaybackLoggingInfo *)arg2;
- (void)logStoryStorySession:(SCStoryStorySessionLogParameters *)arg1 loggingInfo:(SCStoriesPlaybackLoggingInfo *)arg2;
- (void)logStoryStoryView:(SCStoryStoryViewLogParameters *)arg1 loggingInfo:(SCStoriesPlaybackLoggingInfo *)arg2;
@end

