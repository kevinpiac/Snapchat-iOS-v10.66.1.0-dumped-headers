//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSArray;

@interface SCUnifiedProfileIdentityCarouselCollectionViewLayout : UICollectionViewFlowLayout
{
    NSArray *_layoutAttributes;
    struct CGSize _boundsSizeForLayoutAttributes;
    struct CGSize _collectionViewContentSize;
    _Bool _shouldUpdateLayoutAttributes;
}

- (void).cxx_destruct;
- (double)_distanceRatioForOffsetX:(double)arg1 fromItemAtIndexPath:(id)arg2;
- (double)_getInteritemSpacing;
- (struct CGSize)_getSizeForItem:(unsigned long long)arg1;
- (unsigned long long)_indexForItemAtOffsetX:(double)arg1;
- (void)_updateItemAlpha;
- (void)_updateLayoutAttributes;
- (struct CGSize)collectionViewContentSize;
- (id)init;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (void)setShouldUpdateLayoutAttributes;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end

