//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class IMPBusinessProfile, IMPInternalBusinessProfileMetadata;

@interface IMPInternalBusinessProfile : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInternalMetadata; // @dynamic hasInternalMetadata;
@property(nonatomic) _Bool hasProfile; // @dynamic hasProfile;
@property(retain, nonatomic) IMPInternalBusinessProfileMetadata *internalMetadata; // @dynamic internalMetadata;
@property(retain, nonatomic) IMPBusinessProfile *profile; // @dynamic profile;

@end

