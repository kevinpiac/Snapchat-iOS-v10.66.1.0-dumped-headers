//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GRPCProtoService, NSString;

@interface SCGrpcService : NSObject
{
    NSString *_serverAddress;
    GRPCProtoService *_service;
    Class _serviceClass;
}

- (void).cxx_destruct;
- (void)RPCWithMethod:(id)arg1 request:(id)arg2 callOptions:(id)arg3 responseClass:(Class)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)RPCWithMethod:(SEL)arg1 request:(id)arg2 callOptions:(id)arg3 responseQueue:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (id)initWithOptions:(id)arg1 serviceClass:(Class)arg2;
- (void)setupHostConfigWithServiceOptions:(id)arg1;
- (void)updateServerAddress:(id)arg1;

@end

