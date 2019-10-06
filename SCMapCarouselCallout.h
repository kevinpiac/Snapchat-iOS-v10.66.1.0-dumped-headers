//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer, NSMutableDictionary;
@protocol SCMapCarouselCalloutDataSource;

@interface SCMapCarouselCallout : UIView
{
    CAShapeLayer *_calloutShape;
    UIView *_contentContainer;
    CAGradientLayer *_contentMask;
    NSMutableDictionary *_viewsForIndices;
    double _index;
    id <SCMapCarouselCalloutDataSource> _dataSource;
}

- (void).cxx_destruct;
- (struct CGRect)_centerViewFrame;
- (void)_ensureViewForIndex:(long long)arg1;
- (void)_updateViewsIfNeeded;
@property(nonatomic) __weak id <SCMapCarouselCalloutDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) double index; // @synthesize index=_index;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadData;

@end
