//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SCLoadingIndicatorView, UIImageView, UILabel;

@interface SCActionMenuTableViewCell : UITableViewCell
{
    UIImageView *_iconView;
    UILabel *_label;
    SCLoadingIndicatorView *_loadingIndicatorView;
}

- (void).cxx_destruct;
- (void)animateIcon:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setLoading:(_Bool)arg1;
- (void)setMenuItem:(id)arg1;

@end

