//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMapTransitionAnimatorDelegate-Protocol.h"

@protocol SCMapTransitionAnimator;

@protocol SCMapPullDownTransitionDelegate <SCMapTransitionAnimatorDelegate>
- (struct CGPoint)destinationCenterForCameraInMapPullDown:(id <SCMapTransitionAnimator>)arg1;
- (struct CGPoint)startingCenterForCameraInMapPullDown:(id <SCMapTransitionAnimator>)arg1;
@end

