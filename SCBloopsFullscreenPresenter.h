//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsReenactmentServiceOutput-Protocol.h"
#import "SCOperaEventListener-Protocol.h"

@class NSString, SCBloopsFullscreenDataSource, SCOperaConfiguration, SCOperaEventListenerAnnouncer, SCOperaViewController, SCUserSession, UIView;
@protocol SCBloopsFullscreenPresenterDelegate, SCBloopsReenactmentService;

@interface SCBloopsFullscreenPresenter : NSObject <SCOperaEventListener, SCBloopsReenactmentServiceOutput>
{
    SCUserSession *_userSession;
    SCOperaViewController *_operaVC;
    SCOperaConfiguration *_operaConfiguration;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    SCBloopsFullscreenDataSource *_dataSource;
    _Bool _isInPresentationAnimation;
    UIView *_sourceView;
    CDUnknownBlockType _presentationCompletionHandler;
    NSString *_sourcePageName;
    id <SCBloopsReenactmentService> _bloopsReenactmentService;
    _Bool _keepMuteOverrideOnDismiss;
    id <SCBloopsFullscreenPresenterDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didStartToBrowseFromContext:(id)arg1;
- (id)_operaConfigurationForRootViewModel:(id)arg1;
- (unsigned long long)_pageIndexFromModel:(id)arg1;
- (id)_registeredEventsForOperaSession;
- (void)_setupOperaVC;
- (void)bloopsReenactmentService:(id)arg1 didFailReenactmentResultForModel:(id)arg2 withError:(id)arg3;
- (void)bloopsReenactmentService:(id)arg1 isReadyToShowReenactmentResult:(id)arg2;
@property(nonatomic) __weak id <SCBloopsFullscreenPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissFullscreenWithAnimation:(_Bool)arg1;
- (id)initWithItems:(id)arg1 bloopsReenactmentService:(id)arg2 initialIndex:(unsigned long long)arg3 userSession:(id)arg4;
@property(nonatomic) _Bool keepMuteOverrideOnDismiss; // @synthesize keepMuteOverrideOnDismiss=_keepMuteOverrideOnDismiss;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)presentOperaFromViewController:(id)arg1 sourcePageName:(id)arg2 sourceView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
