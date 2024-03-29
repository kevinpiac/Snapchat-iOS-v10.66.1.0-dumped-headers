//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMCRGBA, SPCGPoint;

@interface SCMTMapAnnouncement : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *categoryDisplayString; // @dynamic categoryDisplayString;
@property(retain, nonatomic) SCMCRGBA *categoryStringColor; // @dynamic categoryStringColor;
@property(retain, nonatomic) SPCGPoint *destinationLocation; // @dynamic destinationLocation;
@property(nonatomic) double destinationZoom; // @dynamic destinationZoom;
@property(nonatomic) long long displayDurationMs; // @dynamic displayDurationMs;
@property(copy, nonatomic) NSString *emojiIcon; // @dynamic emojiIcon;
@property(nonatomic) _Bool hasCategoryStringColor; // @dynamic hasCategoryStringColor;
@property(nonatomic) _Bool hasDestinationLocation; // @dynamic hasDestinationLocation;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

