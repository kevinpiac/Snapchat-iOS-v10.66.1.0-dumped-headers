//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIColor, UIFont, UILabel;

@interface SCPreviewTooltipBalloon : UIView
{
    UIView *_triangle;
    UILabel *_textLabel;
    _Bool _triangleHidden;
    UIView *_contentView;
    double _verticalPadding;
    double _horizontalPadding;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)fadeInAndOutWithDuration:(double)arg1;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)runPopupAnimation;
- (void)setBackgroundColor:(id)arg1;
- (void)setShadowOpacity:(double)arg1;
@property(copy, nonatomic) NSString *text;
- (void)setTextAlignment:(long long)arg1;
@property(copy, nonatomic) UIColor *textColor;
@property(copy, nonatomic) UIFont *textFont;
@property(nonatomic) long long textNumberOfLines;
@property(copy, nonatomic) UIColor *triangleColor;
- (void)setTriangleHidden:(_Bool)arg1;
- (void)setTrianglePosition:(long long)arg1 withOffset:(double)arg2;
@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
- (long long)textAlignment;

@end
