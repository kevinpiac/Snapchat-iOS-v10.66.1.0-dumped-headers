//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCPreviewTimeBasedDiscardPromptExperimentContext : SCExperimentContext
{
    _Bool _enabled;
    double _durationSec;
}

@property(readonly, nonatomic) double durationSec; // @synthesize durationSec=_durationSec;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)experimentName;
- (void)setupParameters;

@end

