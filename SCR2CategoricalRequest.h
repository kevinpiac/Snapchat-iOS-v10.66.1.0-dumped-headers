//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCR2GeoLocation;

@interface SCR2CategoricalRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(retain, nonatomic) NSMutableArray *keywordsArray; // @dynamic keywordsArray;
@property(readonly, nonatomic) unsigned long long keywordsArray_Count; // @dynamic keywordsArray_Count;
@property(retain, nonatomic) SCR2GeoLocation *location; // @dynamic location;

@end

