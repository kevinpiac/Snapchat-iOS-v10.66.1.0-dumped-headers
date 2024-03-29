//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSMutableSet, NSString, SCCognacAvatarService;
@protocol SCCognacChatDockPresenceUpdateAnimationHandlerDelegate;

@interface SCCognacChatDockPresenceUpdateAnimationHandler : NSObject <SCActionHandling>
{
    SCCognacAvatarService *_avatarService;
    id <SCCognacChatDockPresenceUpdateAnimationHandlerDelegate> _delegate;
    NSMutableSet *_runningAvatarAnimations;
    NSMutableSet *_avatarAnimationPool;
}

- (void).cxx_destruct;
- (id)_fetchAvatarAnimationWithAnimationModel:(id)arg1 sourceView:(id)arg2;
- (void)_performAppPositionUpAnimationWithSourceView:(id)arg1;
- (void)_performAvatarAnimationWithAnimationModel:(id)arg1 sourceView:(id)arg2;
- (void)_recycleAvatarAnimation:(id)arg1;
- (void)clear;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithAvatarService:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

