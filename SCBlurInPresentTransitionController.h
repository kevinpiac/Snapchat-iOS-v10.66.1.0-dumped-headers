//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;

@interface SCBlurInPresentTransitionController : NSObject <UIViewControllerAnimatedTransitioning>
{
    double _transitionTime;
    unsigned long long _transitionOriginalPosition;
}

- (void)animateTransition:(id)arg1;
- (id)init;
@property(nonatomic) unsigned long long transitionOriginalPosition; // @synthesize transitionOriginalPosition=_transitionOriginalPosition;
@property(nonatomic) double transitionTime; // @synthesize transitionTime=_transitionTime;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

