//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCScheduledLensControllerDelegate-Protocol.h"
#import "SCScheduledLensDataFetcherDelegate-Protocol.h"
#import "SCScheduledLensMetadataStoreMigratable-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSArray, NSString, SCScheduledLensController, SCScheduledLensDataFetcher, SCSessionRequestManager;
@protocol SCLensUserProvider;

@interface SCScheduledLensesDataStore : NSObject <SCUserSessionScoped, SCTraceEnabled, SCScheduledLensControllerDelegate, SCScheduledLensDataFetcherDelegate, NSCoding, SCScheduledLensMetadataStoreMigratable>
{
    NSArray *_scheduledLenses;
    NSArray *_scheduledRearLenses;
    NSString *_preselectedLensId;
    SCScheduledLensDataFetcher *_scheduledLensDataFetcher;
    SCScheduledLensController *_scheduledLensController;
    SCSessionRequestManager *_requestManager;
    id <SCLensUserProvider> _lensUserProvider;
}

+ (id)path;
+ (void)removeSavedState;
+ (id)restoreSavedState;
- (void).cxx_destruct;
- (void)_ensureNonNilObjects;
- (void)_subscribeForNotifications;
- (void)clear;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (_Bool)lensMetadataFetcherIsActiveLensesUser:(id)arg1;
@property(retain, nonatomic) id <SCLensUserProvider> lensUserProvider; // @synthesize lensUserProvider=_lensUserProvider;
- (id)preselectedLensId;
@property(retain, nonatomic) SCSessionRequestManager *requestManager; // @synthesize requestManager=_requestManager;
- (void)saveState;
@property(retain, nonatomic) SCScheduledLensController *scheduledLensController; // @synthesize scheduledLensController=_scheduledLensController;
- (void)scheduledLensController:(id)arg1 didUpdateActiveData:(id)arg2 activeRearData:(id)arg3 preselectedLensId:(id)arg4;
- (void)scheduledLensController:(id)arg1 didUpdatePreCachedData:(id)arg2;
- (id)scheduledLensControllerKeyedArchivedData;
@property(retain, nonatomic) SCScheduledLensDataFetcher *scheduledLensDataFetcher; // @synthesize scheduledLensDataFetcher=_scheduledLensDataFetcher;
- (void)scheduledLensDataFetcher:(id)arg1 didFailWithError:(id)arg2;
- (void)scheduledLensDataFetcher:(id)arg1 didFetchData:(id)arg2;
- (id)scheduledLensDataFetcherKeyedArchivedData;
- (id)scheduledLenses;
- (id)scheduledRearLenses;
- (void)updateDataIfNecessary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

