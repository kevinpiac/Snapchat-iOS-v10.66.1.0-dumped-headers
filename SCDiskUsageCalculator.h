//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCDiskUsageCalculator : NSObject
{
    NSArray *_rootDirectoriesReferenceURLs;
    NSArray *_rootMetrics;
    NSArray *_otherMetrics;
}

- (void).cxx_destruct;
- (id)_cacheUserScopedPath;
- (id)_determineMetricsForDirectory:(id)arg1 cancelationToken:(id)arg2;
- (id)_determineMetricsForDirectoryAndSubdirectories:(id)arg1 reportLimit:(unsigned long long)arg2 cancelationToken:(id)arg3;
- (id)_determineOrdering:(id)arg1 sort:(_Bool)arg2 limit:(long long)arg3;
- (id)_docUserScopedPath;
- (id)_extraDirectoriesToDeepScan;
- (void)_scanRoot:(id)arg1;
- (id)description;
- (id)rootUsage;
- (void)scan:(id)arg1;
- (id)transformMetrics:(CDUnknownBlockType)arg1 sorted:(_Bool)arg2;

@end

