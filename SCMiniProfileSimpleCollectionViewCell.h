//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMiniProfileCollectionViewCell.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface SCMiniProfileSimpleCollectionViewCell : SCMiniProfileCollectionViewCell
{
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIImageView *_imageView;
    _Bool _disabled;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *detailText;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
@property(copy, nonatomic) NSString *text;

@end

