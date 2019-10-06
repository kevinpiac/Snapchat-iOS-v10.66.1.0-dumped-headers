//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SCLoadingIndicatorView, UIImageView, UILabel, UIView;

@interface SCSettingsTableViewCell : UITableViewCell
{
    SCLoadingIndicatorView *_loadingIndicator;
    unsigned long long _previousIndicatorType;
    UILabel *_currentInfo;
    UIView *_customAccessoryView;
    UIImageView *_bangView;
    UIImageView *_coloredArrow;
}

- (void).cxx_destruct;
- (void)_hidePreviousIndicator;
- (void)_resetCellTextStyle;
- (void)_updateBangViewOffset;
@property(retain, nonatomic) UIImageView *bangView; // @synthesize bangView=_bangView;
@property(retain, nonatomic) UIImageView *coloredArrow; // @synthesize coloredArrow=_coloredArrow;
@property(retain, nonatomic) UILabel *currentInfo; // @synthesize currentInfo=_currentInfo;
@property(retain, nonatomic) UIView *customAccessoryView; // @synthesize customAccessoryView=_customAccessoryView;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (id)loadingIndicator;
- (void)prepareForReuse;
- (void)resetCellState:(_Bool)arg1;
- (void)resetCellState:(_Bool)arg1 hasError:(_Bool)arg2;
- (void)setCellState:(_Bool)arg1 hasError:(_Bool)arg2;
- (void)setCellStyle:(unsigned long long)arg1 indicatorType:(unsigned long long)arg2;
- (void)setCellStyle:(unsigned long long)arg1 indicatorType:(unsigned long long)arg2 exclamation:(_Bool)arg3;
- (void)setDetailText:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateCellStyle:(unsigned long long)arg1;

@end
