//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerView.h"

@class SCComposerScrollView, SCImpalaProfileOnboardingViewModel;
@protocol SCImpalaProfileOnboardingViewActionHandler;

@interface SCImpalaProfileOnboardingView : SCComposerView
{
}

@property(nonatomic) __weak id <SCImpalaProfileOnboardingViewActionHandler> actionHandler;
- (id)bundleName;
- (id)init;
- (id)initWithViewModel:(id)arg1 componentContext:(id)arg2;
@property(readonly, nonatomic) SCComposerScrollView *scrollView;
@property(retain, nonatomic) SCImpalaProfileOnboardingViewModel *viewModel;
- (id)viewName;

@end

