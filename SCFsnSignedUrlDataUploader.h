//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataUploading-Protocol.h"

@class NSString, SCQueuePerformer, SCRefreshAheadBuffer;
@protocol SCRequestManager;

@interface SCFsnSignedUrlDataUploader : NSObject <SCDataUploading>
{
    SCQueuePerformer *_performer;
    SCRefreshAheadBuffer *_urlBuffer;
    id <SCRequestManager> _requestManager;
}

- (void).cxx_destruct;
- (id)initWithUrlBuffer:(id)arg1 requestManager:(id)arg2;
- (void)uploadData:(id)arg1 uniqueMediaId:(id)arg2 callbackPerformer:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
