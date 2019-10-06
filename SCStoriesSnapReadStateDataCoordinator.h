//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoriesSnapReadReceiptDataCoordinating-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCExperimentManager, SCLazy, SCPreferences;

@interface SCStoriesSnapReadStateDataCoordinator : NSObject <SCStoriesSnapReadReceiptDataCoordinating>
{
    SCDocObjectContext *_docObjectContext;
    SCExperimentManager *_experimentManager;
    SCPreferences *_userPreferences;
    SCLazy *_lazySnapReadReceiptLogger;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    NSMutableDictionary *_uploadingProcessors;
    NSMutableDictionary *_metadataProcessors;
    NSMutableArray *_readReceiptUpdateLog;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_fetchReadReceiptsWithRequest:(id)arg1 sessionRequestManager:(id)arg2;
- (void)_persistReadReceiptToDocObjectContext:(id)arg1;
- (void)_persistViewReportsToDocObjectContext:(id)arg1;
- (void)_readReceiptsDidUpdated:(id)arg1;
- (void)_removeExpiredSnapReadReceipts;
- (void)_updateStoriesSnapMetaData:(id)arg1;
- (void)_uploadReadReceipt:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;
- (void)addReadReceiptMetadataProcessor:(id)arg1 forSource:(long long)arg2;
- (void)addReadReceiptUploadingProcessor:(id)arg1 forSource:(long long)arg2;
- (void)fetchReadReceiptsWithUserId:(id)arg1 snapTokenManager:(id)arg2 sessionRequestManager:(id)arg3;
- (void)handleDataRequest:(id)arg1;
- (_Bool)hasCompletedInitialFetching;
- (id)initWithDocObjectContext:(id)arg1 experimentManager:(id)arg2 userPreferences:(id)arg3 lazySnapReadReceiptLogger:(id)arg4;
@property(readonly, nonatomic) NSMutableArray *readReceiptUpdateLog; // @synthesize readReceiptUpdateLog=_readReceiptUpdateLog;
- (void)removeDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
