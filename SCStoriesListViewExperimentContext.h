//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCStoriesListViewExperimentContext : SCExperimentContext
{
    NSString *_listViewCapCatetory;
    NSString *_foldCatetory;
    unsigned long long _staticCapNumber;
    unsigned long long _dynamicCapNumberMax;
    unsigned long long _dynamicCapNumberMin;
    unsigned long long _dynamicCapForYouStoryThreshold;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long dynamicCapForYouStoryThreshold; // @synthesize dynamicCapForYouStoryThreshold=_dynamicCapForYouStoryThreshold;
@property(readonly, nonatomic) unsigned long long dynamicCapNumberMax; // @synthesize dynamicCapNumberMax=_dynamicCapNumberMax;
@property(readonly, nonatomic) unsigned long long dynamicCapNumberMin; // @synthesize dynamicCapNumberMin=_dynamicCapNumberMin;
- (id)experimentName;
@property(readonly, copy, nonatomic) NSString *foldCatetory; // @synthesize foldCatetory=_foldCatetory;
@property(readonly, copy, nonatomic) NSString *listViewCapCatetory; // @synthesize listViewCapCatetory=_listViewCapCatetory;
- (void)setupParameters;
@property(readonly, nonatomic) unsigned long long staticCapNumber; // @synthesize staticCapNumber=_staticCapNumber;

@end

