//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerView.h"

@class NSDictionary, SCSearchActionButton, UILabel;

@interface SCImpalaBusinessProfileCardBaseView : SCComposerView
{
}

@property(readonly, nonatomic) SCSearchActionButton *actionButton;
- (id)bundleName;
- (id)init;
- (id)initWithViewModel:(id)arg1 componentContext:(id)arg2;
@property(retain, nonatomic) NSDictionary *viewModel;
@property(readonly, nonatomic) UILabel *subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel;
- (id)viewName;

@end
