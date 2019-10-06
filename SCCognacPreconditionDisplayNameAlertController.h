//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, SCAlertView, SCAlertViewActionButtonController, SCAlertViewActionTextFieldController, SCCognacBlizzardEventLoggingController;
@protocol SCCognacPreconditionDisplayNameAlertControllerDelegate;

@interface SCCognacPreconditionDisplayNameAlertController : NSObject <UITextFieldDelegate>
{
    SCCognacBlizzardEventLoggingController *_eventLoggingController;
    SCAlertView *_displayNameAlertView;
    SCAlertViewActionTextFieldController *_displayNameTextFieldController;
    SCAlertViewActionButtonController *_displayNameSaveButtonController;
    SCAlertView *_leaveAlertView;
    id <SCCognacPreconditionDisplayNameAlertControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_dismissCurrentAlert;
- (_Bool)_isDisplayNameInputValid;
- (void)_logAlertEventWithEventName:(id)arg1 alertType:(long long)arg2;
- (CDUnknownBlockType)_makeAlertConfigurationWithDismissOnAction:(_Bool)arg1;
- (CDUnknownBlockType)_makeDisplayNameSaveButtonActionHandler;
- (id)_makeProcessedDisplayNameWithFirstName:(id)arg1 lastName:(id)arg2;
- (void)_presentDisplayNameAlert;
- (void)_presentLeaveAlert;
@property(nonatomic) __weak id <SCCognacPreconditionDisplayNameAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissAlert;
- (id)initWithEventLoggingController:(id)arg1;
- (_Bool)isPresentingAlert;
- (_Bool)presentAlert;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
