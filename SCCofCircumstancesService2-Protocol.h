//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GRPCCallOptions, GRPCUnaryProtoCall, SCCofConfigTargetingRequest;
@protocol GRPCProtoResponseHandler;

@protocol SCCofCircumstancesService2 <NSObject>
- (GRPCUnaryProtoCall *)targetingQueryWithMessage:(SCCofConfigTargetingRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
@end
