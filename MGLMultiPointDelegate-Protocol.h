//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MGLPolygon, MGLPolyline, MGLShape;

@protocol MGLMultiPointDelegate <NSObject>
- (double)alphaForShapeAnnotation:(MGLShape *)arg1;
- (struct Color)fillColorForPolygonAnnotation:(MGLPolygon *)arg1;
- (double)lineWidthForPolylineAnnotation:(MGLPolyline *)arg1;
- (struct Color)strokeColorForShapeAnnotation:(MGLShape *)arg1;
@end
