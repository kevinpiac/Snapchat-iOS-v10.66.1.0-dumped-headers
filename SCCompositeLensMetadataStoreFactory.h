//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCQueuePerformer;
@protocol SCLensDataProviderConfiguration, SCLensUserProvider, SCLensUserSessionProvider;

@interface SCCompositeLensMetadataStoreFactory : NSObject <SCTraceEnabled>
{
    id <SCLensUserSessionProvider> _userSessionProvider;
    id <SCLensDataProviderConfiguration> _dataProviderConfiguration;
    SCQueuePerformer *_announcerPerformer;
    id <SCLensUserProvider> _lensUserProvider;
}

- (void).cxx_destruct;
- (void)addMetadataStore:(id)arg1 toArray:(id)arg2;
- (id)arcadiaMetadataStore;
- (id)createMetadataStore;
- (id)createPrefetchMetadataStore;
- (id)createStaticAllLensesByIdRetrievable;
- (id)geoLiveLensMetadataStore;
- (id)geoPrefetchLensMetadataStore;
- (id)initWithUserSessionProvider:(id)arg1 dataProviderConfiguration:(id)arg2 announcerPerformer:(id)arg3 lensUserProvider:(id)arg4;
- (id)lensDemoMetadataStore;
- (id)metadataStores;
- (id)prefetchMetadataStores;
- (id)scheduledLensMetadataStore;
- (id)studioLensMetadataStore;
- (id)unlockableLensMetadataStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

