//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRPCResponseHandler-Protocol.h"

@class GRPCCall2, GRPCCallOptions, GRPCRequestOptions, NSString;
@protocol GRPCProtoResponseHandler, OS_dispatch_queue;

@interface GRPCStreamingProtoCall : NSObject <GRPCResponseHandler>
{
    GRPCRequestOptions *_requestOptions;
    id <GRPCProtoResponseHandler> _handler;
    GRPCCallOptions *_callOptions;
    Class _responseClass;
    GRPCCall2 *_call;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)didCloseWithTrailingMetadata:(id)arg1 error:(id)arg2;
- (void)didReceiveInitialMetadata:(id)arg1;
- (void)didReceiveRawMessage:(id)arg1;
@property(readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)finish;
- (id)initWithRequestOptions:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3 responseClass:(Class)arg4;
- (void)start;
- (void)writeMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
