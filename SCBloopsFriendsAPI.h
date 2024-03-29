//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCQueuePerformer, SCSessionRequestManager;

@interface SCBloopsFriendsAPI : NSObject
{
    SCSessionRequestManager *_requestManager;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)deleteUserBloopsTarget:(CDUnknownBlockType)arg1;
- (void)getUserBloopsTarget:(CDUnknownBlockType)arg1;
- (void)getUsersBloopsTargets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRequestManager:(id)arg1;
- (void)registerUserBloopsTarget:(id)arg1 preprocessedDataDescriptor:(id)arg2 formatVersion:(id)arg3 sdkVersion:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateUserBloopsTargetPolicy:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end

