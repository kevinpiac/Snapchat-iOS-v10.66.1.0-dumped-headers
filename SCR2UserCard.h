//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString, SCR2StoryThumbnail;

@interface SCR2UserCard : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @dynamic bitmojiAvatarId;
@property(retain, nonatomic) NSMutableDictionary *debugMap; // @dynamic debugMap;
@property(readonly, nonatomic) unsigned long long debugMap_Count; // @dynamic debugMap_Count;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(copy, nonatomic) NSString *emoji; // @dynamic emoji;
@property(nonatomic) _Bool hasStoryThumbnail; // @dynamic hasStoryThumbnail;
@property(nonatomic) _Bool isOfficial; // @dynamic isOfficial;
@property(nonatomic) _Bool isPopular; // @dynamic isPopular;
@property(copy, nonatomic) NSString *searchResultHelpString; // @dynamic searchResultHelpString;
@property(nonatomic) int searchResultReason; // @dynamic searchResultReason;
@property(retain, nonatomic) SCR2StoryThumbnail *storyThumbnail; // @dynamic storyThumbnail;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;
@property(copy, nonatomic) NSString *username; // @dynamic username;

@end

