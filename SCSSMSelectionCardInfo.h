//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCSUPActionableStoryKey;

@interface SCSSMSelectionCardInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSUPActionableStoryKey *actionableStoryKey; // @dynamic actionableStoryKey;
@property(copy, nonatomic) NSString *displaySubtext; // @dynamic displaySubtext;
@property(copy, nonatomic) NSString *displayText; // @dynamic displayText;
@property(nonatomic) _Bool hasActionableStoryKey; // @dynamic hasActionableStoryKey;
@property(copy, nonatomic) NSString *iconURL; // @dynamic iconURL;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) _Bool isRegisteredInterest; // @dynamic isRegisteredInterest;
@property(copy, nonatomic) NSString *logoURL; // @dynamic logoURL;
@property(copy, nonatomic) NSString *overlayColor; // @dynamic overlayColor;
@property(copy, nonatomic) NSString *thumbnailIv; // @dynamic thumbnailIv;
@property(copy, nonatomic) NSString *thumbnailMediaKey; // @dynamic thumbnailMediaKey;
@property(copy, nonatomic) NSString *thumbnailURL; // @dynamic thumbnailURL;
@property(nonatomic) int type; // @dynamic type;

@end
