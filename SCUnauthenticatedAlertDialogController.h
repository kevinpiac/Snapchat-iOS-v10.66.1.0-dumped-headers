//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCUnauthenticatedAlertDialogControllerDelegate, SCUnauthenticatedStyleHelper;

@interface SCUnauthenticatedAlertDialogController : NSObject
{
    id <SCUnauthenticatedStyleHelper> _styleHelper;
    id <SCUnauthenticatedAlertDialogControllerDelegate> _controllerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCUnauthenticatedAlertDialogControllerDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
- (id)initWithDelegate:(id)arg1 styleHelper:(id)arg2;
- (void)showWithTitle:(id)arg1 description:(id)arg2;

@end

