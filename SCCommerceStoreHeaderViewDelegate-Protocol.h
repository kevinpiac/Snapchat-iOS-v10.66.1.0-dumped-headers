//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCCommerceStoreHeaderView, SCProductCartStatusView;

@protocol SCCommerceStoreHeaderViewDelegate <NSObject>
- (void)didTapCartStatusView:(SCProductCartStatusView *)arg1 forStoreHeaderView:(SCCommerceStoreHeaderView *)arg2;
- (void)didTapCloseButtonForStoreHeaderView:(SCCommerceStoreHeaderView *)arg1;
- (void)didTapStoreNameForStoreHeaderView:(SCCommerceStoreHeaderView *)arg1;
@end

