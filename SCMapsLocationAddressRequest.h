//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCMapsRequestOptions;

@interface SCMapsLocationAddressRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(retain, nonatomic) NSMutableArray *locationsArray; // @dynamic locationsArray;
@property(readonly, nonatomic) unsigned long long locationsArray_Count; // @dynamic locationsArray_Count;
@property(retain, nonatomic) SCMapsRequestOptions *options; // @dynamic options;

@end
