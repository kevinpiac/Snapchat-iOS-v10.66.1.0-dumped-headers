//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCContentManagerExperimentContext : SCExperimentContext
{
    _Bool _useListOfQueues;
    _Bool _useUnzipOnDownloadState;
    _Bool _shouldAllowReRegister;
    unsigned long long _numberOfQueuesPerMediaContextType;
    unsigned long long _timeInHoursAfterConsumptionToExpireStoryContent;
}

- (id)experimentName;
@property(readonly, nonatomic) unsigned long long numberOfQueuesPerMediaContextType; // @synthesize numberOfQueuesPerMediaContextType=_numberOfQueuesPerMediaContextType;
- (void)setupParameters;
@property(readonly, nonatomic) _Bool shouldAllowReRegister; // @synthesize shouldAllowReRegister=_shouldAllowReRegister;
@property(readonly, nonatomic) unsigned long long timeInHoursAfterConsumptionToExpireStoryContent; // @synthesize timeInHoursAfterConsumptionToExpireStoryContent=_timeInHoursAfterConsumptionToExpireStoryContent;
@property(readonly, nonatomic) _Bool useListOfQueues; // @synthesize useListOfQueues=_useListOfQueues;
@property(readonly, nonatomic) _Bool useUnzipOnDownloadState; // @synthesize useUnzipOnDownloadState=_useUnzipOnDownloadState;

@end

