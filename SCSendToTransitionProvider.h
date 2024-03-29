//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, SCSendToDismissTransitionController, SCSendToPresentTransitionController;
@protocol SCModalPresentation;

@interface SCSendToTransitionProvider : NSObject <UIViewControllerTransitioningDelegate>
{
    SCSendToPresentTransitionController *_presentController;
    _Bool _isInteractive;
    SCSendToDismissTransitionController *_dismissController;
    long long _dismissalPanGestureDirection;
    id <SCModalPresentation> _modalPresentationDelegate;
}

- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(readonly, nonatomic) SCSendToDismissTransitionController *dismissController; // @synthesize dismissController=_dismissController;
@property(nonatomic) long long dismissalPanGestureDirection; // @synthesize dismissalPanGestureDirection=_dismissalPanGestureDirection;
- (id)init;
- (id)interactionControllerForDismissal:(id)arg1;
@property(nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
@property(nonatomic) __weak id <SCModalPresentation> modalPresentationDelegate; // @synthesize modalPresentationDelegate=_modalPresentationDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

