//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class MLBEncryptionSetupNonceExchangeMessage;

@interface MLBEncryptionSetupResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSetupMessage; // @dynamic hasSetupMessage;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(retain, nonatomic) MLBEncryptionSetupNonceExchangeMessage *setupMessage; // @dynamic setupMessage;
@property(nonatomic) int status; // @dynamic status;

@end

