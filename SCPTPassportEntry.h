//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCMT1StickerID;

@interface SCPTPassportEntry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int cardType; // @dynamic cardType;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) long long endTimestampMs; // @dynamic endTimestampMs;
@property(copy, nonatomic) NSString *entryId; // @dynamic entryId;
@property(retain, nonatomic) NSMutableArray *friendIdsArray; // @dynamic friendIdsArray;
@property(readonly, nonatomic) unsigned long long friendIdsArray_Count; // @dynamic friendIdsArray_Count;
@property(nonatomic) _Bool hasSticker; // @dynamic hasSticker;
@property(copy, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(nonatomic) _Bool isUntappable; // @dynamic isUntappable;
@property(retain, nonatomic) NSMutableArray *locationsArray; // @dynamic locationsArray;
@property(readonly, nonatomic) unsigned long long locationsArray_Count; // @dynamic locationsArray_Count;
@property(copy, nonatomic) NSString *placeId; // @dynamic placeId;
@property(nonatomic) long long startTimestampMs; // @dynamic startTimestampMs;
@property(retain, nonatomic) SCMT1StickerID *sticker; // @dynamic sticker;
@property(retain, nonatomic) NSMutableArray *subEntriesArray; // @dynamic subEntriesArray;
@property(readonly, nonatomic) unsigned long long subEntriesArray_Count; // @dynamic subEntriesArray_Count;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(nonatomic) long long timestampMs; // @dynamic timestampMs;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) long long zoom; // @dynamic zoom;

@end

