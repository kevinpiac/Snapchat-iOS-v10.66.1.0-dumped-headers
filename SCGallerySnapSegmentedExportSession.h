//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, SCCloudFSFile, SCEncryptedContentManager, SCQueuePerformer;
@protocol OS_dispatch_queue, SCGallerySnap;

@interface SCGallerySnapSegmentedExportSession : NSObject
{
    SCEncryptedContentManager *_encryptedContentManager;
    id <SCGallerySnap> _snap;
    SCCloudFSFile *_cloudFile;
    double _segmentDuration;
    SCQueuePerformer *_performer;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _completionHandler;
    long long _segmentCount;
    NSMutableArray *_segmentURLs;
    NSData *_data;
    _Bool _optimizesForNetworkUse;
}

- (void).cxx_destruct;
- (void)_completeWithSegmentURLs:(id)arg1 error:(id)arg2;
- (void)_exportSegmentAtIndex:(unsigned long long)arg1;
- (void)exportWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithEncryptedContentManager:(id)arg1 snap:(id)arg2 cloudFile:(id)arg3 segmentDuration:(double)arg4;
@property(nonatomic) _Bool optimizesForNetworkUse; // @synthesize optimizesForNetworkUse=_optimizesForNetworkUse;

@end

