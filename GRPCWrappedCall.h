//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GRPCPooledChannel;

@interface GRPCWrappedCall : NSObject
{
    GRPCPooledChannel *_pooledChannel;
    struct grpc_call *_call;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)channelDisconnected;
- (void)dealloc;
- (id)initWithUnmanagedCall:(struct grpc_call *)arg1 pooledChannel:(id)arg2;
- (void)startBatchWithOperations:(id)arg1;
- (void)startBatchWithOperations:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;

@end

