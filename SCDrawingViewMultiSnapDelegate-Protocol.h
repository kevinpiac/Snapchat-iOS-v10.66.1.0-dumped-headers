//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCDrawingStroke, UIView;
@protocol SCDrawingViewCommon;

@protocol SCDrawingViewMultiSnapDelegate <NSObject>
- (void)drawingView:(UIView<SCDrawingViewCommon> *)arg1 addedStroke:(SCDrawingStroke *)arg2;
- (void)drawingView:(UIView<SCDrawingViewCommon> *)arg1 removedStroke:(SCDrawingStroke *)arg2;
@end

