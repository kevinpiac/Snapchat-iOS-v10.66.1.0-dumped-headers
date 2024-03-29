//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSendFlowMetricsEmitting-Protocol.h"

@class NSString, SCLogger;

@interface SCSendFlowMetricsEmitter : NSObject <SCSendFlowMetricsEmitting>
{
    SCLogger *_scLogger;
}

- (void).cxx_destruct;
- (void)_logMessageSendConnectivity:(id)arg1;
- (void)_logMessageSendError:(id)arg1;
- (void)_logMessageSendLatency:(id)arg1;
- (void)_logMessageSendResult:(id)arg1;
- (void)_logMessageSendStepLatency:(id)arg1;
- (id)initWithWithSCLogger:(id)arg1;
- (void)logMediaOrchestration:(id)arg1;
- (void)logSendMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

