//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface PBUFFriend : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *addSource; // @dynamic addSource;
@property(nonatomic) int addSourceType; // @dynamic addSourceType;
@property(nonatomic) _Bool autoAdded; // @dynamic autoAdded;
@property(copy, nonatomic) NSString *birthday; // @dynamic birthday;
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @dynamic bitmojiAvatarId;
@property(nonatomic) _Bool canSeeCustomStories; // @dynamic canSeeCustomStories;
@property(nonatomic) int direction; // @dynamic direction;
@property(copy, nonatomic) NSString *display; // @dynamic display;
@property(nonatomic) _Bool dontDecayThumbnail; // @dynamic dontDecayThumbnail;
@property(nonatomic) long long expiration; // @dynamic expiration;
@property(copy, nonatomic) NSString *friendmojiString; // @dynamic friendmojiString;
@property(retain, nonatomic) NSMutableArray *friendmojiSymbolsArray; // @dynamic friendmojiSymbolsArray;
@property(readonly, nonatomic) unsigned long long friendmojiSymbolsArray_Count; // @dynamic friendmojiSymbolsArray_Count;
@property(retain, nonatomic) NSMutableArray *friendmojisArray; // @dynamic friendmojisArray;
@property(readonly, nonatomic) unsigned long long friendmojisArray_Count; // @dynamic friendmojisArray_Count;
@property(nonatomic) _Bool hasCustomDescription; // @dynamic hasCustomDescription;
@property(nonatomic) _Bool hiddenLink; // @dynamic hiddenLink;
@property(nonatomic) _Bool ignoredLink; // @dynamic ignoredLink;
@property(nonatomic) _Bool isSharedStory; // @dynamic isSharedStory;
@property(nonatomic) _Bool localStory; // @dynamic localStory;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) _Bool needsLove; // @dynamic needsLove;
@property(nonatomic) _Bool newLink; // @dynamic newLink;
@property(nonatomic) int pendingSnapsCount; // @dynamic pendingSnapsCount;
@property(nonatomic) long long reverseTs; // @dynamic reverseTs;
@property(nonatomic) long long score; // @dynamic score;
@property(copy, nonatomic) NSString *sharedStoryId; // @dynamic sharedStoryId;
@property(nonatomic) int snapStreakCount; // @dynamic snapStreakCount;
@property(nonatomic) long long snapStreakExpiration; // @dynamic snapStreakExpiration;
@property(nonatomic) int storyPrivacy; // @dynamic storyPrivacy;
@property(nonatomic) long long ts; // @dynamic ts;
@property(nonatomic) int type; // @dynamic type;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;
@property(copy, nonatomic) NSString *venue; // @dynamic venue;

@end

