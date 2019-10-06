//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacWebProxyAccessTokenProvider-Protocol.h"

@class NSString, SCSnapTokenManager;

@interface SCCognacWebProxySnapTokenProvider : NSObject <SCCognacWebProxyAccessTokenProvider>
{
    SCSnapTokenManager *_snapTokenManager;
}

- (void).cxx_destruct;
- (void)fetchAccessTokenForURL:(id)arg1 resultQueue:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (id)initWithSnapTokenManager:(id)arg1;
- (_Bool)needsAccessTokenForURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

