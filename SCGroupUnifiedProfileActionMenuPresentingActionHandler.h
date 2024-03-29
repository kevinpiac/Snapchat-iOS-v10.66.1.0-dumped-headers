//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCGroupUnifiedProfileActionMenuActionHandlerDelegate-Protocol.h"
#import "SCUnifiedActionMenuPresenterDelegate-Protocol.h"

@class NSString, SCGroupUnifiedProfileDataSource, SCUnifiedActionMenuPresenter, SCUnifiedProfileMyStoriesDataSourceManager, SCUserSession, UIViewController;
@protocol SCGroupUnifiedProfileActionMenuPresentingActionHandlerDelegate;

@interface SCGroupUnifiedProfileActionMenuPresentingActionHandler : NSObject <SCGroupUnifiedProfileActionMenuActionHandlerDelegate, SCUnifiedActionMenuPresenterDelegate, SCActionHandling>
{
    SCGroupUnifiedProfileDataSource *_dataSource;
    SCUnifiedProfileMyStoriesDataSourceManager *_myStoriesDataSourceManager;
    SCUserSession *_userSession;
    SCUnifiedActionMenuPresenter *_actionMenuPresenter;
    UIViewController *_presentingViewController;
    id <SCGroupUnifiedProfileActionMenuPresentingActionHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_presentActionMenu;
- (void)_presentMenuViewWithDataProvider:(id)arg1;
- (void)_presentMyStoriesActionMenu;
- (void)_presentStoryActionMenu;
@property(nonatomic) __weak id <SCGroupUnifiedProfileActionMenuPresentingActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissActionMenu;
- (void)dismissGroupUnifiedProfileActionMenuForActionHandler:(id)arg1;
- (void)handleActionFromGroupUnifiedProfileActionHandler:(id)arg1 actionModel:(id)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithDataSource:(id)arg1 myStoriesDataSourceManager:(id)arg2 userSession:(id)arg3;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)unifiedActionMenuPresenterDidDismiss:(id)arg1;
- (void)unifiedActionMenuPresenterWillDismiss:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

