//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSMutableArray, NSSet, NSString, SCPNGeo, SCPNImage, SCPNLocalTime, SCPNSceneIntRequest_DebugInfo, SCPNSceneIntRequest_TouchPoint, SCULGtqServeRequest;

@interface SCPNSceneIntRequest : GPBMessage
{
}

+ (id)descriptor;
@property(readonly, copy, nonatomic) NSSet *sc_serviceContexts;

// Remaining properties
@property(retain, nonatomic) SCPNSceneIntRequest_DebugInfo *debugInfo; // @dynamic debugInfo;
@property(retain, nonatomic) NSMutableArray *experimentsArray; // @dynamic experimentsArray;
@property(readonly, nonatomic) unsigned long long experimentsArray_Count; // @dynamic experimentsArray_Count;
@property(retain, nonatomic) SCULGtqServeRequest *gtqRequest; // @dynamic gtqRequest;
@property(nonatomic) _Bool hasDebugInfo; // @dynamic hasDebugInfo;
@property(nonatomic) _Bool hasGtqRequest; // @dynamic hasGtqRequest;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasTime; // @dynamic hasTime;
@property(nonatomic) _Bool hasTouchPoint; // @dynamic hasTouchPoint;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) SCPNImage *image; // @dynamic image;
@property(nonatomic) _Bool isFrontFacing; // @dynamic isFrontFacing;
@property(retain, nonatomic) SCPNGeo *location; // @dynamic location;
@property(nonatomic) int scanSource; // @dynamic scanSource;
@property(retain, nonatomic) GPBEnumArray *servicesArray; // @dynamic servicesArray;
@property(readonly, nonatomic) unsigned long long servicesArray_Count; // @dynamic servicesArray_Count;
@property(retain, nonatomic) SCPNLocalTime *time; // @dynamic time;
@property(retain, nonatomic) SCPNSceneIntRequest_TouchPoint *touchPoint; // @dynamic touchPoint;

@end

