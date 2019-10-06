//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCService-Protocol.h"

@class NSArray, NSString, SCQueuePerformer, SCSessionRequestManager;

@interface SCGallerySuggestedQueryUpdater : NSObject <SCService>
{
    struct mutex _mutex;
    SCSessionRequestManager *_sessionRequestManager;
    SCQueuePerformer *_performer;
    NSArray *_suggestedQueries;
    _Bool _loaded;
}

+ (id)defaultImmediateNotifier;
+ (id)defaultLongRunningNotifier;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_clientConfigResponseFileURL;
- (id)_readQueriesFromFile;
- (void)_saveClientConfigResponseToFile:(id)arg1;
- (id)dedicatedQueue;
- (id)initWithSessionRequestManager:(id)arg1;
- (void)runWithServiceTerm:(id)arg1;
- (void)setSuggestedQueries:(id)arg1;
- (id)suggestedQueries;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
