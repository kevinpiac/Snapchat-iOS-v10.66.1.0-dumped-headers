//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpalaPresentationControlling-Protocol.h"

@class NSString, UIViewController;

@interface SCImpalaPresentationController : NSObject <SCImpalaPresentationControlling>
{
    _Bool _forceAnimatedDismiss;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
- (void)dismissWithAnimated:(_Bool)arg1;
@property(nonatomic) _Bool forceAnimatedDismiss; // @synthesize forceAnimatedDismiss=_forceAnimatedDismiss;
- (id)initWithViewController:(id)arg1;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

