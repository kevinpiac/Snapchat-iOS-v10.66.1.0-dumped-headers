//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface SCLensBlobMedia : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *data_p; // @dynamic data_p;
@property(nonatomic) long long expirationTimeMs; // @dynamic expirationTimeMs;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) _Bool isClientEncrypted; // @dynamic isClientEncrypted;
@property(nonatomic) int version; // @dynamic version;

@end
