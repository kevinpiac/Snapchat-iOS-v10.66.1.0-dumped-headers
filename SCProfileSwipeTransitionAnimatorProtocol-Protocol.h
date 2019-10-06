//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@protocol SCProfileSwipeTransitionAnimatorProtocol <NSObject, UIViewControllerAnimatedTransitioning>
- (void)animateAlongsideTransition:(void (^)(id <UIViewControllerContextTransitioning>))arg1 completion:(void (^)(id <UIViewControllerContextTransitioning>))arg2;
- (void)completeTransition:(_Bool)arg1;
- (_Bool)presenting;
- (void)resetTransplantedViews;
- (void)setPresenting:(_Bool)arg1;
- (void)updateFractionComplete:(double)arg1;
@end

