//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SIGBadgeView, SIGLabel, UIImageView, UILayoutGuide;

@interface SIGProfileCard : UIView
{
    SIGLabel *_titleLabel;
    SIGLabel *_subtitleLabel;
    UIImageView *_imageView;
    UIImageView *_removeIconImageView;
    SIGBadgeView *_badgeView;
    UILayoutGuide *_containerLayoutGuide;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SIGBadgeView *badgeView; // @synthesize badgeView=_badgeView;
- (id)initWithImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;

@end

