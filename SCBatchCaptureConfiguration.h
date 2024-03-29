//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, SCBatchCaptureConfigurationListenerAnnouncer, SCBatchCaptureStateHandler, SCPreviewSnapchatGalleryConfiguration, SCPromise;

@interface SCBatchCaptureConfiguration : NSObject
{
    NSMutableArray *_mutableSegments;
    NSMutableArray *_mutableDeletedSegmentCaptureSessionIDs;
    long long _maxUniqueId;
    SCBatchCaptureConfigurationListenerAnnouncer *_announcer;
    SCPromise *_snappablesDataLoadPromise;
    SCBatchCaptureStateHandler *_stateHandler;
    NSString *_batchCaptureSessionID;
}

- (void).cxx_destruct;
- (void)_updateSegmentStartTimeOffsetFromIndex:(long long)arg1;
- (id)addBatchCaptureSegment:(id)arg1;
- (void)addListener:(id)arg1;
@property(copy, nonatomic) NSString *batchCaptureSessionID; // @synthesize batchCaptureSessionID=_batchCaptureSessionID;
- (void)dealloc;
- (void)deleteAllSegments;
- (void)deleteAllSegmentsWithDiscardMethod:(long long)arg1;
- (void)deleteSegmentAtIndex:(long long)arg1;
- (void)deleteSnapSegmentAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSArray *deletedSegmentCaptureSessionIDs;
- (id)firstFrameImage;
@property(retain, nonatomic) SCPreviewSnapchatGalleryConfiguration *galleryConfiguration;
- (id)init;
@property(readonly, nonatomic) _Bool isLoadingSnappablesData;
@property(nonatomic, getter=isSaved) _Bool saved;
- (id)multiSnapConfigurationForSegmentAtIndex:(long long)arg1;
@property(copy, nonatomic) NSArray *segments;
- (void)setSnappablesData:(id)arg1 forSegment:(id)arg2;
@property(retain, nonatomic) SCBatchCaptureStateHandler *stateHandler; // @synthesize stateHandler=_stateHandler;
- (id)snappablesDataLoadPromise;
- (void)snappablesDataLoadingCompletion:(CDUnknownBlockType)arg1;
- (id)timeRanges;
@property(readonly, nonatomic) unsigned long long uniqueSnapCreationCount;
@property(readonly, nonatomic) unsigned long long unsavedCount;
- (void)updateSegment:(id)arg1 atIndex:(long long)arg2;

@end

