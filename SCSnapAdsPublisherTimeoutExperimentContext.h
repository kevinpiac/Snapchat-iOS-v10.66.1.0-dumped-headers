//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSnapAdsPublisherTimeoutExperimentContext : SCExperimentContext
{
    long long _publisherTimeoutSeconds;
}

- (id)experimentName;
@property(readonly, nonatomic) long long publisherTimeoutSeconds; // @synthesize publisherTimeoutSeconds=_publisherTimeoutSeconds;
- (void)setupParameters;

@end

