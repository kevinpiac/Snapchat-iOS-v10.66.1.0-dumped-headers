//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCActionModel, SCSearchCollectionViewCell, UIView;

@protocol SCSearchCollectionViewCellDelegate <NSObject>
- (void)searchCollectionViewCell:(SCSearchCollectionViewCell *)arg1 didTriggerActionWithActionModel:(SCActionModel *)arg2 fromSourceView:(UIView *)arg3;

@optional
- (void)searchCollectionViewCellDidLongPressCell:(SCSearchCollectionViewCell *)arg1;
- (void)searchCollectionViewCellDidTapBottomAction:(SCSearchCollectionViewCell *)arg1;
- (void)searchCollectionViewCellDidTapCell:(SCSearchCollectionViewCell *)arg1;
@end
