//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerPrompter-Protocol.h"

@class NSString, SCAlertViewCoordinator;

@interface SCLensExplorerPrompter : NSObject <SCLensExplorerPrompter>
{
    SCAlertViewCoordinator *_alertViewCoordinator;
}

- (void).cxx_destruct;
- (void)_presentInfoAlertWithAttributedDescription:(id)arg1 dismissButtonTitle:(id)arg2 dismissActionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithAlertViewCoordinator:(id)arg1;
- (void)presentDefaultErrorMessageWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentErrorPromptWithMessage:(id)arg1;
- (void)presentLensChallengesDisclaimerAlert;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
