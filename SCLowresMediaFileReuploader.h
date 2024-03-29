//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCService-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSArray, NSString, SCCloudFS, SCCloudSync, SCDataObjectContext, SCLowresMediaFileReuploadLogger, SCQueuePerformer, SCSentinel;
@protocol SCGalleryProfile, SCLowresMediaFileDebugIndicator, SCNetworker;

@interface SCLowresMediaFileReuploader : NSObject <SCService, SCUserSessionScoped>
{
    id <SCGalleryProfile> _profile;
    SCCloudSync *_cloudSync;
    SCCloudFS *_cloudFS;
    id <SCNetworker> _networker;
    SCDataObjectContext *_dataObjectContext;
    SCLowresMediaFileReuploadLogger *_uploadLogger;
    id <SCLowresMediaFileDebugIndicator> _debugIndicator;
    unsigned long long _status;
    SCQueuePerformer *_performer;
    SCSentinel *_invalidateSentinel;
    NSArray *_allSnaps;
    long long _snapIndexToProcess;
}

- (void).cxx_destruct;
- (void)_fetchEligibleSnapsWithServiceTerm:(id)arg1;
- (id)_fileUploadNotifier;
- (_Bool)_isInvalidated;
- (void)_processOneSnapWithServiceTerm:(id)arg1;
- (void)_transitToState:(unsigned long long)arg1 serviceTerm:(id)arg2;
- (void)_updateThumbnailUpdateStateWithSnap:(id)arg1 state:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_uploadThumbnailWithServiceTerm:(id)arg1;
- (id)dedicatedQueue;
- (id)defaultImmediateNotifier;
- (id)defaultLongRunningNotifier;
- (id)initWithProfile:(id)arg1 cloudSync:(id)arg2 cloudFS:(id)arg3 networker:(id)arg4 debugIndicator:(id)arg5 dataObjectContext:(id)arg6;
- (void)invalidate;
- (void)runWithServiceTerm:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

