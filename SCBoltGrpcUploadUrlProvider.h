//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCRefreshAheadItemProviding-Protocol.h"

@class NSString, SCGrpcService, SCSnapTokenManager;

@interface SCBoltGrpcUploadUrlProvider : NSObject <SCRefreshAheadItemProviding>
{
    SCSnapTokenManager *_tokenManager;
    SCGrpcService *_grpcService;
}

- (void).cxx_destruct;
- (id)initWithTokenManager:(id)arg1 grpcService:(id)arg2;
- (void)itemsWithCallbackPerformer:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

