//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel;

@interface SCSearchQuerySuggestCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    NSString *_title;
}

+ (double)cellHeight;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end
