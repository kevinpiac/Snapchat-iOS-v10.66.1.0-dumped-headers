//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface SCR2RelatedPublicAccounts_Account : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *encryptedUsername; // @dynamic encryptedUsername;
@property(readonly, nonatomic) int idOneOfCase; // @dynamic idOneOfCase;
@property(nonatomic) long long numUsersLike; // @dynamic numUsersLike;
@property(nonatomic) long long numUsersLikeBoth; // @dynamic numUsersLikeBoth;
@property(nonatomic) float score; // @dynamic score;
@property(nonatomic) int source; // @dynamic source;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;
@property(copy, nonatomic) NSString *username; // @dynamic username;

@end

