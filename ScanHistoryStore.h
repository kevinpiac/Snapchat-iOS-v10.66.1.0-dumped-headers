//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSMutableArray, NSString, SCQueuePerformer, SCSessionRequestManager, SCUserSession;
@protocol OS_dispatch_queue;

@interface ScanHistoryStore : NSObject <SCUserSessionScoped>
{
    SCSessionRequestManager *_requestManager;
    NSMutableArray *_scanHistory;
    SCUserSession *_userSession;
    NSObject<OS_dispatch_queue> *_queue;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (_Bool)_isTypeSnapAdPreview:(id)arg1;
- (void)deleteScanHistoryAllWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteScanHistoryWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchScanHistoryWithTimeCreated:(long long)arg1 pageCount:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithRequestManager:(id)arg1 userSession:(id)arg2;
- (void)invalidate;
- (void)resetCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

