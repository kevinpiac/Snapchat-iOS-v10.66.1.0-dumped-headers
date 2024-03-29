//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCPBUnlockablesOndemandHomeFilterAddress, SCPBUnlockablesOndemandHomeFilterTargeting;

@interface SCPBUnlockablesOndemandCreateHomeFilterRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *adAccountId; // @dynamic adAccountId;
@property(retain, nonatomic) SCPBUnlockablesOndemandHomeFilterAddress *address; // @dynamic address;
@property(copy, nonatomic) NSString *assetBase64Str; // @dynamic assetBase64Str;
@property(copy, nonatomic) NSString *assetName; // @dynamic assetName;
@property(copy, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(copy, nonatomic) NSString *categoryName; // @dynamic categoryName;
@property(nonatomic) _Bool hasAddress; // @dynamic hasAddress;
@property(nonatomic) _Bool hasTargeting; // @dynamic hasTargeting;
@property(nonatomic) _Bool isEnabled; // @dynamic isEnabled;
@property(retain, nonatomic) SCPBUnlockablesOndemandHomeFilterTargeting *targeting; // @dynamic targeting;
@property(copy, nonatomic) NSString *templateId; // @dynamic templateId;
@property(copy, nonatomic) NSString *templateInstanceId; // @dynamic templateInstanceId;

@end

