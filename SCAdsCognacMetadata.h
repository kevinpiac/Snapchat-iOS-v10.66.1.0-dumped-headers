//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringValue;

@interface SCAdsCognacMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBStringValue *buildId; // @dynamic buildId;
@property(retain, nonatomic) GPBStringValue *developerFacingRequestId; // @dynamic developerFacingRequestId;
@property(retain, nonatomic) GPBStringValue *gameId; // @dynamic gameId;
@property(nonatomic) _Bool hasBuildId; // @dynamic hasBuildId;
@property(nonatomic) _Bool hasDeveloperFacingRequestId; // @dynamic hasDeveloperFacingRequestId;
@property(nonatomic) _Bool hasGameId; // @dynamic hasGameId;
@property(nonatomic) _Bool hasOrgId; // @dynamic hasOrgId;
@property(nonatomic) _Bool hasSlotId; // @dynamic hasSlotId;
@property(retain, nonatomic) GPBStringValue *orgId; // @dynamic orgId;
@property(retain, nonatomic) GPBStringValue *slotId; // @dynamic slotId;

@end

