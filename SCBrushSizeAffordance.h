//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImage;

@interface SCBrushSizeAffordance : UIView
{
    UIColor *_color;
    NSString *_emoji;
    UIImage *_pinchImage;
}

- (void).cxx_destruct;
- (id)_recoloredImage:(id)arg1 color:(id)arg2;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)drawRect:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIImage *pinchImage; // @synthesize pinchImage=_pinchImage;
- (void)setWidth:(double)arg1 withCenter:(struct CGPoint)arg2;

@end

