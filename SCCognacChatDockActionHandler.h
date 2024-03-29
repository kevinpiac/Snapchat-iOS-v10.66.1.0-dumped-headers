//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCCognacChatDockLongPressGestureHandlerDelegate-Protocol.h"

@class NSString, SCCognacBlizzardEventLoggingController, SCCognacChatDockLongPressGestureHandler, SCCognacDataStorage;
@protocol SCCognacChatDockAnimationBaseViewProvider, SCCognacChatDockAppPresenting, SCGroupManager;

@interface SCCognacChatDockActionHandler : NSObject <SCCognacChatDockLongPressGestureHandlerDelegate, SCActionHandling>
{
    id <SCGroupManager> _groupManager;
    SCCognacBlizzardEventLoggingController *_eventLoggingController;
    SCCognacDataStorage *_dataStorage;
    id <SCCognacChatDockAppPresenting> _appPresenter;
    id <SCCognacChatDockAnimationBaseViewProvider> _baseViewProvider;
    SCCognacChatDockLongPressGestureHandler *_longPressGestureHandler;
}

- (void).cxx_destruct;
- (void)_logChatDockEventWithEventName:(id)arg1 appInstance:(id)arg2;
- (void)_openAppWithAppInstance:(id)arg1;
- (void)_openAppWithIndividualContext:(id)arg1;
- (void)chatDockLongPressGestureHandler:(id)arg1 didHideAppInstance:(id)arg2;
- (void)didTapOnCognacMessageViewButton:(id)arg1;
@property(readonly, nonatomic) SCCognacBlizzardEventLoggingController *eventLoggingController; // @synthesize eventLoggingController=_eventLoggingController;
@property(readonly, nonatomic) id <SCGroupManager> groupManager; // @synthesize groupManager=_groupManager;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithPresentingViewController:(id)arg1 appPresenter:(id)arg2 baseViewProvider:(id)arg3 dataStorage:(id)arg4 dataProvider:(id)arg5 serviceCoordinator:(id)arg6 messageHandler:(id)arg7 snapchatterService:(id)arg8 groupManager:(id)arg9 eventLoggingController:(id)arg10;
- (void)logChatDockRemoveEventWithAppInstance:(id)arg1;
@property(readonly, nonatomic) SCCognacChatDockLongPressGestureHandler *longPressGestureHandler; // @synthesize longPressGestureHandler=_longPressGestureHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

