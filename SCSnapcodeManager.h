//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSMutableDictionary, NSString, SCSessionRequestManager;

@interface SCSnapcodeManager : NSObject <SCUserSessionScoped>
{
    NSMutableDictionary *_snapcodesByUsername;
    NSMutableDictionary *_snapcodesByUnlockableId;
    SCSessionRequestManager *_requestManager;
}

+ (void)dispatchCompletionBlock:(CDUnknownBlockType)arg1 queue:(id)arg2 success:(_Bool)arg3;
+ (void)dispatchCompletionBlock:(CDUnknownBlockType)arg1 queue:(id)arg2 success:(_Bool)arg3 withData:(id)arg4;
+ (void)dispatchCompletionBlock:(CDUnknownBlockType)arg1 queue:(id)arg2 success:(_Bool)arg3 withString:(id)arg4;
+ (id)imageFromData:(id)arg1;
+ (void)removeAllWithCompletionBlock:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
+ (void)removeSnapcodeForSnaptagUrl:(id)arg1 contexts:(id)arg2 completionQueue:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)_fetchSnapcodeFromServerWithName:(id)arg1 id:(id)arg2 contexts:(id)arg3 completionQueue:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (void)_saveSnapcodeToCache:(id)arg1 userName:(id)arg2 userInfo:(id)arg3 completionQueue:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (_Bool)containsSnapcodeForSnaptagUrl:(id)arg1;
- (_Bool)containsSnapcodeForUsername:(id)arg1;
- (void)fetchSnapcodeForUnlockableId:(id)arg1 contexts:(id)arg2 completionQueue:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)fetchSnapcodeForUsername:(id)arg1 contexts:(id)arg2 completionQueue:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (id)initWithRequestManager:(id)arg1;
- (void)invalidate;
- (void)setSnapcodeForUnlockables:(id)arg1 snapcodeUuid:(id)arg2 version:(id)arg3;
- (void)setSnaptagForUsername:(id)arg1 newTag:(id)arg2;
- (id)unlockableIdToSnapcode:(id)arg1;
- (id)usernameToSnaptag:(id)arg1;
- (id)usernameToUserId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
