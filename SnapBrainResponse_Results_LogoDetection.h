//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SnapBrainResponse_Results_LogoDetection : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) double bucketMultiplier; // @dynamic bucketMultiplier;
@property(retain, nonatomic) NSMutableArray *detectionsArray; // @dynamic detectionsArray;
@property(readonly, nonatomic) unsigned long long detectionsArray_Count; // @dynamic detectionsArray_Count;
@property(retain, nonatomic) NSMutableArray *detectionsDlArray; // @dynamic detectionsDlArray;
@property(readonly, nonatomic) unsigned long long detectionsDlArray_Count; // @dynamic detectionsDlArray_Count;
@property(copy, nonatomic) NSString *modelVersion; // @dynamic modelVersion;

@end

