//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCBoltIngestionFailure, SCBoltIngestionSuccess, SCBoltIngestionUnknown;

@interface SCBoltGetIngestionStatusResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *externalId; // @dynamic externalId;
@property(retain, nonatomic) SCBoltIngestionFailure *failure; // @dynamic failure;
@property(readonly, nonatomic) int responseOneOfCase; // @dynamic responseOneOfCase;
@property(retain, nonatomic) SCBoltIngestionSuccess *success; // @dynamic success;
@property(retain, nonatomic) SCBoltIngestionUnknown *unknown; // @dynamic unknown;

@end
