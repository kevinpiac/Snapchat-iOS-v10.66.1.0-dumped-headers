//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCR2TimedScope;

@interface SCR2RequestTrace : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRootScope; // @dynamic hasRootScope;
@property(retain, nonatomic) SCR2TimedScope *rootScope; // @dynamic rootScope;
@property(nonatomic) int totalElapsedMs; // @dynamic totalElapsedMs;
@property(nonatomic) int totalProcessCpuMs; // @dynamic totalProcessCpuMs;

@end

