//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCCognacTargetingFirstPartyUserWhitelistControl, SCCognacTargetingThirdPartyUserWhitelistControl, SCCognacTargetingUserWhitelistControl;

@interface SCCognacTargetingUserControl : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCCognacTargetingFirstPartyUserWhitelistControl *firstPartyWhitelistControl; // @dynamic firstPartyWhitelistControl;
@property(nonatomic) _Bool hasFirstPartyWhitelistControl; // @dynamic hasFirstPartyWhitelistControl;
@property(nonatomic) _Bool hasThirdPartyWhitelistControl; // @dynamic hasThirdPartyWhitelistControl;
@property(nonatomic) _Bool hasWhitelistControl; // @dynamic hasWhitelistControl;
@property(retain, nonatomic) SCCognacTargetingThirdPartyUserWhitelistControl *thirdPartyWhitelistControl; // @dynamic thirdPartyWhitelistControl;
@property(retain, nonatomic) SCCognacTargetingUserWhitelistControl *whitelistControl; // @dynamic whitelistControl;

@end

