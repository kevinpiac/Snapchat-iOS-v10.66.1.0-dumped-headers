//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableDictionary;

@interface SCLensSbEncryptionData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int encryptionScheme; // @dynamic encryptionScheme;
@property(nonatomic) _Bool isKeyE2EEncrypted; // @dynamic isKeyE2EEncrypted;
@property(nonatomic) _Bool isKeyServerEncrypted; // @dynamic isKeyServerEncrypted;
@property(retain, nonatomic) NSMutableDictionary *ivStore; // @dynamic ivStore;
@property(readonly, nonatomic) unsigned long long ivStore_Count; // @dynamic ivStore_Count;
@property(copy, nonatomic) NSData *key; // @dynamic key;

@end

