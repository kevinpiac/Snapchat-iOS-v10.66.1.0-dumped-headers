//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCPTGetMyPassportResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *achievementsArray; // @dynamic achievementsArray;
@property(readonly, nonatomic) unsigned long long achievementsArray_Count; // @dynamic achievementsArray_Count;
@property(nonatomic) unsigned int cityCount; // @dynamic cityCount;
@property(nonatomic) unsigned int countryCount; // @dynamic countryCount;
@property(retain, nonatomic) NSMutableArray *entryListArray; // @dynamic entryListArray;
@property(readonly, nonatomic) unsigned long long entryListArray_Count; // @dynamic entryListArray_Count;
@property(nonatomic) double generatingProgress; // @dynamic generatingProgress;
@property(copy, nonatomic) NSString *nextPageToken; // @dynamic nextPageToken;
@property(nonatomic) unsigned int placeCount; // @dynamic placeCount;
@property(nonatomic) int state; // @dynamic state;

@end
