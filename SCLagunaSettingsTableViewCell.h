//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSettingsTableViewCell.h"

@class UILabel, UIView;

@interface SCLagunaSettingsTableViewCell : SCSettingsTableViewCell
{
    UILabel *_progressLabel;
    UIView *_customAccessoryView;
    _Bool _progressEnabled;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (id)customAccessoryView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic, getter=isProgressEnabled) _Bool progressEnabled; // @synthesize progressEnabled=_progressEnabled;
- (void)prepareForReuse;
@property(readonly, nonatomic) UILabel *progressLabel;
- (void)setCustomAccessoryView:(id)arg1;

@end
