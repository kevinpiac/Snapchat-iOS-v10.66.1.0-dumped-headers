//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCRetriableRequestManagerDelegate-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSString, SCRetriableRequestManager, SCSessionRequestManager, SCUserSession;
@protocol SCUnlockablesAuthProvider;

@interface SCGtqNetworkController : NSObject <SCUserSessionScoped, SCRetriableRequestManagerDelegate>
{
    SCUserSession *_userSession;
    SCRetriableRequestManager *_retriableRequestManager;
    SCRetriableRequestManager *_retriableViewRequestManager;
    SCRetriableRequestManager *_retriableCreationRequestManager;
    SCSessionRequestManager *_sessionRequestManager;
    NSString *_host;
    NSString *_serveUnlockablesPath;
    NSString *_viewAdTrackProxyEndpoint;
    NSString *_creationAdTrackProxyEndpoint;
    id <SCUnlockablesAuthProvider> _authProvider;
}

- (void).cxx_destruct;
- (id)_getHost;
- (id)_getServePath;
- (id)_getTrackCreationPath;
- (id)_getTrackViewPath;
- (void)_submitRequest:(id)arg1 performer:(id)arg2 latencyMeasure:(id)arg3 failureMeasure:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6 requestType:(long long)arg7;
- (void)fetchServeUnlockablesRequest:(id)arg1 performer:(id)arg2 referenceId:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)fireGtqAdTrackProxyRequest:(id)arg1 performer:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)fireGtqCreationAdTrackProxyRequest:(id)arg1 performer:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)initWithUserSession:(id)arg1;
- (void)invalidate;
- (void)submitRetryRequest:(id)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

