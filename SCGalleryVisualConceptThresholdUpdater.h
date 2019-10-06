//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCService-Protocol.h"

@class NSDictionary, NSString, SCQueuePerformer;

@interface SCGalleryVisualConceptThresholdUpdater : NSObject <SCService>
{
    struct mutex _mutex;
    SCQueuePerformer *_performer;
    NSDictionary *_conceptThreshold;
    NSString *_versionHash;
}

+ (id)defaultImmediateNotifier;
+ (id)defaultLongRunningNotifier;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_fileURL;
- (void)_saveToFile:(id)arg1 eTag:(id)arg2;
- (void)_updateFromFile;
- (id)dedicatedQueue;
- (id)init;
- (void)runWithServiceTerm:(id)arg1;
- (id)thresholdForConcepts;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
