//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCProgressReceiving-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, SCCachingMediaRequest;

@interface SCCachingMediaRequestGroup : NSObject <SCProgressReceiving>
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completionHandler;
    NSMutableArray *_requests;
    id <SCCachingMediaRequest> _upstreamRequest;
}

- (void).cxx_destruct;
- (void)addRequest:(id)arg1;
- (id)initWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)perform:(id)arg1 fromCache:(_Bool)arg2 sourceLevel:(long long)arg3 final:(_Bool)arg4;
- (void)performCacheMiss;
- (void)removeRequest:(id)arg1;
- (void)reporterWithIdentifier:(id)arg1 didReportProgress:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) id <SCCachingMediaRequest> upstreamRequest; // @synthesize upstreamRequest=_upstreamRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

