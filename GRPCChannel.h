//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GRPCChannelConfiguration;

@interface GRPCChannel : NSObject
{
    GRPCChannelConfiguration *_configuration;
    struct grpc_channel *_unmanagedChannel;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithChannelConfiguration:(id)arg1;
- (struct grpc_call *)unmanagedCallWithPath:(id)arg1 completionQueue:(id)arg2 callOptions:(id)arg3;

@end

