//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMessageReceiveListener-Protocol.h"

@class NSString, SCLazy, SCQueuePerformer;

@interface SCSCCPReconnectedSignalCollector : NSObject <SCChatMessageReceiveListener>
{
    SCQueuePerformer *_performer;
    SCLazy *_retrySignalAnnouncerLazy;
}

- (void).cxx_destruct;
- (void)didReceiveMischiefs:(id)arg1 conversations:(id)arg2 username:(id)arg3 fetchContext:(id)arg4;
- (void)didReceiveWireMessage:(id)arg1;
- (id)initWithRetrySignalAnnouncerLazy:(id)arg1;
- (void)updateSCCPConnectivityStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

