//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCLensSbSnappable;

@interface SCLensSbPutSnappableRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSnappable; // @dynamic hasSnappable;
@property(retain, nonatomic) NSMutableArray *mediaArray; // @dynamic mediaArray;
@property(readonly, nonatomic) unsigned long long mediaArray_Count; // @dynamic mediaArray_Count;
@property(retain, nonatomic) SCLensSbSnappable *snappable; // @dynamic snappable;

@end
