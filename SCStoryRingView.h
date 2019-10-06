//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCLazy, SCShapeView;

@interface SCStoryRingView : UIView <SCViewModelConfigurable>
{
    SCShapeView *shapeView;
    struct CGRect _currentFrame;
    SCLazy *_lockIcon;
    id _viewModel;
}

+ (double)insetWithViewModel:(id)arg1;
- (void).cxx_destruct;
- (void)_updateLayerPathWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void)showLockIcon:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
