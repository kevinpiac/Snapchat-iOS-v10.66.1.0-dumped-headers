//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCTV3OnboardingHintsExperimentContext : SCExperimentContext
{
    unsigned long long _callingLensesTooltipMax;
    unsigned long long _tapToJoinTooltipMax;
}

@property(readonly, nonatomic) unsigned long long callingLensesTooltipMax; // @synthesize callingLensesTooltipMax=_callingLensesTooltipMax;
- (id)experimentName;
- (void)setupParameters;
@property(readonly, nonatomic) unsigned long long tapToJoinTooltipMax; // @synthesize tapToJoinTooltipMax=_tapToJoinTooltipMax;

@end
