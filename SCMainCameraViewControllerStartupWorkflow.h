//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCCameraViewControllerStartupWorkflow.h"

@interface SCMainCameraViewControllerStartupWorkflow : SCCameraViewControllerStartupWorkflow
{
    _Bool _hasPerformedViewDidFullyAppear;
}

- (void)_initTooltipPriorityResolver:(id)arg1;
- (void)_popVerticalViewsIfNeeded:(id)arg1;
- (void)_showViewPageOnboardingTooltipIfNecessary:(id)arg1;
- (void)configureFeatureDelegates:(id)arg1;
- (void)didSetupVideoPreviewAfterStartingCamera:(id)arg1;
- (void)logPageViewAndStartCameraWhenViewAppears:(id)arg1;
- (void)performApplicationWillEnterForeground:(id)arg1 notification:(id)arg2;
- (void)performInitialization:(id)arg1;
- (void)performViewDidAppear:(id)arg1 atOffset:(double)arg2;
- (void)performViewDidFullyAppear:(id)arg1;
- (void)performViewDidLoad:(id)arg1;
- (void)resetButtons:(id)arg1;
- (void)setNavigationItemsAlpha:(id)arg1 alpha:(double)arg2;
- (void)setNavigationItemsHidden:(id)arg1 includingAlwaysShowItems:(_Bool)arg2 hidden:(_Bool)arg3 withOffset:(_Bool)arg4;
- (_Bool)shouldHandleVolumeButtonEvents:(id)arg1;

@end

