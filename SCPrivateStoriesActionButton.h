//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SIGScaleAnimationButton.h"

@class NSString, SCShapeView, UILabel;

@interface SCPrivateStoriesActionButton : SIGScaleAnimationButton
{
    SCShapeView *_backgroundView;
    UILabel *_titleLabel;
    NSString *_title;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setEnabled:(_Bool)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
