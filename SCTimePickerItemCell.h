//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCTimePickerItem, UIImageView, UILabel;

@interface SCTimePickerItemCell : UIView
{
    _Bool _detailHidden;
    SCTimePickerItem *_item;
    double _fontPointSize;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    struct CGSize _titleLabelTextSize;
}

- (void).cxx_destruct;
@property(nonatomic) double fontPointSize; // @synthesize fontPointSize=_fontPointSize;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isDetailHidden) _Bool detailHidden; // @synthesize detailHidden=_detailHidden;
@property(retain, nonatomic) SCTimePickerItem *item; // @synthesize item=_item;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct CGSize titleLabelTextSize; // @synthesize titleLabelTextSize=_titleLabelTextSize;

@end
