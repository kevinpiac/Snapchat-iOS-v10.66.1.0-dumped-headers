//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBUInt32UInt32Dictionary, NSMutableArray, NSString;

@interface SCR2VenueFilterAnnotation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *activityCentersArray; // @dynamic activityCentersArray;
@property(readonly, nonatomic) unsigned long long activityCentersArray_Count; // @dynamic activityCentersArray_Count;
@property(nonatomic) double avgAltitude; // @dynamic avgAltitude;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned int numSnaps30D; // @dynamic numSnaps30D;
@property(nonatomic) unsigned int numSnaps365D; // @dynamic numSnaps365D;
@property(retain, nonatomic) GPBUInt32UInt32Dictionary *weekdayHist; // @dynamic weekdayHist;
@property(readonly, nonatomic) unsigned long long weekdayHist_Count; // @dynamic weekdayHist_Count;

@end

