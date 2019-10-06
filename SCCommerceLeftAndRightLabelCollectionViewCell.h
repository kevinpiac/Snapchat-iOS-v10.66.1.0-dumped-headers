//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView;

@interface SCCommerceLeftAndRightLabelCollectionViewCell : UICollectionViewCell
{
    _Bool _isSeparatorVisible;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    unsigned long long _rightLabelStyle;
    UIView *_separator;
}

+ (double)height;
- (void).cxx_destruct;
- (void)_setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isSeparatorVisible; // @synthesize isSeparatorVisible=_isSeparatorVisible;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(nonatomic) unsigned long long rightLabelStyle; // @synthesize rightLabelStyle=_rightLabelStyle;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;

@end

