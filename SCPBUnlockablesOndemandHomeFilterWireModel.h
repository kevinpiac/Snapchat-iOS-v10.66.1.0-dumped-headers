//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCPBUnlockablesOndemandHomeFilterAddress, SCPBUnlockablesOndemandHomeFilterTargeting;

@interface SCPBUnlockablesOndemandHomeFilterWireModel : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCPBUnlockablesOndemandHomeFilterAddress *address; // @dynamic address;
@property(nonatomic) _Bool hasAddress; // @dynamic hasAddress;
@property(nonatomic) _Bool hasTargeting; // @dynamic hasTargeting;
@property(retain, nonatomic) NSMutableArray *homeFilterAssetsArray; // @dynamic homeFilterAssetsArray;
@property(readonly, nonatomic) unsigned long long homeFilterAssetsArray_Count; // @dynamic homeFilterAssetsArray_Count;
@property(nonatomic) _Bool isEnabled; // @dynamic isEnabled;
@property(retain, nonatomic) SCPBUnlockablesOndemandHomeFilterTargeting *targeting; // @dynamic targeting;

@end
