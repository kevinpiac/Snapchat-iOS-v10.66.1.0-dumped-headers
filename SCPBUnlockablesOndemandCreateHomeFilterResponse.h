//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCPBUnlockablesOndemandHomeFilterAssetWireModel, SCPBUnlockablesOndemandHomeFilterWireModel;

@interface SCPBUnlockablesOndemandCreateHomeFilterResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHomeFilter; // @dynamic hasHomeFilter;
@property(nonatomic) _Bool hasHomeFilterAsset; // @dynamic hasHomeFilterAsset;
@property(retain, nonatomic) SCPBUnlockablesOndemandHomeFilterWireModel *homeFilter; // @dynamic homeFilter;
@property(retain, nonatomic) SCPBUnlockablesOndemandHomeFilterAssetWireModel *homeFilterAsset; // @dynamic homeFilterAsset;
@property(copy, nonatomic) NSString *status; // @dynamic status;

@end

