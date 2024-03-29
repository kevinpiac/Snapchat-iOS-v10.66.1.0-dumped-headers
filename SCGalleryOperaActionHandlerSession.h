//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryPrivateGallerySetupFlowDelegate-Protocol.h"
#import "SCOperaEventListener-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSDictionary, NSString, SCGalleryActivityController, SCGalleryOperaConfiguration, SCGalleryPreviewController, SCGalleryPrivateGallerySetupFlow, SCGallerySendController, SCOperaEventListenerAnnouncer, SCOperaViewController, SCQueuePerformer, SCUserSession;
@protocol SCGalleryOperaActionHandlerSessionDelegate, SCGalleryOperaSnapResolving, SCKeyServiceRequest, SCStartChatDelegate;

@interface SCGalleryOperaActionHandlerSession : NSObject <SCOperaEventListener, UIViewControllerTransitioningDelegate, SCGalleryPrivateGallerySetupFlowDelegate>
{
    SCGalleryOperaConfiguration *_configuration;
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
    SCGallerySendController *_sendController;
    SCGalleryActivityController *_activityController;
    SCGalleryPreviewController *_previewController;
    SCGalleryPrivateGallerySetupFlow *_privateGallerySetupFlow;
    NSDictionary *_lastSelectedMEOContext;
    id <SCKeyServiceRequest> _masterKeyRequest;
    SCOperaViewController *_operaVC;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    id <SCGalleryOperaSnapResolving> _operaSnapResolver;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SCGalleryOperaActionHandlerSessionDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_asyncFetchEntryBasedOnSnap:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_asyncFetchSnapsWithEntry:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_createSessionUserContext:(_Bool)arg1 presentingViewController:(id)arg2;
- (void)_handlRemoveSnapFromStoryAction:(long long)arg1 entry:(id)arg2 snap:(id)arg3;
- (void)_handleActionMenuBackupNow;
- (void)_handleActionMenuDeleteForContext:(id)arg1;
- (void)_handleActionMenuEditForContext:(id)arg1;
- (void)_handleActionMenuExportForContext:(id)arg1;
- (void)_handleActionMenuExportForItem:(id)arg1 snap:(id)arg2 shouldPauseVideo:(_Bool)arg3;
- (void)_handleActionMenuHighlightForContext:(id)arg1;
- (void)_handleActionMenuRetryBackupForContext:(id)arg1;
- (void)_handleActionMenuSendForContext:(id)arg1 fromActionMenu:(_Bool)arg2;
- (void)_handleBoomboxForContext:(id)arg1;
- (void)_handleDeleteForGalleryEntry:(id)arg1 snap:(id)arg2;
- (void)_handleDismissForContext:(id)arg1;
- (void)_handleEditForGalleryEntry:(id)arg1 snap:(id)arg2;
- (void)_handleMagicMomentStateChangedWithContext:(id)arg1 params:(id)arg2;
- (void)_handleMagicMomentWithParams:(id)arg1;
- (void)_handleToggleMEOForContext:(id)arg1;
- (void)_makeEntryPrivate:(id)arg1;
- (void)_makeEntryPublic:(id)arg1;
- (void)_makePHAssetPrivate:(id)arg1;
- (void)_prepareAndPresentPreviewControllerWithGallerySnaps:(id)arg1 entry:(id)arg2;
- (id)_registeredEventsForOperaSession;
- (void)_toggleMEOForContext:(id)arg1;
- (id)activityController;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(nonatomic) __weak id <SCGalleryOperaActionHandlerSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithEventAnnouncer:(id)arg1 operaVC:(id)arg2 operaSnapResolver:(id)arg3 configuration:(id)arg4 userSession:(id)arg5;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)previewController;
- (void)privateGallerySetupFlowDidCancel:(id)arg1;
- (void)privateGallerySetupFlowDidFinish:(id)arg1;
- (id)sendController;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

