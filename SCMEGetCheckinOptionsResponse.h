//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCMECheckinCustomOption, SCMECheckinLocationsConstraint;

@interface SCMEGetCheckinOptionsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *checkinActionmojisArray; // @dynamic checkinActionmojisArray;
@property(readonly, nonatomic) unsigned long long checkinActionmojisArray_Count; // @dynamic checkinActionmojisArray_Count;
@property(retain, nonatomic) NSMutableArray *checkinContextualArray; // @dynamic checkinContextualArray;
@property(readonly, nonatomic) unsigned long long checkinContextualArray_Count; // @dynamic checkinContextualArray_Count;
@property(retain, nonatomic) SCMECheckinCustomOption *checkinCustom; // @dynamic checkinCustom;
@property(retain, nonatomic) NSMutableArray *checkinCustomsArray; // @dynamic checkinCustomsArray;
@property(readonly, nonatomic) unsigned long long checkinCustomsArray_Count; // @dynamic checkinCustomsArray_Count;
@property(retain, nonatomic) NSMutableArray *checkinLocationsArray; // @dynamic checkinLocationsArray;
@property(readonly, nonatomic) unsigned long long checkinLocationsArray_Count; // @dynamic checkinLocationsArray_Count;
@property(retain, nonatomic) NSMutableArray *checkinMoodsArray; // @dynamic checkinMoodsArray;
@property(readonly, nonatomic) unsigned long long checkinMoodsArray_Count; // @dynamic checkinMoodsArray_Count;
@property(retain, nonatomic) SCMECheckinLocationsConstraint *constraint; // @dynamic constraint;
@property(retain, nonatomic) NSMutableArray *extraCheckinLocationsArray; // @dynamic extraCheckinLocationsArray;
@property(readonly, nonatomic) unsigned long long extraCheckinLocationsArray_Count; // @dynamic extraCheckinLocationsArray_Count;
@property(nonatomic) _Bool hasCheckinCustom; // @dynamic hasCheckinCustom;
@property(nonatomic) _Bool hasConstraint; // @dynamic hasConstraint;
@property(retain, nonatomic) NSMutableArray *nonVenueLocationsArray; // @dynamic nonVenueLocationsArray;
@property(readonly, nonatomic) unsigned long long nonVenueLocationsArray_Count; // @dynamic nonVenueLocationsArray_Count;
@property(copy, nonatomic) NSString *suggestedCheckinOptionId; // @dynamic suggestedCheckinOptionId;

@end

