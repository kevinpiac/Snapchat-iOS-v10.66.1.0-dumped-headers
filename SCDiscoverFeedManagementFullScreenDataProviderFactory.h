//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCDiscoverFeedManagementFullScreenViewDataCoordinator, SCUserSession;
@protocol SCImageDownloading, SCSnapchatterPublicInfoFetcher, SCSnapchattersDataFetching;

@interface SCDiscoverFeedManagementFullScreenDataProviderFactory : NSObject
{
    SCDiscoverFeedManagementFullScreenViewDataCoordinator *_discoverFeedManagementFullScreenDataCoordinator;
    id <SCSnapchattersDataFetching> _snapchattersDataFetching;
    id <SCSnapchatterPublicInfoFetcher> _snapchatterPublicInfoFetcher;
    SCUserSession *_userSession;
    id <SCImageDownloading> _imageDownloader;
}

- (void).cxx_destruct;
- (id)initWithDiscoverFeedManagementFullScreenDataCoordinator:(id)arg1 snapchattersDataFetcher:(id)arg2 snapchatterPublicInfoFetcher:(id)arg3 userSession:(id)arg4 imageDownloader:(id)arg5;
- (id)sectionDataProviderForEnum:(unsigned long long)arg1;

@end

