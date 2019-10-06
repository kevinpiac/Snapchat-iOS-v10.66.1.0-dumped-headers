//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryStreamingSnapPackageFetching-Protocol.h"

@class NSString, SCCloudFS, SCDataObjectContext, SCQueuePerformer, SCUserSession;
@protocol SCNetworker;

@interface SCGalleryStreamingSnapPackageFetcher : NSObject <SCGalleryStreamingSnapPackageFetching>
{
    SCUserSession *_userSession;
    SCCloudFS *_cloudFS;
    id <SCNetworker> _networker;
    SCDataObjectContext *_dataObjectContext;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)_fetchMediaURLIfNeededForSnap:(id)arg1 snapDetail:(id)arg2 overlayFile:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchOverlayIfNeededForSnap:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_processFetchMediaURLWithServerSnap:(id)arg1 snap:(id)arg2 overlayFile:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchStreamingPackageForSnap:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithPerformer:(id)arg1 uerSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

