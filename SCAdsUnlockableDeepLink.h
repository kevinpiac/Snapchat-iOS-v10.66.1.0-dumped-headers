//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBBoolValue, GPBInt64Value;

@interface SCAdsUnlockableDeepLink : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOpenTimestampMs; // @dynamic hasOpenTimestampMs;
@property(nonatomic) _Bool hasRedirectToStore; // @dynamic hasRedirectToStore;
@property(nonatomic) _Bool hasRedirectToWebview; // @dynamic hasRedirectToWebview;
@property(retain, nonatomic) GPBInt64Value *openTimestampMs; // @dynamic openTimestampMs;
@property(retain, nonatomic) GPBBoolValue *redirectToStore; // @dynamic redirectToStore;
@property(retain, nonatomic) GPBBoolValue *redirectToWebview; // @dynamic redirectToWebview;

@end
