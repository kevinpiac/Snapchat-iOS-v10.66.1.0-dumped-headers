//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaEventListener-Protocol.h"

@class NSString, SCOperaViewController, SCUserSession, UIView, UIViewController;
@protocol SCChatURLMediaOperaPresenterDelegate;

@interface SCChatURLMediaOperaPresenter : NSObject <SCOperaEventListener>
{
    UIViewController *_presentingViewController;
    UIView *_baseOperaView;
    id <SCChatURLMediaOperaPresenterDelegate> _delegate;
    long long _fromSource;
    SCUserSession *_userSession;
    SCOperaViewController *_operaVC;
    double _browserStartTime;
    long long _browserType;
}

- (void).cxx_destruct;
- (void)_emitBrowserSessionEvent;
- (void)_emitLoadEventWithParams:(id)arg1;
- (void)_handleOperaCloseViewEventWithParams:(id)arg1;
- (void)_handleOperaCloseViewerEvent;
- (void)_handleOperaOpenViewEvent;
- (id)_operaConfigurationForRootViewModel:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 baseOperaView:(id)arg2 delegate:(id)arg3 fromSource:(long long)arg4 userSession:(id)arg5;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)presentURL:(id)arg1;
- (id)registeredEventsForOperaSession;
- (void)viewWillResignActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
