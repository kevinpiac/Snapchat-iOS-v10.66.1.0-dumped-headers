//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SGTILink;

@interface SCSSMImpalaStoryMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *businessId; // @dynamic businessId;
@property(copy, nonatomic) NSString *businessLogoURL; // @dynamic businessLogoURL;
@property(copy, nonatomic) NSString *businessName; // @dynamic businessName;
@property(retain, nonatomic) SGTILink *businessProfileLink; // @dynamic businessProfileLink;
@property(nonatomic) _Bool hasBusinessProfileLink; // @dynamic hasBusinessProfileLink;

@end
