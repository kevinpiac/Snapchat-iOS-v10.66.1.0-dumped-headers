//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCDocObjectActivityMonitor <NSObject>
- (void)docObjectContextDidDequeueChangesBlockWithDuration:(double)arg1;
- (void)docObjectContextDidEncounterDiskFull;
- (void)docObjectContextDidEncounterError:(struct Error)arg1 fatal:(_Bool)arg2;
- (void)docObjectContextDidExecutePerformChangesWithDuration:(double)arg1;
- (void)docObjectContextDidFetchWithDuration:(double)arg1;
- (void)docObjectContextTransactionCommitDuration:(double)arg1;
@end

