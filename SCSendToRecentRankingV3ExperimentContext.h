//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSendToRecentRankingV3ExperimentContext : SCExperimentContext
{
    _Bool _recordInteractions;
    long long _uiType;
}

- (id)experimentName;
@property(readonly, nonatomic) _Bool recordInteractions; // @synthesize recordInteractions=_recordInteractions;
- (void)setupParameters;
@property(readonly, nonatomic) long long uiType; // @synthesize uiType=_uiType;

@end
