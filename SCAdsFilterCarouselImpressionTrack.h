//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Value, NSData, NSMutableArray, SCAdsDeviceInfo, SCAdsSnapCreationInfo;

@interface SCAdsFilterCarouselImpressionTrack : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt64Value *carouselSize; // @dynamic carouselSize;
@property(retain, nonatomic) SCAdsDeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(retain, nonatomic) NSMutableArray *filterImpressionsArray; // @dynamic filterImpressionsArray;
@property(readonly, nonatomic) unsigned long long filterImpressionsArray_Count; // @dynamic filterImpressionsArray_Count;
@property(nonatomic) _Bool hasCarouselSize; // @dynamic hasCarouselSize;
@property(nonatomic) _Bool hasDeviceInfo; // @dynamic hasDeviceInfo;
@property(nonatomic) _Bool hasSnapCreationInfo; // @dynamic hasSnapCreationInfo;
@property(retain, nonatomic) SCAdsSnapCreationInfo *snapCreationInfo; // @dynamic snapCreationInfo;
@property(copy, nonatomic) NSData *snapSessionId; // @dynamic snapSessionId;

@end

