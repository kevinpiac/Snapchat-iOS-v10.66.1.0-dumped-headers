//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCSUPGeographics : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *homeLocationsArray; // @dynamic homeLocationsArray;
@property(readonly, nonatomic) unsigned long long homeLocationsArray_Count; // @dynamic homeLocationsArray_Count;
@property(retain, nonatomic) NSMutableArray *topLocationsArray; // @dynamic topLocationsArray;
@property(readonly, nonatomic) unsigned long long topLocationsArray_Count; // @dynamic topLocationsArray_Count;
@property(retain, nonatomic) NSMutableArray *topPlaceCategoriesArray; // @dynamic topPlaceCategoriesArray;
@property(readonly, nonatomic) unsigned long long topPlaceCategoriesArray_Count; // @dynamic topPlaceCategoriesArray_Count;
@property(retain, nonatomic) NSMutableArray *topPlacesArray; // @dynamic topPlacesArray;
@property(readonly, nonatomic) unsigned long long topPlacesArray_Count; // @dynamic topPlacesArray_Count;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;
@property(retain, nonatomic) NSMutableArray *workLocationsArray; // @dynamic workLocationsArray;
@property(readonly, nonatomic) unsigned long long workLocationsArray_Count; // @dynamic workLocationsArray_Count;

@end

