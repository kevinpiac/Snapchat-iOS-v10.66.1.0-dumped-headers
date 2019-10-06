//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GRPCProtoService.h"

#import "SCPNSceneIntService-Protocol.h"
#import "SCPNSceneIntService2-Protocol.h"

@class NSString;

@interface SCPNSceneIntService : GRPCProtoService <SCPNSceneIntService, SCPNSceneIntService2>
{
}

+ (id)serviceWithHost:(id)arg1;
+ (id)serviceWithHost:(id)arg1 callOptions:(id)arg2;
- (id)RPCToSceneIntStreamWithRequest:(id)arg1 eventHandler:(CDUnknownBlockType)arg2;
- (id)RPCToSceneIntWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 callOptions:(id)arg2;
- (id)initWithHost:(id)arg1 packageName:(id)arg2 serviceName:(id)arg3;
- (id)initWithHost:(id)arg1 packageName:(id)arg2 serviceName:(id)arg3 callOptions:(id)arg4;
- (id)sceneIntStreamWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (void)sceneIntStreamWithRequest:(id)arg1 eventHandler:(CDUnknownBlockType)arg2;
- (id)sceneIntWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (void)sceneIntWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
