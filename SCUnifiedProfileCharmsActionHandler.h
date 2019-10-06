//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedActionMenuPresenterDelegate-Protocol.h"

@class NSString, SCCharmsBlizzardLogger, SCCharmsDataCoordinator, SCCharmsViewingDataCoordinator, SCUnifiedActionMenuPresenter, SCUnifiedProfileCharmsFullScreenViewController, SCUnifiedProfileViewController, SCUserSession;
@protocol SCActionHandling;

@interface SCUnifiedProfileCharmsActionHandler : NSObject <SCUnifiedActionMenuPresenterDelegate, SCTraceEnabled, SCActionHandling>
{
    NSString *_profileSessionId;
    SCCharmsDataCoordinator *_charmsDataCoordinator;
    SCCharmsViewingDataCoordinator *_charmsViewingDataCoordinator;
    id <SCActionHandling> _menuActionHandler;
    SCCharmsBlizzardLogger *_charmsBlizzardLogger;
    SCUnifiedProfileCharmsFullScreenViewController *_pageViewController;
    SCUnifiedActionMenuPresenter *_actionMenuPresenter;
    SCUserSession *_userSession;
    SCUnifiedProfileViewController *_unifiedProfileViewController;
}

- (void).cxx_destruct;
- (_Bool)_dismissCharmPageView:(id)arg1;
- (_Bool)_dismissMenuThenHideCharm:(id)arg1;
- (_Bool)_dismissMenuThenPresentBrowserView;
- (_Bool)_dismissMenuThenRestoreCharm:(id)arg1;
- (_Bool)_presentCharmPageView:(id)arg1;
- (_Bool)_presentHiddenCharmsMenu:(id)arg1;
- (void)_presentHiddenCharmsMenuWithInfo:(id)arg1;
- (_Bool)_presentMenu:(id)arg1;
- (_Bool)_setCharmViewed:(id)arg1;
- (void)flushCharmsViewingsDataForOwner:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithProfileSessionId:(id)arg1 charmsDataCoordinator:(id)arg2 charmsViewingDataCoordinator:(id)arg3 menuActionHandler:(id)arg4 charmsBlizzardLogger:(id)arg5 userSession:(id)arg6;
@property(nonatomic) __weak SCUnifiedProfileViewController *unifiedProfileViewController; // @synthesize unifiedProfileViewController=_unifiedProfileViewController;
- (void)unifiedActionMenuPresenterDidDismiss:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
