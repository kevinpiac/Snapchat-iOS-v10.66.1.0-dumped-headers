//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array, NSMutableDictionary, NSString;

@interface SCPbGrapheneMetric : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *customDimensions; // @dynamic customDimensions;
@property(readonly, nonatomic) unsigned long long customDimensions_Count; // @dynamic customDimensions_Count;
@property(copy, nonatomic) NSString *metricName; // @dynamic metricName;
@property(copy, nonatomic) NSString *partitionName; // @dynamic partitionName;
@property(retain, nonatomic) GPBInt64Array *valuesArray; // @dynamic valuesArray;
@property(readonly, nonatomic) unsigned long long valuesArray_Count; // @dynamic valuesArray_Count;

@end

