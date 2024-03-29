//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCActionable-Protocol.h"

@class NSString, SCDiscoverFeedOnboardingButtonView, UILabel;
@protocol SCActionHandling;

@interface SCDiscoverFeedGetStartedCoverView : UIView <SCActionable>
{
    UIView *_overlay;
    UILabel *_titleLabel;
    SCDiscoverFeedOnboardingButtonView *_getStartedButton;
    id <SCActionHandling> _actionHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)didTapGetStarted:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

