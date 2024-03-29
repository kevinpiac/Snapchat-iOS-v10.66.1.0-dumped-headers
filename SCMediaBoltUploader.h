//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMediaUploader-Protocol.h"

@class NSString, SCBoltUploadManager, SCMediaUploadMetadataManager, SCQueuePerformer;

@interface SCMediaBoltUploader : NSObject <SCMediaUploader>
{
    SCBoltUploadManager *_uploadManager;
    SCQueuePerformer *_performer;
    SCMediaUploadMetadataManager *_uploadMetadataManager;
}

- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
- (id)initWithBoltUploadManager:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)uploadMedia:(id)arg1 dataToUpload:(id)arg2 callbackQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)uploadMetadataFetcher;
- (id)uploadMetadataMutator;
- (id)uploadMetadataTracker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

