//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class MLBAmbaError_AmbaAssertError, MLBAmbaError_AmbaCpuException, MLBLinuxCrash;

@interface MLBAmbaError : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) MLBAmbaError_AmbaAssertError *ambaAssert; // @dynamic ambaAssert;
@property(retain, nonatomic) MLBAmbaError_AmbaCpuException *ambaException; // @dynamic ambaException;
@property(nonatomic) _Bool hasAmbaAssert; // @dynamic hasAmbaAssert;
@property(nonatomic) _Bool hasAmbaException; // @dynamic hasAmbaException;
@property(nonatomic) _Bool hasLinuxCrash; // @dynamic hasLinuxCrash;
@property(retain, nonatomic) MLBLinuxCrash *linuxCrash; // @dynamic linuxCrash;

@end

