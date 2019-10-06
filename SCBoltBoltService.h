//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GRPCProtoService.h"

#import "SCBoltBoltService-Protocol.h"
#import "SCBoltBoltService2-Protocol.h"

@class NSString;

@interface SCBoltBoltService : GRPCProtoService <SCBoltBoltService, SCBoltBoltService2>
{
}

+ (id)serviceWithHost:(id)arg1;
+ (id)serviceWithHost:(id)arg1 callOptions:(id)arg2;
- (id)RPCToadminDeleteContentsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToclaimContentWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToclaimVariantsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCTocreateFromBytesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCTocreateFromReferenceWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCTocreateFromReferencesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCTodeleteContentWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCTogetClientRulesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCTogetContentDescriptorsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCTogetFreshContentObjectWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCTogetFreshContentObjectsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCTogetNetworkMappingWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCTogetUploadLocationsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToreleaseClaimsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)adminDeleteContentsWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (void)adminDeleteContentsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)claimContentWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (void)claimContentWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)claimVariantsWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (void)claimVariantsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)createFromBytesWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (void)createFromBytesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)createFromReferenceWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (void)createFromReferenceWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)createFromReferencesWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (void)createFromReferencesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)deleteContentWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (void)deleteContentWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getClientRulesWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (void)getClientRulesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getContentDescriptorsWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (void)getContentDescriptorsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getFreshContentObjectWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (void)getFreshContentObjectWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getFreshContentObjectsWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (void)getFreshContentObjectsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getNetworkMappingWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (void)getNetworkMappingWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getUploadLocationsWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (void)getUploadLocationsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 callOptions:(id)arg2;
- (id)initWithHost:(id)arg1 packageName:(id)arg2 serviceName:(id)arg3;
- (id)initWithHost:(id)arg1 packageName:(id)arg2 serviceName:(id)arg3 callOptions:(id)arg4;
- (id)releaseClaimsWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (void)releaseClaimsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

