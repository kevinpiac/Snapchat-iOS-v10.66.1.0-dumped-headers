//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCLensGeocircle;

@interface SCLensLures : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCLensGeocircle *activeLure; // @dynamic activeLure;
@property(retain, nonatomic) SCLensGeocircle *closestLure; // @dynamic closestLure;
@property(nonatomic) _Bool hasActiveLure; // @dynamic hasActiveLure;
@property(nonatomic) _Bool hasClosestLure; // @dynamic hasClosestLure;
@property(retain, nonatomic) NSMutableArray *locationsArray; // @dynamic locationsArray;
@property(readonly, nonatomic) unsigned long long locationsArray_Count; // @dynamic locationsArray_Count;

@end

