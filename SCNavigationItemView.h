//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCNavigationItem_DEPRECATEDDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCNavigationItem_DEPRECATED, UILabel;

@interface SCNavigationItemView : UIView <SCNavigationItem_DEPRECATEDDelegate, SCTraceEnabled>
{
    SCNavigationItem_DEPRECATED *_item;
    unsigned long long _itemVisibility;
    long long _visibleItemCount;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) SCNavigationItem_DEPRECATED *item; // @synthesize item=_item;
@property(nonatomic) unsigned long long itemVisibility; // @synthesize itemVisibility=_itemVisibility;
- (void)layoutSubviews;
- (void)navigationItemItemsDidChange:(id)arg1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long visibleItemCount; // @synthesize visibleItemCount=_visibleItemCount;
- (double)widthForVisibility:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

