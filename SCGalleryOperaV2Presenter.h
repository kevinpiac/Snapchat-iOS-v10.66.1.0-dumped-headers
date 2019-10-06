//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryOperaActionHandlerSessionDelegate-Protocol.h"
#import "SCOperaEventListener-Protocol.h"

@class NSString, SCGalleryOperaActionHandlerSession, SCGalleryOperaConfiguration, SCGalleryOperaDataSource, SCGalleryOperaViewingMetricsSession, SCOperaConfiguration, SCOperaEventListenerAnnouncer, SCOperaPerformanceTrackingPlugin, SCOperaPlaybackIntentToNextTrackingPlugin, SCOperaPlaylistPluginsManager, SCOperaViewController, SCUserSession, UIView, UIViewController;
@protocol SCGalleryOperaPresenterV2Delegate;

@interface SCGalleryOperaV2Presenter : NSObject <SCOperaEventListener, SCGalleryOperaActionHandlerSessionDelegate>
{
    SCGalleryOperaDataSource *_dataSource;
    SCGalleryOperaConfiguration *_configuration;
    SCUserSession *_userSession;
    SCOperaViewController *_operaVC;
    SCOperaConfiguration *_operaConfiguration;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    SCGalleryOperaActionHandlerSession *_actionHandlerSession;
    SCOperaPerformanceTrackingPlugin *_operaPerformanceTracker;
    SCOperaPlaybackIntentToNextTrackingPlugin *_operaPlaybackIntentToNextPlugin;
    SCOperaPlaylistPluginsManager *_playlistPluginManager;
    SCGalleryOperaViewingMetricsSession *_viewingMetricsSession;
    _Bool _isInOperaActionMenu;
    _Bool _isInPresentationAnimation;
    UIView *_sourceView;
    UIViewController *_fromViewController;
    CDUnknownBlockType _presentationCompletionHandler;
    double _topInset;
    NSString *_sourcePageName;
    id <SCGalleryOperaPresenterV2Delegate> _delegate;
}

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_didOpenCurrentSnap:(id)arg1;
- (void)_didStartToBrowseFromContext:(id)arg1;
- (void)_ensureOperaIsInActionMenu:(_Bool)arg1;
- (id)_registeredEventsForOperaSession;
- (void)_setupGalleryOperaSessions;
- (void)_setupGeneralOperaPlugins;
- (void)_setupOperaVC;
- (void)_updateRotateVideoPinchStartStateFromContext:(id)arg1;
- (void)actionHandlerSessionDismissOpera:(id)arg1;
- (_Bool)actionHandlerSessionEnterActionMenuFromLongPress:(id)arg1;
- (void)actionHandlerSessionExitActionMenu:(id)arg1;
@property(nonatomic) __weak id <SCGalleryOperaPresenterV2Delegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithGroups:(id)arg1 initialIndex:(long long)arg2 configuration:(id)arg3 userSession:(id)arg4;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)presentOperaFromViewController:(id)arg1 sourcePageName:(id)arg2 sourceView:(id)arg3 sourceImage:(id)arg4 topInset:(double)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)updateGroups:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

