//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCDiscoverFeedMyShowsExperimentContext : SCExperimentContext
{
    _Bool _myShowsEnabled;
    NSString *_myShowsConfig;
}

- (void).cxx_destruct;
- (id)experimentName;
@property(readonly, nonatomic) NSString *myShowsConfig; // @synthesize myShowsConfig=_myShowsConfig;
@property(readonly, nonatomic) _Bool myShowsEnabled; // @synthesize myShowsEnabled=_myShowsEnabled;
- (void)setupParameters;

@end

