//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryEntryThumbnailGenerating-Protocol.h"

@class NSArray, NSString, SCUserSession;
@protocol SCCachingMediaRequest, SCCanceling, SCGalleryEntry, SCGalleryEntryThumbnailGeneratorDelegate, SCProgressReceiving;

@interface SCGalleryEntryThumbnailGenerator : NSObject <SCGalleryEntryThumbnailGenerating>
{
    SCUserSession *_userSession;
    id <SCGalleryEntry> _entry;
    struct CGSize _targetSize;
    CDStruct_bac8f6e9 _mediaScenePath;
    id <SCGalleryEntry> _latestEntry;
    double _snapsDuration;
    NSArray *_latestSnapsToShowThumbnail;
    long long _indexOfSnapForStoryThumbnail;
    _Bool _generatingUpdates;
    id _timerObserveContext;
    id <SCCachingMediaRequest> _cachingMediaRequest;
    id <SCCanceling> _miniThumbnailRequest;
    CDUnknownBlockType _miniThumbnailBlock;
    double _latestThumbnailStartDisplayingTime;
    unsigned long long _generationContext;
    id <SCGalleryEntryThumbnailGeneratorDelegate> _delegate;
    id <SCProgressReceiving> _progressReceiver;
}

+ (id)dispatchQueue;
+ (id)invertedStoryOverlayForTargetSize:(struct CGSize)arg1;
- (void).cxx_destruct;
- (void)_cancelMiniThumbnailBlock;
- (void)_generateThumbnailForSnapEntry;
- (void)_generateThumbnailForStoryEntry;
- (void)_loadMiniThumbnailIfPossible;
- (void)_logThumbnailLoadingEndWithDidShowUp:(_Bool)arg1 snap:(id)arg2;
- (void)_receiveProgressUpdateFromCachingMediaRequest:(id)arg1;
- (void)_scheduleLoadingIndicator;
- (_Bool)_shouldLogThumbnailLatency;
- (void)_storyThumbnailUpdateTimerDidFire;
- (double)_totalSnapsDurationForSnaps:(id)arg1;
- (void)_updateLatestSnapsToShowThumbnail;
- (void)_updateThumbnailWithLatestEntry:(id)arg1 latestSnaps:(id)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <SCGalleryEntryThumbnailGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithUserSession:(id)arg1 entry:(id)arg2 targetSize:(struct CGSize)arg3 mediaScenePath:(CDStruct_bac8f6e9)arg4 generationContext:(unsigned long long)arg5;
@property(nonatomic) __weak id <SCProgressReceiving> progressReceiver; // @synthesize progressReceiver=_progressReceiver;
- (void)startGeneratingUpdates;
- (void)stopGeneratingUpdates;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
