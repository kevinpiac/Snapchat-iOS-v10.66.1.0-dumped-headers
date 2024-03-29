//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCOperaPresenterDelegate-Protocol.h"
#import "SCProfileChatMediaActionMenuActionHandlerDelegate-Protocol.h"
#import "SCProfileChatMediaOperaPresenterDelegate-Protocol.h"
#import "SCUnifiedActionMenuPresenterDelegate-Protocol.h"

@class NSString, SCLazy, SCProfileChatMediaDataSource, SCProfileChatMediaOperaPresenter, SCUnifiedActionMenuPresenter, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCProfileChatMediaFolderActionHandlerDelegate, SCProfileChatMediaFolderPlayerDelegate, SCProfileChatMediaOperaBaseViewProviding;

@interface SCProfileChatMediaFolderActionHandler : NSObject <SCProfileChatMediaOperaPresenterDelegate, SCOperaPresenterDelegate, SCActionHandling, SCUnifiedActionMenuPresenterDelegate, SCProfileChatMediaActionMenuActionHandlerDelegate>
{
    SCProfileChatMediaDataSource *_profileChatMediaDataSource;
    SCUserSession *_userSession;
    SCLazy *_snapchattersDataProvider;
    id <NavigationDelegate> _navigationDelegate;
    NSString *_sessionId;
    unsigned long long _openSource;
    SCLazy *_eraseMessageController;
    SCLazy *_sendMediaController;
    SCLazy *_actionMenuActionHandler;
    SCProfileChatMediaOperaPresenter *_mediaOperaPresenter;
    SCUnifiedActionMenuPresenter *_actionMenuPresenter;
    _Bool _chatMediaIsVisible;
    id <SCProfileChatMediaFolderPlayerDelegate> _playerDelegate;
    id <SCProfileChatMediaFolderActionHandlerDelegate> _actionHandlerDelegate;
    UIViewController *_presentingViewController;
    id <SCProfileChatMediaOperaBaseViewProviding> _baseViewProvider;
}

- (void).cxx_destruct;
- (void)_deleteMedia:(id)arg1;
- (void)_eraseMessage:(id)arg1;
- (void)_presentChatMediaWithId:(id)arg1 baseView:(id)arg2 operaBaseViewProvider:(id)arg3;
- (void)_saveMedia:(id)arg1;
- (void)_saveToCameraRoll:(id)arg1;
- (id)_selectRecipientConfigurationForProfileChatMediaDataModel:(id)arg1;
- (void)_sendTo:(id)arg1;
- (void)_unsaveMedia:(id)arg1;
@property(nonatomic) __weak id <SCProfileChatMediaFolderActionHandlerDelegate> actionHandlerDelegate; // @synthesize actionHandlerDelegate=_actionHandlerDelegate;
@property(nonatomic) __weak id <SCProfileChatMediaOperaBaseViewProviding> baseViewProvider; // @synthesize baseViewProvider=_baseViewProvider;
- (void)dismissProfileChatMediaActionMenuActionHandler:(id)arg1;
- (void)handleActionFromProfileChatMediaActionMenuActionHandler:(id)arg1 actionModel:(id)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithProfileChatMediaDataSource:(id)arg1 userSession:(id)arg2 snapchattersDataProvider:(id)arg3 navigationDelegate:(id)arg4 sessionId:(id)arg5 openSource:(unsigned long long)arg6;
- (_Bool)isChatMediaCellVisible;
- (_Bool)isPresentingChatMedia;
- (void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)operaPresenterDidCancelDismissing:(id)arg1;
- (void)operaPresenterDidFailToPresent:(id)arg1;
- (void)operaPresenterDidFinishDismissing:(id)arg1;
- (void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidTearDown:(id)arg1;
- (void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1;
- (void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2;
@property(nonatomic) __weak id <SCProfileChatMediaFolderPlayerDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)savedInChatMediaOperaPresenter:(id)arg1 didBeginPlayingChatMediaWithId:(id)arg2;
- (void)savedInChatMediaOperaPresenterDidTearDown:(id)arg1;
- (void)unifiedActionMenuPresenterDidDismiss:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

