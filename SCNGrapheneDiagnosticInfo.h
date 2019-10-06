//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNGrapheneDiagnosticInfo : NSObject
{
    int _enqueueOps;
    int _compactionOps;
    int _countersSize;
    int _timersSize;
    int _histogramsSize;
    int _enqueueIntervalMs;
    int _flushIntervalMs;
}

+ (id)DiagnosticInfoWithEnqueueOps:(int)arg1 compactionOps:(int)arg2 countersSize:(int)arg3 timersSize:(int)arg4 histogramsSize:(int)arg5 enqueueIntervalMs:(int)arg6 flushIntervalMs:(int)arg7;
@property(readonly, nonatomic) int compactionOps; // @synthesize compactionOps=_compactionOps;
@property(readonly, nonatomic) int countersSize; // @synthesize countersSize=_countersSize;
- (id)description;
@property(readonly, nonatomic) int enqueueIntervalMs; // @synthesize enqueueIntervalMs=_enqueueIntervalMs;
@property(readonly, nonatomic) int enqueueOps; // @synthesize enqueueOps=_enqueueOps;
@property(readonly, nonatomic) int flushIntervalMs; // @synthesize flushIntervalMs=_flushIntervalMs;
@property(readonly, nonatomic) int histogramsSize; // @synthesize histogramsSize=_histogramsSize;
- (id)initWithEnqueueOps:(int)arg1 compactionOps:(int)arg2 countersSize:(int)arg3 timersSize:(int)arg4 histogramsSize:(int)arg5 enqueueIntervalMs:(int)arg6 flushIntervalMs:(int)arg7;
@property(readonly, nonatomic) int timersSize; // @synthesize timersSize=_timersSize;

@end
