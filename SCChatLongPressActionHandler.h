//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, SCChatInputViewController, SCLazy, UIViewController;
@protocol SCChatUIActionHandling;

@interface SCChatLongPressActionHandler : NSObject <SCActionHandling>
{
    UIViewController *_presentingViewController;
    id <SCChatUIActionHandling> _actionHandler;
    SCChatInputViewController *_inputController;
    SCLazy *_actionMenuViewController;
}

- (void).cxx_destruct;
- (void)_deleteMessageForActionData:(id)arg1;
- (void)_didDismissAlertController;
- (_Bool)_handleDeleteMessageActionModel:(id)arg1;
- (_Bool)_handlePresentActionMenuWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithPresentingViewController:(id)arg1 inputController:(id)arg2 actionHandler:(id)arg3 actionMenuViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

