//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerView.h"

@class SCComposerScrollView, SCImpalaPublicProfileViewModel;

@interface SCImpalaPublicProfileView : SCComposerView
{
}

- (id)bundleName;
@property(readonly, nonatomic) SCComposerView *errorView;
@property(readonly, nonatomic) SCComposerView *headerBar;
- (id)init;
- (id)initWithViewModel:(id)arg1 componentContext:(id)arg2;
@property(readonly, nonatomic) SCComposerView *mainActionSheet;
@property(readonly, nonatomic) SCComposerScrollView *scrollView;
@property(readonly, nonatomic) SCComposerView *secondaryActionSheet;
@property(retain, nonatomic) SCImpalaPublicProfileViewModel *viewModel;
@property(readonly, nonatomic) SCComposerView *tabViewSection;
- (id)viewName;

@end

