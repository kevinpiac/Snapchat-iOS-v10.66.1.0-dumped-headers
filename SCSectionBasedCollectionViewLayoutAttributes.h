//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class NSArray;

@interface SCSectionBasedCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes
{
    NSArray *_gradientStops;
    double _headerShadowOpacity;
    struct CGPoint _gradientBeginPoint;
    struct CGPoint _gradientEndPoint;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) struct CGPoint gradientBeginPoint; // @synthesize gradientBeginPoint=_gradientBeginPoint;
@property(nonatomic) struct CGPoint gradientEndPoint; // @synthesize gradientEndPoint=_gradientEndPoint;
@property(copy, nonatomic) NSArray *gradientStops; // @synthesize gradientStops=_gradientStops;
@property(nonatomic) double headerShadowOpacity; // @synthesize headerShadowOpacity=_headerShadowOpacity;
- (_Bool)isEqual:(id)arg1;

@end

