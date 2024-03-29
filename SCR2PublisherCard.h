//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCR2ShowMetadata;

@interface SCR2PublisherCard : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int adSetting; // @dynamic adSetting;
@property(copy, nonatomic) NSString *businessProfileId; // @dynamic businessProfileId;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(copy, nonatomic) NSString *editionDeeplinkURL; // @dynamic editionDeeplinkURL;
@property(nonatomic) long long editionId; // @dynamic editionId;
@property(copy, nonatomic) NSString *filledIconURL; // @dynamic filledIconURL;
@property(copy, nonatomic) NSString *formalName; // @dynamic formalName;
@property(nonatomic) _Bool hasShowMetadata; // @dynamic hasShowMetadata;
@property(copy, nonatomic) NSString *horizontalIconURL; // @dynamic horizontalIconURL;
@property(nonatomic) _Bool isShareable; // @dynamic isShareable;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *primaryColor; // @dynamic primaryColor;
@property(copy, nonatomic) NSString *profileLargeLogoBitmojiTemplateId; // @dynamic profileLargeLogoBitmojiTemplateId;
@property(copy, nonatomic) NSString *profileLargeLogoURL; // @dynamic profileLargeLogoURL;
@property(nonatomic) int profileLogoDisplay; // @dynamic profileLogoDisplay;
@property(copy, nonatomic) NSString *publisherDeeplinkURL; // @dynamic publisherDeeplinkURL;
@property(nonatomic) long long publisherId; // @dynamic publisherId;
@property(copy, nonatomic) NSString *publisherName; // @dynamic publisherName;
@property(copy, nonatomic) NSString *searchIconURL; // @dynamic searchIconURL;
@property(retain, nonatomic) SCR2ShowMetadata *showMetadata; // @dynamic showMetadata;
@property(copy, nonatomic) NSString *websiteURL; // @dynamic websiteURL;

@end

