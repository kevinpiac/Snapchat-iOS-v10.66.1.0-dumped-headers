//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSMutableArray, NSString, SCUserSession;
@protocol SCPreviewFilterDataProvider;

@interface SCGalleryLagunaMetadataProvider : NSObject <SCTraceEnabled>
{
    id <SCPreviewFilterDataProvider> _filterDataProvider;
    _Bool _running;
    SCUserSession *_userSession;
    NSMutableArray *_cachedLocationData;
    _Bool _isBackgrounded;
}

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground;
- (void)_applicationWillEnterForeground;
- (void)_clearExpiredDataFromCache;
- (id)_locationDataForTimeOfCapture:(id)arg1;
- (void)_readLocationsAndFiltersFromFile;
- (_Bool)_shouldCacheLocation;
- (void)_writeLocationsAndFiltersToFile;
- (void)cacheCurrentLocationIfNeeded;
- (void)clearCache;
- (void)dealloc;
- (void)endUpdatingMetadata;
- (id)initWithUserSession:(id)arg1;
- (id)locationForContent:(id)arg1;
- (id)overlayForContent:(id)arg1;
- (void)startUpdatingMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

