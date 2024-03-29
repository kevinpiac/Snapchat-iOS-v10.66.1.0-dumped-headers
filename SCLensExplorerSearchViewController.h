//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCLensExplorerSearchActionHandler-Protocol.h"
#import "SCSearchV2UISubscreenOwner-Protocol.h"

@class NSString, SCLensExplorerSearchView, SCSearchV2UISubscreenTransition;
@protocol SCComposerNetworkingClientProtocol, SCLensExplorerLensActionHandlerFactory, SCLensExplorerSearchWorkflowDelegate;

@interface SCLensExplorerSearchViewController : UIViewController <SCLensExplorerSearchActionHandler, SCSearchV2UISubscreenOwner>
{
    id <SCComposerNetworkingClientProtocol> _networkingClient;
    id <SCLensExplorerLensActionHandlerFactory> _lensActionHandlerFactory;
    id <SCLensExplorerSearchWorkflowDelegate> _workflowDelegate;
    SCSearchV2UISubscreenTransition *_transition;
    SCLensExplorerSearchView *_lensExplorerSearchView;
}

- (void).cxx_destruct;
- (void)_dismiss;
- (id)getSearchSubscreenRootComposerView;
- (id)getSearchSubscreenScrollView;
- (id)getSearchSubscreenSearchBoxView;
- (id)initWithNetworkingClient:(id)arg1 lensActionHandlerFactory:(id)arg2 workflowDelegate:(id)arg3;
- (void)onDragLensExplorerSearchDismiss;
- (void)onSearchSubscreenReadyWithCompletion:(CDUnknownBlockType)arg1;
- (void)onTapLensExplorerSearchDismiss;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

