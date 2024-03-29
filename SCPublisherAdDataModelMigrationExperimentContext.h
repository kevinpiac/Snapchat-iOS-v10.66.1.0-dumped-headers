//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCPublisherAdDataModelMigrationExperimentContext : SCExperimentContext
{
    _Bool _enablePublisherAdDataModelMigration;
    long long _publisherLoadingSpinnerTimeoutInMillis;
}

@property(readonly, nonatomic) _Bool enablePublisherAdDataModelMigration; // @synthesize enablePublisherAdDataModelMigration=_enablePublisherAdDataModelMigration;
- (id)experimentName;
@property(readonly, nonatomic) long long publisherLoadingSpinnerTimeoutInMillis; // @synthesize publisherLoadingSpinnerTimeoutInMillis=_publisherLoadingSpinnerTimeoutInMillis;
- (void)setupParameters;

@end

