//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOverlayFilterView.h"

@class UIImageView, UILabel, UIView;
@protocol SCAltitudeFilterViewDelegate;

@interface SCAltitudeFilterView : SCOverlayFilterView
{
    double _altitudeInMeters;
    double _gaugeSize;
    double _altTextLeftOffset;
    UIView *_altitudeGaugeView;
    UIView *_altitudeNumberView;
    UIImageView *_gaugeBackground;
    UIImageView *_needleTenThousands;
    UIImageView *_needleThousands;
    UIImageView *_needleHundreds;
    UIImageView *_decimal;
    UILabel *_altitudeGaugeValueLabel;
    UILabel *_altitudeGaugeUnitsLabel;
    UILabel *_altitudeNumberViewLabel;
    UILabel *_altitudeNumberViewUnitsLabel;
    UILabel *_altTextLabel;
    unsigned long long _initialUnit;
    unsigned long long _unit;
    unsigned long long _viewType;
    id <SCAltitudeFilterViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (double)_correctedAltitudeValue;
- (void)_setAltitudeNeedlePoisitons:(double)arg1;
- (void)_setAltitudeNumberView;
- (void)_setAltitudeToDisplayGauge;
- (void)_switchNextAltitudeViewMode;
- (id)_unitString;
- (void)_updateAltitudeView;
@property(nonatomic) __weak id <SCAltitudeFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)displayName;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2 userSession:(id)arg3;
- (void)setDisplayed:(_Bool)arg1;
- (_Bool)shouldRespondToTap:(id)arg1;
- (void)tap:(id)arg1;
@property(readonly, nonatomic) unsigned long long unit; // @synthesize unit=_unit;
- (void)updateConfig:(id)arg1;
@property(readonly, nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;

@end

