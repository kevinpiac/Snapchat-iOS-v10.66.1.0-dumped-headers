//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCLensDiscoveryDataProvider;

@protocol SCLensDiscoveryDataProviderDelegate <NSObject>
- (void)lensDiscoveryDataProvider:(id <SCLensDiscoveryDataProvider>)arg1 didFailToUpdateObjectsForCategoryAtIndex:(long long)arg2 canRetry:(_Bool)arg3 retryTimeout:(double)arg4;
- (void)lensDiscoveryDataProvider:(id <SCLensDiscoveryDataProvider>)arg1 didUpdateObjectsForCategoryAtIndex:(long long)arg2;
- (void)lensDiscoveryDataProviderDidFailToUpdateCategories:(id <SCLensDiscoveryDataProvider>)arg1 canRetry:(_Bool)arg2 retryTimeout:(double)arg3;
- (void)lensDiscoveryDataProviderDidUpdateCategories:(id <SCLensDiscoveryDataProvider>)arg1;
@end

