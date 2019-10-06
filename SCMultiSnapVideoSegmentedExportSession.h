//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, NSMutableArray, SCMultiSnapVideoSegmentedExportSessionTask, SCQueuePerformer;

@interface SCMultiSnapVideoSegmentedExportSession : NSObject
{
    AVAsset *_videoAsset;
    SCQueuePerformer *_performer;
    SCMultiSnapVideoSegmentedExportSessionTask *_runningTask;
    NSMutableArray *_pendingTasks;
}

- (void).cxx_destruct;
- (void)_callbackForTask:(id)arg1;
- (void)_runNextTaskIfNeeded;
- (void)_runTask:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)batchExportSegmentsForTimeRanges:(id)arg1 outputUrls:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancelExport;
- (void)exportSegmentsForTimeRanges:(id)arg1 outputUrls:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithVideoAsset:(id)arg1;

@end
