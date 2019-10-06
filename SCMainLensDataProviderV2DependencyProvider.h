//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensDataProviderV2DependencyProvider-Protocol.h"

@class NSString;
@protocol SCLensByIdRetrievable, SCLensMetadataProviderSortStrategy, SCLensMetadataStoreProtocol;

@interface SCMainLensDataProviderV2DependencyProvider : NSObject <SCLensDataProviderV2DependencyProvider>
{
    id <SCLensMetadataStoreProtocol> _metadataStore;
    id <SCLensMetadataStoreProtocol> _prefetchMetadataStore;
    id <SCLensMetadataProviderSortStrategy> _sortStrategy;
    id <SCLensByIdRetrievable> _staticAllLensesByIdRetrievable;
}

+ (id)_mainSortStrategyWithUserSessionProvider:(id)arg1 bundledLensProvider:(id)arg2;
- (void).cxx_destruct;
- (id)initWithUserSessionProvider:(id)arg1 bundledLensProvider:(id)arg2 lensDataProviderConfiguration:(id)arg3;
@property(readonly, nonatomic) id <SCLensMetadataStoreProtocol> metadataStore; // @synthesize metadataStore=_metadataStore;
@property(readonly, nonatomic) id <SCLensMetadataStoreProtocol> prefetchMetadataStore; // @synthesize prefetchMetadataStore=_prefetchMetadataStore;
@property(readonly, nonatomic) id <SCLensMetadataProviderSortStrategy> sortStrategy; // @synthesize sortStrategy=_sortStrategy;
@property(readonly, nonatomic) id <SCLensByIdRetrievable> staticAllLensesByIdRetrievable; // @synthesize staticAllLensesByIdRetrievable=_staticAllLensesByIdRetrievable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
