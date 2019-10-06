//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaRemoteVideoPropertiesProvider-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSPointerArray, NSString, SCScopedAccess;

@interface SCDiscoverVideoCatalogService : NSObject <SCOperaRemoteVideoPropertiesProvider>
{
    SCScopedAccess *_scopedCircumstanceEngine;
    NSString *_videoServiceEndpoint;
    NSString *_adServiceEndpoint;
    NSPointerArray *_listeners;
    NSMutableSet *_loadingCatalogs;
    NSMutableDictionary *_videoCatalogMap;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_adServiceEndpointFromCircumstanceEngine:(id)arg1;
- (void)_setupAdServiceEndpointFromCircumstanceEngine:(id)arg1;
- (void)_setupVideoServiceEndpointFromCircumstanceEnginee:(id)arg1;
- (void)_videoServiceEndpointFromCircumstanceEngine:(id)arg1;
@property(readonly, nonatomic) NSString *adVideoCatalogEndpoint; // @dynamic adVideoCatalogEndpoint;
- (id)catalogForVideoId:(id)arg1;
- (void)fetchCatalogForAdWithVideoId:(id)arg1 withListener:(id)arg2;
- (void)fetchCatalogForEditionId:(id)arg1 withListener:(id)arg2;
- (void)fetchPropertiesWithContext:(id)arg1 listener:(id)arg2;
- (void)fetchUrlsForBitmojiRemoteVideoForContext:(id)arg1 withListener:(id)arg2;
- (id)init;
@property(retain, nonatomic) NSPointerArray *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) NSMutableSet *loadingCatalogs; // @synthesize loadingCatalogs=_loadingCatalogs;
- (id)propertiesForVideoId:(id)arg1;
- (void)requestDidSucceed:(_Bool)arg1;
@property(retain, nonatomic) NSMutableDictionary *videoCatalogMap; // @synthesize videoCatalogMap=_videoCatalogMap;
- (void)updateEndpointFromCircumstanceEngine;
@property(readonly, nonatomic) NSString *videoCatalogEndpoint; // @dynamic videoCatalogEndpoint;

@end
