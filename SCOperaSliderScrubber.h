//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface SCOperaSliderScrubber : UIView
{
    UIView *_scrubber;
    double _prevWidth;
    UIColor *_scrubberColor;
    UIColor *_borderColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIColor *scrubberColor; // @synthesize scrubberColor=_scrubberColor;

@end
