//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCActionToolbarItemView;

@interface SCActionToolbarItemLayout : NSObject
{
    long long _visibleItemCount;
    SCActionToolbarItemView *_itemView;
    NSArray *_layoutAttributes;
    NSArray *_lineSeparatorLayoutAttributes;
}

- (void).cxx_destruct;
- (double)_itemsTotalWidth;
- (_Bool)_shouldAdjustItemAlpha:(id)arg1 stickyIndex:(long long)arg2 anchor:(long long)arg3;
- (long long)_visibleBarItemCount;
- (long long)_visibleGroupedLeftBarItemCount;
- (long long)_visibleGroupedRightBarItemCount;
- (long long)_visibleItemCount;
- (double)_widthForGroupItem;
- (double)_widthForItem:(id)arg1;
- (struct CGSize)contentSize;
- (id)initWithToolbarItemView:(id)arg1;
- (void)invalidateLayout;
@property(nonatomic) __weak SCActionToolbarItemView *itemView; // @synthesize itemView=_itemView;
@property(copy, nonatomic) NSArray *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForLineSeparatorAtIndex:(long long)arg1;
@property(copy, nonatomic) NSArray *lineSeparatorLayoutAttributes; // @synthesize lineSeparatorLayoutAttributes=_lineSeparatorLayoutAttributes;
- (void)prepareLayout;
@property(nonatomic) long long visibleItemCount; // @synthesize visibleItemCount=_visibleItemCount;

@end

