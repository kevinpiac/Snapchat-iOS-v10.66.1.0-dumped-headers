//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCImpalaProfileOnboardingViewActionHandler-Protocol.h"

@class SCImpalaProfileOnboardingView, SCUserSession, UIVisualEffectView;

@interface SCImpalaProfileOnboardingViewController : UIViewController <SCImpalaProfileOnboardingViewActionHandler>
{
    UIVisualEffectView *_blurView;
    SCImpalaProfileOnboardingView *_onboardingView;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)dismiss:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

@end

