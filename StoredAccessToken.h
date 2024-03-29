//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface StoredAccessToken : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long clientExpiresAtSeconds; // @dynamic clientExpiresAtSeconds;
@property(nonatomic) long long clientFetchedAtSeconds; // @dynamic clientFetchedAtSeconds;
@property(nonatomic) long long clientPrefetchAtSeconds; // @dynamic clientPrefetchAtSeconds;
@property(retain, nonatomic) NSMutableArray *scopesArray; // @dynamic scopesArray;
@property(readonly, nonatomic) unsigned long long scopesArray_Count; // @dynamic scopesArray_Count;
@property(copy, nonatomic) NSString *tokenValue; // @dynamic tokenValue;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

