//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCMTFriendLocationsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *continuationId; // @dynamic continuationId;
@property(retain, nonatomic) NSMutableArray *friendLocationArray; // @dynamic friendLocationArray;
@property(readonly, nonatomic) unsigned long long friendLocationArray_Count; // @dynamic friendLocationArray_Count;
@property(nonatomic) long long s2CellId; // @dynamic s2CellId;

@end
