//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensCaptureWorkflow-Protocol.h"

@class NSString;
@protocol SCCaptureWorkflow;

@interface SCLensCaptureWorkflowImpl : NSObject <SCLensCaptureWorkflow>
{
    id <SCCaptureWorkflow> _captureWorkflow;
}

- (void).cxx_destruct;
- (void)endWorkflowWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCaptureWorkflow:(id)arg1;
- (void)performConfigurationWithLens:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

