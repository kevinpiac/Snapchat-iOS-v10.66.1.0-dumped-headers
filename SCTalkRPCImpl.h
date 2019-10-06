//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTalkRPC-Protocol.h"

@class NSString, SCSessionRequestManager;

@interface SCTalkRPCImpl : NSObject <SCTalkRPC>
{
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)_createCallbackForSingleResultBlock:(CDUnknownBlockType)arg1;
- (void)_submitAuthRequestWithDict:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)fetchCognacAuthForConvoId:(id)arg1 cognacId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)fetchSharedARAuthForExperienceId:(id)arg1 participantId:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)fetchTalkAuthForConvoIds:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)initWithRequestManager:(id)arg1;
- (void)sendPushNotification:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

