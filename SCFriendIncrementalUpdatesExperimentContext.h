//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCFriendIncrementalUpdatesExperimentContext : SCExperimentContext
{
    _Bool _fetchIncrementalUpdates;
}

- (id)experimentName;
@property(readonly, nonatomic) _Bool fetchIncrementalUpdates; // @synthesize fetchIncrementalUpdates=_fetchIncrementalUpdates;
- (void)setupParameters;

@end
