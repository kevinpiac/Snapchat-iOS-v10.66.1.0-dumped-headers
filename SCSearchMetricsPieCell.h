//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, SCSearchMetricsPieView;

@interface SCSearchMetricsPieCell : UITableViewCell
{
    SCSearchMetricsPieView *_genderPieView;
    SCSearchMetricsPieView *_agePieView;
    NSArray *_genderSlices;
    NSArray *_genderKeys;
    NSArray *_genderLabels;
    NSArray *_ageSlices;
    NSArray *_ageKeys;
    NSArray *_ageLabels;
}

+ (id)reusableIdentifier;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 withAgeData:(id)arg2 withGenderData:(id)arg3 reuseIdentifier:(id)arg4;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;

@end

