//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMediaDownloadEntity-Protocol.h"

@class NSString, SCDataObjectContext, SCExperimentManager, SCQueuePerformer, SCSentinel;
@protocol SCGallerySnap, SCGallerySnapDetail, SCMediaDownloadLogger, SCNetworkResumeableDownloadRequest, SCNetworker, SCSyncFileResolver;

@interface SCMediaDownloadSnapMediaEntity : NSObject <SCMediaDownloadEntity>
{
    NSString *_UUID;
    id <SCNetworkResumeableDownloadRequest> _overlayDownloadRequest;
    id <SCNetworkResumeableDownloadRequest> _mediaDownloadRequest;
    id <SCGallerySnap> _snap;
    id <SCGallerySnapDetail> _snapDetail;
    SCQueuePerformer *_performer;
    id <SCNetworker> _networker;
    SCExperimentManager *_experimentManager;
    id <SCSyncFileResolver> _fileResolver;
    id <SCMediaDownloadLogger> _logger;
    SCDataObjectContext *_dataObjectContext;
    SCSentinel *_sentinel;
    CDUnknownBlockType _progressHandler;
}

- (void).cxx_destruct;
- (id)UUID;
- (void)_fetchDownloadMetaDataWithResultHandler:(CDUnknownBlockType)arg1 fetchSnapDetailOnly:(_Bool)arg2;
- (void)_handleSuccessResponseWithResultHandler:(CDUnknownBlockType)arg1;
- (_Bool)_hasAllMetaDataToStartDownload;
- (_Bool)_isCancelled;
- (void)_logDownloadCompletionWithLatencyInSec:(double)arg1 error:(id)arg2 response:(id)arg3;
- (void)_processDownloadURLWithResponse:(id)arg1 fetchSnapDetailOnly:(_Bool)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (_Bool)_requiredMediaAreCached;
- (void)_resumeMediaDataWithResultHandler:(CDUnknownBlockType)arg1;
- (void)_resumeOverlayWithResultHandler:(CDUnknownBlockType)arg1;
- (void)_resumeSnapDataWithResultHandler:(CDUnknownBlockType)arg1;
- (void)cancelByProducingResumeData;
- (id)initWithSnap:(id)arg1 performer:(id)arg2 networker:(id)arg3 experimentManager:(id)arg4 fileResolver:(id)arg5 dataObjectContext:(id)arg6 logger:(id)arg7;
- (void)resumeWithResultHandler:(CDUnknownBlockType)arg1;
- (void)setProgressHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

