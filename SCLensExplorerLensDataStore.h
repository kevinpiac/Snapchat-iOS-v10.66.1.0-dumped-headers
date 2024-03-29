//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerDataStoreProtocol-Protocol.h"
#import "SCUpdateAnnouncing-Protocol.h"

@class NSArray, NSString, SCLensExplorerDataStoreRemoteState, SCQueuePerformer, SCUpdateListenerAnnouncer;
@protocol SCUnlockableLensDataStoreFilterProtocol;

@interface SCLensExplorerLensDataStore : NSObject <SCUpdateAnnouncing, SCLensExplorerDataStoreProtocol>
{
    SCQueuePerformer *_performer;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    NSArray *_lensItems;
    id <SCUnlockableLensDataStoreFilterProtocol> _creatorsBlacklist;
    NSString *_dataStoreIdentifier;
    unsigned long long _filterOutLenses;
    SCLensExplorerDataStoreRemoteState *_remoteState;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_dispatchAnnounceLensUpdate;
- (id)_uniqueLensItems:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (void)appendItems:(id)arg1 remoteState:(id)arg2;
- (void)appendLenses:(id)arg1;
- (void)appendLenses:(id)arg1 remoteState:(id)arg2;
@property(readonly, nonatomic) NSString *dataStoreIdentifier; // @synthesize dataStoreIdentifier=_dataStoreIdentifier;
@property(nonatomic) unsigned long long filterOutLenses; // @synthesize filterOutLenses=_filterOutLenses;
- (id)initWithCreatorsBlacklist:(id)arg1;
- (id)lensExplorerItemAtIndex:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSArray *lenses;
- (void)refreshCachedItems;
@property(retain, nonatomic) SCLensExplorerDataStoreRemoteState *remoteState; // @synthesize remoteState=_remoteState;
- (void)removeAllLensItems;
- (void)removeUpdateListener:(id)arg1;
- (void)updateItems:(id)arg1 remoteState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

