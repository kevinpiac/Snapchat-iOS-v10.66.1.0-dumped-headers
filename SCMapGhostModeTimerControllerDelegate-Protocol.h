//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCMapGhostModeTimerController;

@protocol SCMapGhostModeTimerControllerDelegate
- (void)ghostModeTimerController:(SCMapGhostModeTimerController *)arg1 wantsToRefreshLocationSharingPreferencesWithCompletion:(void (^)(SCMTGetShareLocationPreferencesResponse *))arg2;
- (void)ghostModeTimerControllerWantsToExitGhostMode:(SCMapGhostModeTimerController *)arg1;
@end

