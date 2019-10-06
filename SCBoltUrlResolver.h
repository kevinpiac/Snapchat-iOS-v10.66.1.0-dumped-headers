//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBoltNetworkMappingListener-Protocol.h"

@class NSMutableArray, NSString, NSURL, SCBoltClientRulesProvider, SCBoltNetworkMapping, SCBoltNetworkMappingProvider, SCQueuePerformer, SCUserSession;

@interface SCBoltUrlResolver : NSObject <SCBoltNetworkMappingListener>
{
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
    SCBoltNetworkMappingProvider *_networkMappingProvider;
    SCBoltClientRulesProvider *_clientRulesProvider;
    NSURL *_diskFileURL;
    SCBoltNetworkMapping *_networkMapping;
    NSMutableArray *_pendingItemsToResolve;
}

- (void).cxx_destruct;
- (void)didUpdateNetworkMapping:(id)arg1;
- (void)downloadURLWithContentDescriptor:(id)arg1 callbackPerformer:(id)arg2 urlBlock:(CDUnknownBlockType)arg3;
- (id)initWithDiskFileURL:(id)arg1 networkMappingProvider:(id)arg2 clientRulesProvider:(id)arg3 queuePerformer:(id)arg4 userSession:(id)arg5;
- (void)prefetch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
