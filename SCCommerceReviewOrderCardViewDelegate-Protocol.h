//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, SCCommerceReviewOrderCardView;
@protocol SCCommerceProductCheckoutLineItem;

@protocol SCCommerceReviewOrderCardViewDelegate
- (void)SCCommerceReviewOrderCardView:(SCCommerceReviewOrderCardView *)arg1 didClickLink:(NSString *)arg2;
- (void)SCCommerceReviewOrderCardView:(SCCommerceReviewOrderCardView *)arg1 didClickQuantityForItem:(id <SCCommerceProductCheckoutLineItem>)arg2;
- (void)SCCommerceReviewOrderCardView:(SCCommerceReviewOrderCardView *)arg1 didRemoveItem:(id <SCCommerceProductCheckoutLineItem>)arg2;
@end

