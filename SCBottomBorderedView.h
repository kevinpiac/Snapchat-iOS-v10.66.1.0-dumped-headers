//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface SCBottomBorderedView : UIView
{
    UIView *_bottomBorder;
    UIColor *_borderColor;
    double _borderThickness;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderThickness; // @synthesize borderThickness=_borderThickness;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
