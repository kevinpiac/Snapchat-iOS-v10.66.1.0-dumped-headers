//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCLensByIdRetrievable, SCLensMetadataProviderSortStrategy, SCLensMetadataStoreProtocol;

@protocol SCLensDataProviderV2DependencyProvider <NSObject>
@property(readonly, nonatomic) id <SCLensMetadataStoreProtocol> metadataStore;
@property(readonly, nonatomic) id <SCLensMetadataStoreProtocol> prefetchMetadataStore;
@property(readonly, nonatomic) id <SCLensMetadataProviderSortStrategy> sortStrategy;
@property(readonly, nonatomic) id <SCLensByIdRetrievable> staticAllLensesByIdRetrievable;
@end

