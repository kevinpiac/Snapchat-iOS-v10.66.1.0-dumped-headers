//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCLagunaSettingsTableViewCell.h"

@class UIImageView, UIView;

@interface SCLagunaSettingsColorIndicatorCell : SCLagunaSettingsTableViewCell
{
    UIView *_indicatorContainer;
    UIImageView *_colorIndicator;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setCellStyle:(unsigned long long)arg1 indicatorType:(unsigned long long)arg2;
- (void)setIndicatorColor:(unsigned long long)arg1 isEnabled:(_Bool)arg2;

@end
