//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCGroupMiniProfileGroupStoryViewCell, SCStoriesSummaryInfo, UIView;

@protocol SCGroupMiniProfileGroupStoryCellDelegate <NSObject>
- (void)handleAvatarTapped:(SCGroupMiniProfileGroupStoryViewCell *)arg1 storySummaryInfo:(SCStoriesSummaryInfo *)arg2 avatar:(UIView *)arg3;
- (void)handleCellTapped;
@end
