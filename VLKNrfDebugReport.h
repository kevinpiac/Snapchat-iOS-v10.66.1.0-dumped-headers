//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, VLKNrfDebugReport_AmbaError, VLKNrfDebugReport_AppError, VLKNrfDebugReport_HardfaultError, VLKNrfDebugReport_WatchdogTimeoutError;

@interface VLKNrfDebugReport : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) VLKNrfDebugReport_AmbaError *ambaError; // @dynamic ambaError;
@property(retain, nonatomic) VLKNrfDebugReport_AppError *appError; // @dynamic appError;
@property(retain, nonatomic) VLKNrfDebugReport_HardfaultError *hardfaultError; // @dynamic hardfaultError;
@property(nonatomic) _Bool hasAmbaError; // @dynamic hasAmbaError;
@property(nonatomic) _Bool hasAppError; // @dynamic hasAppError;
@property(nonatomic) _Bool hasHardfaultError; // @dynamic hasHardfaultError;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasWatchdogTimeoutError; // @dynamic hasWatchdogTimeoutError;
@property(copy, nonatomic) NSString *metadata; // @dynamic metadata;
@property(retain, nonatomic) VLKNrfDebugReport_WatchdogTimeoutError *watchdogTimeoutError; // @dynamic watchdogTimeoutError;

@end

