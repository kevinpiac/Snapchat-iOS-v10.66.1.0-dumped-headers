//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCMapsLocationAddressResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *addressesArray; // @dynamic addressesArray;
@property(readonly, nonatomic) unsigned long long addressesArray_Count; // @dynamic addressesArray_Count;
@property(retain, nonatomic) NSMutableArray *resultsArray; // @dynamic resultsArray;
@property(readonly, nonatomic) unsigned long long resultsArray_Count; // @dynamic resultsArray_Count;

@end

