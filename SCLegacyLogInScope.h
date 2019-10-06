//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLoginRegisterFlowContext, UINavigationController;
@protocol SCLegacyLogInWorkflowDelegate;

@interface SCLegacyLogInScope : NSObject
{
    UINavigationController *_navigationController;
    id <SCLegacyLogInWorkflowDelegate> _loginWorkflowDelegate;
    SCLoginRegisterFlowContext *_flowContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLoginRegisterFlowContext *flowContext; // @synthesize flowContext=_flowContext;
- (id)initWithNavigationController:(id)arg1 loginWorkflowDelegate:(id)arg2 flowContext:(id)arg3;
@property(readonly, nonatomic) __weak id <SCLegacyLogInWorkflowDelegate> loginWorkflowDelegate; // @synthesize loginWorkflowDelegate=_loginWorkflowDelegate;
@property(readonly, nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;

@end
