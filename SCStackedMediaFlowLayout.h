//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface SCStackedMediaFlowLayout : UICollectionViewFlowLayout
{
    _Bool _isRTL;
    double _maximumInteritemSpacing;
}

- (void)_updateXForAttribute:(id)arg1 updatedX:(long long)arg2;
@property(nonatomic) _Bool isRTL; // @synthesize isRTL=_isRTL;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
@property(nonatomic) double maximumInteritemSpacing; // @synthesize maximumInteritemSpacing=_maximumInteritemSpacing;

@end

