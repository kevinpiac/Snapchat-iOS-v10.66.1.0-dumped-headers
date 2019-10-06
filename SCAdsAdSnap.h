//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, SCAdsBottomSnap, SCAdsPoliticalAdInfo, SCAdsTopSnap, SCAdsZipPackageInfo;

@interface SCAdsAdSnap : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int adSnapType; // @dynamic adSnapType;
@property(retain, nonatomic) SCAdsBottomSnap *bottomSnap; // @dynamic bottomSnap;
@property(copy, nonatomic) NSString *brandHeadlineMessage; // @dynamic brandHeadlineMessage;
@property(copy, nonatomic) NSString *brandName; // @dynamic brandName;
@property(copy, nonatomic) NSData *creativeId; // @dynamic creativeId;
@property(nonatomic) _Bool hasBottomSnap; // @dynamic hasBottomSnap;
@property(nonatomic) _Bool hasPoliticalAdInf; // @dynamic hasPoliticalAdInf;
@property(nonatomic) _Bool hasTopSnap; // @dynamic hasTopSnap;
@property(nonatomic) _Bool hasZipPackageInfo; // @dynamic hasZipPackageInfo;
@property(nonatomic) _Bool isSharable; // @dynamic isSharable;
@property(nonatomic) _Bool isUnskippable; // @dynamic isUnskippable;
@property(retain, nonatomic) SCAdsPoliticalAdInfo *politicalAdInf; // @dynamic politicalAdInf;
@property(nonatomic) int skippableType; // @dynamic skippableType;
@property(nonatomic) int slugType; // @dynamic slugType;
@property(retain, nonatomic) SCAdsTopSnap *topSnap; // @dynamic topSnap;
@property(nonatomic) long long unskippableDurationMs; // @dynamic unskippableDurationMs;
@property(retain, nonatomic) SCAdsZipPackageInfo *zipPackageInfo; // @dynamic zipPackageInfo;

@end

