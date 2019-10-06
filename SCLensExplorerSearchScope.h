//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCLensExplorerLensActionHandlerFactory, SCLensExplorerSearchWorkflowDelegate, SCUIContainer;

@interface SCLensExplorerSearchScope : NSObject
{
    id <SCUIContainer> _uiContainer;
    id <SCLensExplorerSearchWorkflowDelegate> _workflowDelegate;
    id <SCLensExplorerLensActionHandlerFactory> _actionHandlerFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCLensExplorerLensActionHandlerFactory> actionHandlerFactory; // @synthesize actionHandlerFactory=_actionHandlerFactory;
- (id)initWithUIContainer:(id)arg1 workflowDelegate:(id)arg2 actionHandlerFactory:(id)arg3;
@property(readonly, nonatomic) id <SCUIContainer> uiContainer; // @synthesize uiContainer=_uiContainer;
@property(readonly, nonatomic) __weak id <SCLensExplorerSearchWorkflowDelegate> workflowDelegate; // @synthesize workflowDelegate=_workflowDelegate;

@end
