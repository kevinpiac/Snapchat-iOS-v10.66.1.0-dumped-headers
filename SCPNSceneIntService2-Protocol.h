//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GRPCCallOptions, GRPCUnaryProtoCall, SCPNSceneIntRequest;
@protocol GRPCProtoResponseHandler;

@protocol SCPNSceneIntService2 <NSObject>
- (GRPCUnaryProtoCall *)sceneIntStreamWithMessage:(SCPNSceneIntRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)sceneIntWithMessage:(SCPNSceneIntRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
@end

