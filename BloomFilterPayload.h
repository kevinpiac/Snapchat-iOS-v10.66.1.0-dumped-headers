//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface BloomFilterPayload : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appVersion; // @dynamic appVersion;
@property(nonatomic) unsigned int expectedNumberOfElements; // @dynamic expectedNumberOfElements;
@property(nonatomic) double falsePositiveProbability; // @dynamic falsePositiveProbability;
@property(copy, nonatomic) NSData *filterBitsVector; // @dynamic filterBitsVector;
@property(nonatomic) int filterFunction; // @dynamic filterFunction;
@property(nonatomic) int hashingStrategyType; // @dynamic hashingStrategyType;
@property(nonatomic) unsigned int numberOfBitsInFilter; // @dynamic numberOfBitsInFilter;
@property(nonatomic) unsigned int numberOfHashFunction; // @dynamic numberOfHashFunction;
@property(copy, nonatomic) NSString *osType; // @dynamic osType;
@property(copy, nonatomic) NSString *osVersion; // @dynamic osVersion;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;

@end

