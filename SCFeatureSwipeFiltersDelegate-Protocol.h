//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableDictionary;
@protocol SCFeatureSwipeFilters;

@protocol SCFeatureSwipeFiltersDelegate <NSObject>
- (void)featureSwipeFilters:(id <SCFeatureSwipeFilters>)arg1 didUpdateState:(NSMutableDictionary *)arg2;
- (void)featureSwipeFiltersAddMotionFilters:(id <SCFeatureSwipeFilters>)arg1;
- (void)featureSwipeFiltersAddSmartFilters:(id <SCFeatureSwipeFilters>)arg1;
- (void)featureSwipeFiltersAddStreakFilters:(id <SCFeatureSwipeFilters>)arg1;
- (long long)featureSwipeFiltersAuxiliaryContentPromptFilterType:(id <SCFeatureSwipeFilters>)arg1;
- (void)featureSwipeFiltersDidTurnOnFilters:(id <SCFeatureSwipeFilters>)arg1;
- (_Bool)featureSwipeFiltersShouldIncludePromptFilterView:(id <SCFeatureSwipeFilters>)arg1;
@end

