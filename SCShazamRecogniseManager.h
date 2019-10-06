//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, SCQueuePerformer, SCSentinel, SCUserSession;

@interface SCShazamRecogniseManager : NSObject <SCUserSessionScoped>
{
    SCUserSession *_userSession;
    SCSentinel *_userSessionSentinel;
    SCQueuePerformer *_performer;
    NSMutableArray *_requestItems;
    NSMutableSet *_runningRequestItems;
}

- (void).cxx_destruct;
- (void)_addRequestItem:(id)arg1;
- (void)_completeRequestItem:(id)arg1 withSucceeded:(_Bool)arg2 cancelled:(_Bool)arg3 songInfo:(id)arg4 error:(id)arg5;
- (void)_getDataForRequestItem:(id)arg1;
- (_Bool)_isInvalidated;
- (void)_runNextRequestItemIfNeeded;
- (void)_runRequestItem:(id)arg1;
- (void)_setup;
- (void)_submitNetworkRequestForRequestItem:(id)arg1 withSig:(id)arg2;
- (void)_submitSIGXRequestForRequestItem:(id)arg1 withData:(id)arg2;
- (id)initWithUserSession:(id)arg1;
- (void)invalidate;
- (void)submitRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
