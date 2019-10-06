//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacChatDockAnimation-Protocol.h"

@class NSString, SCCognacChatDockAppView, SCCognacChatDockAppearAnimationData;

@interface SCCognacChatDockAppearAnimation : NSObject <SCCognacChatDockAnimation>
{
    SCCognacChatDockAppView *_targetView;
    SCCognacChatDockAppearAnimationData *_animationDataModel;
}

- (void).cxx_destruct;
- (void)_performAppearWithParticipantsAnimationWithCompletion:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)_performAppearWithoutParticipantsAnimationWithCompletion:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)cancel;
- (id)initWithTargetView:(id)arg1 animationModel:(id)arg2;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

