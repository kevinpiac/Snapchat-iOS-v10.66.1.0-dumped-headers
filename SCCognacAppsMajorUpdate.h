//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCCognacAppsMajorUpdateVersion;

@interface SCCognacAppsMajorUpdate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasVersion; // @dynamic hasVersion;
@property(retain, nonatomic) NSMutableArray *localizedDescriptionsArray; // @dynamic localizedDescriptionsArray;
@property(readonly, nonatomic) unsigned long long localizedDescriptionsArray_Count; // @dynamic localizedDescriptionsArray_Count;
@property(retain, nonatomic) SCCognacAppsMajorUpdateVersion *version; // @dynamic version;

@end

