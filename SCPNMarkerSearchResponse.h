//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCPNMarkerSearchResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) NSMutableArray *markerAnnotationsArray; // @dynamic markerAnnotationsArray;
@property(readonly, nonatomic) unsigned long long markerAnnotationsArray_Count; // @dynamic markerAnnotationsArray_Count;

@end
