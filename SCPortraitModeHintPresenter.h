//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCPortraitModeFaceBoundsView, UILabel;

@interface SCPortraitModeHintPresenter : NSObject
{
    UILabel *_hintLabel;
    SCPortraitModeFaceBoundsView *_faceBoundsView;
}

- (void).cxx_destruct;
- (float)_distanceBetween:(struct CGPoint)arg1 and:(struct CGPoint)arg2;
- (id)_faceBoundsFadeAnimation;
- (void)animateFaceBoundsRectChange:(struct CGRect)arg1;
- (void)hideHintText;
- (id)initWithHintLabel:(id)arg1 faceBoundsView:(id)arg2;
- (void)showHintText:(id)arg1;
- (void)showThenHideFaceBounds;

@end
