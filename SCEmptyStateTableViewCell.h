//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCChatTableViewCell.h"

@class UIImageView, UILabel;

@interface SCEmptyStateTableViewCell : SCChatTableViewCell
{
    UIImageView *_emptyBannerSymbol;
    UILabel *_emptyBannerLabel;
}

- (void).cxx_destruct;
- (void)adjustDateHeaderForOffset:(double)arg1;
- (void)displayCell;
- (id)emptyChatCellViewModel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 userSession:(id)arg4;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;

@end

