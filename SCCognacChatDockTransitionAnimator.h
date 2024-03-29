//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCCognacChatDockDataProvider, UIView;
@protocol SCCognacChatDockTransitionAnimatorDataSource;

@interface SCCognacChatDockTransitionAnimator : NSObject
{
    id <SCCognacChatDockTransitionAnimatorDataSource> _animationDataSource;
    SCCognacChatDockDataProvider *_chatDockDataProvider;
    UIView *_chatInputView;
    UIView *_containerView;
    unsigned long long _state;
}

- (void).cxx_destruct;
- (_Bool)animateTransitionToDestinationView:(id)arg1;
- (id)initWithAnimationDataSource:(id)arg1 chatDockDataProvider:(id)arg2 chatInputView:(id)arg3 containerView:(id)arg4;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;

@end

