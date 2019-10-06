//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSnapAdsCognacSkippableFlagExperimentContext : SCExperimentContext
{
    _Bool _enableCognacSkippableAd;
    double _cognacUnskippableDurationSecs;
    long long _adUnskippableProgressBarText;
}

@property(readonly, nonatomic) long long adUnskippableProgressBarText; // @synthesize adUnskippableProgressBarText=_adUnskippableProgressBarText;
@property(readonly, nonatomic) double cognacUnskippableDurationSecs; // @synthesize cognacUnskippableDurationSecs=_cognacUnskippableDurationSecs;
@property(readonly, nonatomic) _Bool enableCognacSkippableAd; // @synthesize enableCognacSkippableAd=_enableCognacSkippableAd;
- (id)experimentName;
- (void)setupParameters;

@end
