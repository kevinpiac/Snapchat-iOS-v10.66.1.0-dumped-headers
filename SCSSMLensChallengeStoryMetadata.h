//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCSSMStoryThumbnail;

@interface SCSSMLensChallengeStoryMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @dynamic bitmojiAvatarId;
@property(copy, nonatomic) NSString *bitmojiAvatarSelfieId; // @dynamic bitmojiAvatarSelfieId;
@property(nonatomic) _Bool hasStoryThumbnail; // @dynamic hasStoryThumbnail;
@property(nonatomic) _Bool isShareable; // @dynamic isShareable;
@property(nonatomic) _Bool isSubscribable; // @dynamic isSubscribable;
@property(retain, nonatomic) SCSSMStoryThumbnail *storyThumbnail; // @dynamic storyThumbnail;

@end

