//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCPaymentsSettingsTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface SCShippingAddressTableViewCell : SCPaymentsSettingsTableViewCell
{
    UIImageView *_checkmarkImageView;
    UILabel *_addressLabelName;
    UILabel *_addressLabelStreet;
    UILabel *_addressLabelRegion;
    UIView *_labelContainer;
    _Bool _isCellSelected;
}

- (void).cxx_destruct;
- (void)_initAddressLabels;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)isCellSelected;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAddress:(id)arg1;
- (void)setCellSelected:(_Bool)arg1;
- (void)setDeselectedLayout;
- (void)setItem:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setSelectedLayout;

@end

