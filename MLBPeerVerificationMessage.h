//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface MLBPeerVerificationMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *ciphertext; // @dynamic ciphertext;
@property(nonatomic) _Bool hasCiphertext; // @dynamic hasCiphertext;
@property(nonatomic) _Bool hasTag; // @dynamic hasTag;
@property(copy, nonatomic) NSData *tag; // @dynamic tag;

@end

