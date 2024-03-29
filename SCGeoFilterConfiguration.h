//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCGeoFilterConfiguration : NSObject
{
}

+ (double)accuracyForRemovingFiltersFromCache;
+ (double)locDataAccuracyImprovementRatio;
+ (long long)locDataDebounceTimeMillis;
+ (double)locDataExpirationTime;
+ (double)locDataMovementMinDistance;
+ (double)locDataMovementRateLimitSeconds;
+ (double)minAreaPercentForAreaCheck;
+ (_Bool)shouldApplyAreaCheckToCachedFilters;
+ (_Bool)shouldOptimizeLocData;
+ (_Bool)shouldRemoveInactiveFiltersFromCache;

@end

