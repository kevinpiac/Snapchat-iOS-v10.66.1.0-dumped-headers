//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCSCOREABFeatureLoggingEntry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clientDfSessionId; // @dynamic clientDfSessionId;
@property(copy, nonatomic) NSString *crStudyId; // @dynamic crStudyId;
@property(retain, nonatomic) NSMutableArray *customFeaturesArray; // @dynamic customFeaturesArray;
@property(readonly, nonatomic) unsigned long long customFeaturesArray_Count; // @dynamic customFeaturesArray_Count;
@property(retain, nonatomic) NSMutableArray *firstChangedPositionPerTypeArray; // @dynamic firstChangedPositionPerTypeArray;
@property(readonly, nonatomic) unsigned long long firstChangedPositionPerTypeArray_Count; // @dynamic firstChangedPositionPerTypeArray_Count;
@property(copy, nonatomic) NSString *ghostId; // @dynamic ghostId;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;
@property(retain, nonatomic) NSMutableArray *serverCrPerTypeArray; // @dynamic serverCrPerTypeArray;
@property(readonly, nonatomic) unsigned long long serverCrPerTypeArray_Count; // @dynamic serverCrPerTypeArray_Count;
@property(retain, nonatomic) NSMutableArray *studyCrsArray; // @dynamic studyCrsArray;
@property(readonly, nonatomic) unsigned long long studyCrsArray_Count; // @dynamic studyCrsArray_Count;
@property(copy, nonatomic) NSString *userName; // @dynamic userName;

@end

