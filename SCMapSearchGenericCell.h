//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

@class NSString, SCMapSearchGenericCellViewModel, SCUserSession, UIImage, UIImageView, UILabel, UIView;

@interface SCMapSearchGenericCell : SCSearchCollectionViewCell
{
    UIView *_labelContainer;
    SCMapSearchGenericCellViewModel *_viewModel;
    SCUserSession *_userSession;
    UIView *_accessoryView;
    UIView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_subtitleImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void)handleLongPressAction;
- (void)handleTapAction;
- (_Bool)hasOverridedLongPressAction;
- (_Bool)hasOverridedTapAction;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) UIImage *subtitleImage;
@property(nonatomic) double subtitleImageAlpha;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) SCMapSearchGenericCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) UIImageView *subtitleImageView; // @synthesize subtitleImageView=_subtitleImageView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end
