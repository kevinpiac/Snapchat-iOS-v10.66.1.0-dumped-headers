//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, SCR2FriendStoryHighlightScoreFeatures, SCR2OfficialAccountMetadata, SCR2RelatedPublicAccounts;

@interface SCR2FriendStoryHighlightScore_Friend : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *encryptedUsername; // @dynamic encryptedUsername;
@property(retain, nonatomic) SCR2FriendStoryHighlightScoreFeatures *features; // @dynamic features;
@property(nonatomic) _Bool hasFeatures; // @dynamic hasFeatures;
@property(nonatomic) _Bool hasOfficialAccountMetadata; // @dynamic hasOfficialAccountMetadata;
@property(nonatomic) _Bool hasRelatedPublicAccounts; // @dynamic hasRelatedPublicAccounts;
@property(retain, nonatomic) SCR2OfficialAccountMetadata *officialAccountMetadata; // @dynamic officialAccountMetadata;
@property(retain, nonatomic) SCR2RelatedPublicAccounts *relatedPublicAccounts; // @dynamic relatedPublicAccounts;
@property(nonatomic) float score; // @dynamic score;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;
@property(readonly, nonatomic) int userOneOfCase; // @dynamic userOneOfCase;
@property(copy, nonatomic) NSString *username; // @dynamic username;

@end
