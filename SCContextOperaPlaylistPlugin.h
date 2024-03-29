//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaPlaylistEventTrackerPlugin.h"

#import "SCContextPresenterDelegate-Protocol.h"

@class NSString, SCOperaViewController, SCUserSession;
@protocol NavigationDelegate, SCContextOperaPlaylistPluginDelegate, SCOperaContextMenuOverlayProvider;

@interface SCContextOperaPlaylistPlugin : SCOperaPlaylistEventTrackerPlugin <SCContextPresenterDelegate>
{
    SCUserSession *_userSession;
    SCOperaViewController *_operaVC;
    id <NavigationDelegate> _navigationDelegate;
    id <SCOperaContextMenuOverlayProvider> _contextMenuProvider;
    _Bool _didLeaveAppFromPlayer;
    id <SCContextOperaPlaylistPluginDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)appDidBecomeActiveWhileContextPresented:(id)arg1;
- (void)appWillResignActiveWhileContextPresented:(id)arg1;
- (void)context:(id)arg1 didLeaveApp:(_Bool)arg2;
- (void)contextBeganMediaPresentation:(id)arg1;
- (void)contextCardsViewDidAppear:(id)arg1;
- (void)contextDidDismissSwipeUpContent:(id)arg1;
- (void)contextDidPresentSwipeUpContent:(id)arg1;
- (void)contextFinishedMediaPresentation:(id)arg1;
- (void)contextPresenter:(id)arg1 wantsCTAToBeHidden:(_Bool)arg2;
- (void)contextWillDismissSwipeUpContent:(id)arg1;
- (void)contextWillLeaveApp:(id)arg1;
- (void)contextWillPresentSwipeUpContent:(id)arg1;
@property(nonatomic) __weak id <SCContextOperaPlaylistPluginDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool didLeaveAppFromPlayer; // @synthesize didLeaveAppFromPlayer=_didLeaveAppFromPlayer;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)prepareForContextPresentation:(id)arg1 snapWillBePartiallyVisible:(_Bool)arg2;
- (id)registeredEventsForOperaSession;
- (void)setOperaViewController:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (void)updateOperaConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

