//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCMTMapboxGeocodeResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *attribution; // @dynamic attribution;
@property(retain, nonatomic) NSMutableArray *featuresArray; // @dynamic featuresArray;
@property(readonly, nonatomic) unsigned long long featuresArray_Count; // @dynamic featuresArray_Count;
@property(retain, nonatomic) NSMutableArray *queryArray; // @dynamic queryArray;
@property(readonly, nonatomic) unsigned long long queryArray_Count; // @dynamic queryArray_Count;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end

