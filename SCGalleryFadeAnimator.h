//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIView;

@interface SCGalleryFadeAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;
    UIView *_sourceView;
}

- (void).cxx_destruct;
- (void)_dismiss:(id)arg1;
- (void)_present:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initWithSourceView:(id)arg1 presenting:(_Bool)arg2;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

