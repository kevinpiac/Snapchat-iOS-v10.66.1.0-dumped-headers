//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SCSendConfirmationLabelInfo, UIButton;

@interface SCSendConfirmationRecipientCell : UICollectionViewCell
{
    UIButton *_labelButton;
    SCSendConfirmationLabelInfo *_labelInfo;
    _Bool _pillEnabled;
}

+ (double)cellWidthForDisplayName:(id)arg1 type:(long long)arg2 pillEnabled:(_Bool)arg3;
+ (double)cellWidthForLabelInfo:(id)arg1 pillEnabled:(_Bool)arg2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setLabelInfo:(id)arg1 pillEnabled:(_Bool)arg2;

@end

