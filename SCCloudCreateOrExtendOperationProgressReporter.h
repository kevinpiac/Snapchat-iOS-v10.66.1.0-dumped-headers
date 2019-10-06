//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCloudSyncProgressReceiving-Protocol.h"
#import "SCCloudSyncProgressReporting-Protocol.h"

@class NSMutableDictionary, NSProgress, NSString;
@protocol OS_dispatch_queue, SCCloudSyncProgressReceiving;

@interface SCCloudCreateOrExtendOperationProgressReporter : NSObject <SCCloudSyncProgressReceiving, SCCloudSyncProgressReporting>
{
    NSObject<OS_dispatch_queue> *_upStreamQueue;
    CDUnknownBlockType _upStreamHandler;
    id <SCCloudSyncProgressReceiving> _progressReceiver;
    NSProgress *_progress;
    NSMutableDictionary *_progresses;
}

- (void).cxx_destruct;
- (id)initWithReporterQueue:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak id <SCCloudSyncProgressReceiving> progressReceiver; // @synthesize progressReceiver=_progressReceiver;
- (void)reporterWithIdentifier:(id)arg1 didReportFractionCompleted:(float)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

