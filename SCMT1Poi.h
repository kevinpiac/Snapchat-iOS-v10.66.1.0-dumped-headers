//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMCLocalizedStringSet;

@interface SCMT1Poi : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) double lat; // @dynamic lat;
@property(nonatomic) double lng; // @dynamic lng;
@property(retain, nonatomic) SCMCLocalizedStringSet *name; // @dynamic name;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end

