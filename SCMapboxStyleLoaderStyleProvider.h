//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapboxStyleListener-Protocol.h"
#import "SCMapboxStyleProvider-Protocol.h"

@class NSError, NSString, SCMapboxStyleLoader, SCMapboxStyleProviderListenerAnnouncer;

@interface SCMapboxStyleLoaderStyleProvider : NSObject <SCMapboxStyleListener, SCMapboxStyleProvider>
{
    SCMapboxStyleLoader *_mapboxStyleLoader;
    int _mapStyle;
    SCMapboxStyleProviderListenerAnnouncer *_announcer;
    NSError *_loadError;
}

- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)initWithStyleLoader:(id)arg1 mapStyle:(int)arg2;
- (id)loadError;
- (void)mapboxStyleLoader:(id)arg1 didReceiveError:(id)arg2 forStyle:(int)arg3;
- (void)mapboxStyleLoader:(id)arg1 hasUpdateForStyle:(int)arg2;
- (void)removeListener:(id)arg1;
- (id)styleURL;
- (id)styleURLWithIsPlaceholder:(_Bool *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

