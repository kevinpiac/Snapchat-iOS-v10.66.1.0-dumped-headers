//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString;
@protocol SCActionHandling;

@interface SCUnifiedProfileHeaderIconView : UIView <SCActionable, SCViewModelConfigurable>
{
    UIView *_buttonView;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
}

- (void).cxx_destruct;
- (void)_handleIconTap:(id)arg1;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (struct CGSize)intrinsicContentSize;
- (void)setUseLargeTouchArea:(_Bool)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void)updateAlphaIfShouldDisappearOnProfileScroll:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
