//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCProductReviewOrderContainerViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SCLoadingIndicatorView, SCUserSession, SOJUCommerceStoreInfo, UIImageView, UILabel, UITableView;
@protocol SCCommerceReviewOrderCardViewDelegate;

@interface SCCommerceReviewOrderCardView : UIView <UITableViewDataSource, UITableViewDelegate, SCProductReviewOrderContainerViewCellDelegate>
{
    SCLoadingIndicatorView *_storeIconImageLoadingView;
    UIImageView *_storeImageView;
    UILabel *_storeTitleLabel;
    UILabel *_numberOfItemsLabel;
    UIView *_storeInfoView;
    UITableView *_tableView;
    SCUserSession *_userSession;
    SOJUCommerceStoreInfo *_storeInfo;
    id <SCCommerceReviewOrderCardViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_createOrderLineItemContainerView:(id)arg1;
- (id)_createOrderReturnView:(id)arg1;
- (id)_createSubTotalView:(id)arg1;
- (double)_itemTableHeight;
- (double)calculatedHeight;
@property(nonatomic) __weak id <SCCommerceReviewOrderCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)productReviewOrderContainerViewCell:(id)arg1 didClickQuantityForItem:(id)arg2;
- (void)productReviewOrderContainerViewCell:(id)arg1 didRemoveItem:(id)arg2;
- (void)reloadData;
@property(retain, nonatomic) SCLoadingIndicatorView *storeIconImageLoadingView; // @synthesize storeIconImageLoadingView=_storeIconImageLoadingView;
@property(retain, nonatomic) UIImageView *storeImageView; // @synthesize storeImageView=_storeImageView;
@property(nonatomic) __weak SOJUCommerceStoreInfo *storeInfo; // @synthesize storeInfo=_storeInfo;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

