//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface SCAvatarBuilderGenderView : UIView
{
    UIView *_roundedBackgroundView;
    UIImageView *_avatarImageView;
}

- (void).cxx_destruct;
- (void)animateIn;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (id)initWithGender:(unsigned long long)arg1 backgroundColor:(id)arg2;
- (void)layoutSubviews;

@end
