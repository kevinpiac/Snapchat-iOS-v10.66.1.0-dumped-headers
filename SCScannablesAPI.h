//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCScannableActionAPIProtocol-Protocol.h"

@class SCSessionRequestManager, SCUserSession;

@interface SCScannablesAPI : NSObject <SCScannableActionAPIProtocol>
{
    SCSessionRequestManager *_requestManager;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_getActionWithRequest:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)fetchImageWithCompletion:(id)arg1 imageAndDataProxyCallback:(CDUnknownBlockType)arg2 successQueue:(id)arg3 failureQueue:(id)arg4;
- (void)fetchImageWithCompletion:(id)arg1 imageProxyCallback:(CDUnknownBlockType)arg2;
- (void)fetchProxyToken:(CDUnknownBlockType)arg1;
- (void)getActionFromScannableData:(id)arg1 version:(int)arg2 type:(long long)arg3 unlockProperties:(id)arg4 recordScanHistory:(_Bool)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)getActionFromScannableData:(id)arg1 version:(int)arg2 type:(long long)arg3 unlockProperties:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)getActionFromSongInfo:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)initWithRequestManager:(id)arg1 userSession:(id)arg2;
- (_Bool)isReachable;
- (void)requestGhostImage:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

