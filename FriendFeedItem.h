//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32ObjectDictionary, Key, NSData, NSString, SCSCKFriendStoryMetadataFeatures;

@interface FriendFeedItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(copy, nonatomic) NSData *debugPb; // @dynamic debugPb;
@property(retain, nonatomic) SCSCKFriendStoryMetadataFeatures *friendStoryMetadataFeatures; // @dynamic friendStoryMetadataFeatures;
@property(nonatomic) _Bool hasFriendStoryMetadataFeatures; // @dynamic hasFriendStoryMetadataFeatures;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(retain, nonatomic) GPBInt32ObjectDictionary *itemIds; // @dynamic itemIds;
@property(readonly, nonatomic) unsigned long long itemIds_Count; // @dynamic itemIds_Count;
@property(retain, nonatomic) Key *key; // @dynamic key;

@end

