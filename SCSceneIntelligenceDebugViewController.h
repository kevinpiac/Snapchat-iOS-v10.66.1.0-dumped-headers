//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCMapModalViewControllerSubclass-Protocol.h"

@class NSString, SCLSIDebugInfoComponentContext, SCLSIDebugInfoComponentView, SCLSIDebugInfoComponentViewModel, SCMapModalViewController;

@interface SCSceneIntelligenceDebugViewController : UIViewController <SCMapModalViewControllerSubclass>
{
    SCLSIDebugInfoComponentViewModel *_viewModel;
    SCLSIDebugInfoComponentContext *_context;
    SCLSIDebugInfoComponentView *_debugInfoView;
}

- (void).cxx_destruct;
- (void)_dissmissTapped;
- (void)_setupComponentContext;
- (void)_setupViewModelWithSceneIntResponse:(id)arg1 image:(id)arg2;
- (id)initWithSceneIntResponse:(id)arg1 image:(id)arg2;
- (_Bool)modalViewController:(id)arg1 panGestureRecognizer:(id)arg2 shouldBeginInView:(id)arg3;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak SCMapModalViewController *parentModalViewController;
@property(readonly) Class superclass;

@end

