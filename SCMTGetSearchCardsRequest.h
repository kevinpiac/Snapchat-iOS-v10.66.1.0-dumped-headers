//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMTGeoBox, SCMTPoint, SCMTTileSetId;

@interface SCMTGetSearchCardsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *experimentValue; // @dynamic experimentValue;
@property(nonatomic) _Bool hasMapLocation; // @dynamic hasMapLocation;
@property(nonatomic) _Bool hasTileSetId; // @dynamic hasTileSetId;
@property(nonatomic) _Bool hasUserLocation; // @dynamic hasUserLocation;
@property(nonatomic) _Bool hasViewport; // @dynamic hasViewport;
@property(retain, nonatomic) SCMTPoint *mapLocation; // @dynamic mapLocation;
@property(copy, nonatomic) NSString *query; // @dynamic query;
@property(retain, nonatomic) SCMTTileSetId *tileSetId; // @dynamic tileSetId;
@property(retain, nonatomic) SCMTPoint *userLocation; // @dynamic userLocation;
@property(retain, nonatomic) SCMTGeoBox *viewport; // @dynamic viewport;
@property(nonatomic) double zoom; // @dynamic zoom;

@end

