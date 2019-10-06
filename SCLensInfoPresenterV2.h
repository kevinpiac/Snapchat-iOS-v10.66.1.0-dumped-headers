//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MASViewConstraint, NSDate, NSDateFormatter, SCLensInfoMetricView, UILabel, UIStackView, UISwitch, UITextView, UIView;

@interface SCLensInfoPresenterV2 : NSObject
{
    struct unordered_map<SCLensInfoMetricType, SCLensInfoMetricView *, std::__1::hash<SCLensInfoMetricType>, std::__1::equal_to<SCLensInfoMetricType>, std::__1::allocator<std::__1::pair<const SCLensInfoMetricType, SCLensInfoMetricView *>>> _metricViewMap;
    struct unordered_map<SCLensInfoMetricType, SCLensInfoMetric *, std::__1::hash<SCLensInfoMetricType>, std::__1::equal_to<SCLensInfoMetricType>, std::__1::allocator<std::__1::pair<const SCLensInfoMetricType, SCLensInfoMetric *>>> _metricMap;
    UIView *_container;
    UIStackView *_rootStackView;
    UIStackView *_leftStackView;
    UIStackView *_rightStackView;
    SCLensInfoMetricView *_fpsMetricView;
    SCLensInfoMetricView *_ramMetricView;
    SCLensInfoMetricView *_sizeMetricView;
    UILabel *_timeLabel;
    UILabel *_dateLabel;
    UIView *_profilingView;
    UILabel *_profilingQALabel;
    UISwitch *_profilingSwitch;
    UITextView *_profilingResults;
    MASViewConstraint *_profilingResultsHeightConstraint;
    NSDate *_pushedDate;
    NSDateFormatter *_dayFormatter;
    NSDateFormatter *_timeFormatter;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setupMetricView:(id)arg1 forType:(unsigned long long)arg2;
- (void)_updateProfilingResultsConstraintWithHeight:(double)arg1;
- (id)container;
- (id)init;
@property(readonly, nonatomic) UISwitch *profilingSwitch; // @synthesize profilingSwitch=_profilingSwitch;
- (void)reloadMetric:(id)arg1;
- (void)reloadPushedDate:(id)arg1;
- (void)setProfilingResultsText:(id)arg1;
@property(readonly, nonatomic) UIView *view;

@end

