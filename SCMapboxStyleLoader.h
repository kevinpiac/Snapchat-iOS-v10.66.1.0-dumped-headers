//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MGLOfflineStorageDelegate-Protocol.h"

@class NSHashTable, NSString, SCMapAuthValues, SCMapFSNService, SCMapboxURLSession, SCQueuePerformer;

@interface SCMapboxStyleLoader : NSObject <MGLOfflineStorageDelegate>
{
    NSString *_userId;
    SCMapFSNService *_mapFSNService;
    SCMapboxURLSession *_mapboxURLSession;
    SCQueuePerformer *_performer;
    _Bool _didUnarchiveAuthValues;
    SCMapAuthValues *_authValues;
    NSHashTable *_listeners;
}

- (void).cxx_destruct;
- (void)_archiveAuthValues:(id)arg1;
- (_Bool)_cacheStyleJsonFromResponse:(id)arg1 forMapStyle:(int)arg2;
- (void)_ensureMapboxAccessToken;
- (void)_ensureMapboxStorageSetup;
- (void)_fetchStyleFromSource:(int)arg1;
- (id)_generateStyleURLForStyle:(int)arg1;
- (void)_handleStyleResponse:(id)arg1 error:(id)arg2 forStyle:(int)arg3;
- (void)_notifyListenersForStyle:(int)arg1;
- (void)_notifyListenersOfError:(id)arg1 forStyle:(int)arg2;
- (_Bool)_setAccessToken:(id)arg1;
- (void)_unarchiveAuthValues;
- (id)accessToken;
- (void)addListener:(id)arg1;
@property(retain, nonatomic) SCMapAuthValues *authValues;
- (id)initWithUserId:(id)arg1 mapFSNService:(id)arg2;
- (id)offlineStorage:(id)arg1 URLForResourceOfKind:(unsigned long long)arg2 withURL:(id)arg3;
- (void)removeListener:(id)arg1;
- (id)styleURLForStyle:(int)arg1;
- (void)warmupForStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
