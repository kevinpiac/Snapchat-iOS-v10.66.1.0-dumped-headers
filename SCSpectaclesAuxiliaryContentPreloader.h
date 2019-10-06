//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCService-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSArray, NSString, SCCloudFS, SCCloudSync, SCEncryptedContentManager, SCQueuePerformer, SCSentinel, SCSpectaclesAuxiliaryContentStore;
@protocol SCGalleryProfile;

@interface SCSpectaclesAuxiliaryContentPreloader : NSObject <SCService, SCUserSessionScoped>
{
    id <SCGalleryProfile> _profile;
    SCCloudSync *_cloudSync;
    SCSpectaclesAuxiliaryContentStore *_auxiliaryContentStore;
    SCCloudFS *_cloudFS;
    SCEncryptedContentManager *_encryptedContentManager;
    SCQueuePerformer *_performer;
    unsigned long long _state;
    NSArray *_pendingEntries;
    NSArray *_pendingSnaps;
    long long _entryIndex;
    long long _snapIndex;
    long long _cachedBytes;
    SCSentinel *_invalidateSentinel;
}

- (void).cxx_destruct;
- (void)_continueDownloadDepthWithServiceTerm:(id)arg1;
- (void)_downloadSnapsWithServiceTerm:(id)arg1;
- (void)_fetchAllEntriesWithServiceTerm:(id)arg1;
- (id)_fileRestoringNotifier;
- (_Bool)_isInvalidated;
- (id)_notifierWithSyncedStatusNotifier:(id)arg1;
- (void)_processEntryWithServiceTerm:(id)arg1;
- (_Bool)_shouldDownloadDepth;
- (void)_transitToState:(unsigned long long)arg1 serviceTerm:(id)arg2;
- (id)dedicatedQueue;
- (id)defaultImmediateNotifier;
- (id)defaultLongRunningNotifier;
- (id)initWithProfile:(id)arg1 cloudSync:(id)arg2 cloudFS:(id)arg3 auxiliaryContentStore:(id)arg4 encryptedContentManager:(id)arg5;
- (void)invalidate;
- (void)runWithServiceTerm:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

