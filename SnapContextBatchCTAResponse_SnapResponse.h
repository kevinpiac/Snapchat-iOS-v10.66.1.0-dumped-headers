//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SnapContextCTAData;

@interface SnapContextBatchCTAResponse_SnapResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SnapContextCTAData *ctaData; // @dynamic ctaData;
@property(copy, nonatomic) NSString *error; // @dynamic error;
@property(nonatomic) _Bool hasCtaData; // @dynamic hasCtaData;
@property(copy, nonatomic) NSString *snapId; // @dynamic snapId;

@end

