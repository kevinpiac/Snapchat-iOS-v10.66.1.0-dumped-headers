//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGrowingButton.h"

@class UIImage;

@interface SCTToggleButton : SCGrowingButton
{
    UIImage *_normalImage;
    UIImage *_pressedImage;
    _Bool _pressed;
}

- (void).cxx_destruct;
- (void)_resetImages;
- (id)initWithNormalImage:(id)arg1 pressedImage:(id)arg2;
- (void)setTogglePressed:(_Bool)arg1;
- (_Bool)togglePressed;

@end

