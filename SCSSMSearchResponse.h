//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, SCSLOCGeoFeatures;

@interface SCSSMSearchResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(copy, nonatomic) NSData *debugPb; // @dynamic debugPb;
@property(retain, nonatomic) SCSLOCGeoFeatures *geoFeatures; // @dynamic geoFeatures;
@property(retain, nonatomic) NSMutableArray *geoStoriesArray; // @dynamic geoStoriesArray;
@property(readonly, nonatomic) unsigned long long geoStoriesArray_Count; // @dynamic geoStoriesArray_Count;
@property(retain, nonatomic) NSMutableArray *globalStoriesArray; // @dynamic globalStoriesArray;
@property(readonly, nonatomic) unsigned long long globalStoriesArray_Count; // @dynamic globalStoriesArray_Count;
@property(nonatomic) _Bool hasGeoFeatures; // @dynamic hasGeoFeatures;
@property(retain, nonatomic) NSMutableArray *localStoriesArray; // @dynamic localStoriesArray;
@property(readonly, nonatomic) unsigned long long localStoriesArray_Count; // @dynamic localStoriesArray_Count;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;

@end

