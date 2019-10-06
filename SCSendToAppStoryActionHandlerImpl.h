//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCSendToAppStoryActionHandler-Protocol.h"

@class NSString, SCSendToSelectionStateManager, SCSendToStoriesDataSource, SCUserSession, UIViewController;
@protocol SCSearchContentViewControlling;

@interface SCSendToAppStoryActionHandlerImpl : NSObject <SCActionHandling, SCSendToAppStoryActionHandler>
{
    SCSendToSelectionStateManager *_selectionStateManager;
    SCSendToStoriesDataSource *_storiesDataSource;
    SCUserSession *_userSession;
    UIViewController<SCSearchContentViewControlling> *_presentingViewController;
}

- (void).cxx_destruct;
- (void)_handleConnectFromSnapchatWithApplicationId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleSelectAppStoryForDataModel:(id)arg1;
- (void)_setSelectionStateForItemType:(long long)arg1 itemId:(id)arg2 selected:(_Bool)arg3;
- (void)_showAuthorizationMenuForAppStoryInDataModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 selectionStateManager:(id)arg2 storiesDataSource:(id)arg3;
@property(nonatomic) __weak UIViewController<SCSearchContentViewControlling> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

