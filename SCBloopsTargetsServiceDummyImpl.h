//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsTargetsService-Protocol.h"

@class NSString;

@interface SCBloopsTargetsServiceDummyImpl : NSObject <SCBloopsTargetsService>
{
}

- (void)deleteUserBloopsTargetWithCallbackPerformer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getFirstExistingBloopsTargetForUsers:(id)arg1 callbackPerformer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)obtainUserBloopsTargetPolicyWithCallbackPerformer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateUserBloopsTarget:(id)arg1 callbackPerformer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateUserBloopsTargetPolicy:(long long)arg1 callbackPerformer:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
