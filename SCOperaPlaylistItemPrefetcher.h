//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaPlaylistItemPrefetching-Protocol.h"

@class NSDictionary, NSMutableArray, NSString;
@protocol SCOperaPrefetcherSettingsProvider;

@interface SCOperaPlaylistItemPrefetcher : NSObject <SCOperaPlaylistItemPrefetching>
{
    NSMutableArray *_currentRequests;
    NSDictionary *_prefetchRequestHandlerMap;
    id <SCOperaPrefetcherSettingsProvider> _settingsProvider;
}

- (void).cxx_destruct;
- (id)initWithPrefetchRequestHandlers:(id)arg1 settingsProvider:(id)arg2;
- (void)prefetch:(id)arg1;
- (id)prefetchSizes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

