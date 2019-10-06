//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

#import "SCOperaTimerLayerView-Protocol.h"

@class NSString;

@interface SCOperaRectangularTimerLayerView : UILabel <SCOperaTimerLayerView>
{
    _Bool _innerTimerVisible;
    double _innerTimerMaxValue;
    double _innerTimerCurrentValue;
    double _outerTimerMaxValue;
    double _outerTimerCurrentValue;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double innerTimerCurrentValue; // @synthesize innerTimerCurrentValue=_innerTimerCurrentValue;
@property(nonatomic) double innerTimerMaxValue; // @synthesize innerTimerMaxValue=_innerTimerMaxValue;
@property(nonatomic) _Bool innerTimerVisible; // @synthesize innerTimerVisible=_innerTimerVisible;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(nonatomic) double outerTimerCurrentValue; // @synthesize outerTimerCurrentValue=_outerTimerCurrentValue;
@property(nonatomic) double outerTimerMaxValue; // @synthesize outerTimerMaxValue=_outerTimerMaxValue;
- (void)setPercentOffset:(double)arg1;
- (unsigned long long)timerShape;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

