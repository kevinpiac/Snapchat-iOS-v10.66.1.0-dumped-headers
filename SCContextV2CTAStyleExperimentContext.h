//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCContextV2CTAStyleExperimentContext : SCExperimentContext
{
    NSString *_ctaStyle;
}

+ (id)experimentName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *ctaStyle; // @synthesize ctaStyle=_ctaStyle;
- (id)ctaStyleByRespectingTweaks;
- (id)experimentName;
- (void)setupParameters;

@end

