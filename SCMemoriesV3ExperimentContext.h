//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCMemoriesV3ExperimentContext : SCExperimentContext
{
    _Bool _snapsTabEnabled;
    _Bool _prefetchEnabled;
}

- (id)experimentName;
@property(readonly, nonatomic) _Bool prefetchEnabled; // @synthesize prefetchEnabled=_prefetchEnabled;
- (void)setupParameters;
@property(readonly, nonatomic) _Bool snapsTabEnabled; // @synthesize snapsTabEnabled=_snapsTabEnabled;

@end

