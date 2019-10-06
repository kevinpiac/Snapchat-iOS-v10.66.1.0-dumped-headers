//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMergedGalleryDataSourceListener-Protocol.h"

@class NSArray, NSMapTable, NSMutableArray, NSString, NSURL, SCQueuePerformer, SCUserSession;
@protocol SCGalleryEntry, SCGallerySnap, SCObserving;

@interface SCGalleryRecentThumbnailProvider : NSObject <SCMergedGalleryDataSourceListener>
{
    NSMapTable *_observersTable;
    NSURL *_rootURL;
    SCQueuePerformer *_performer;
    id <SCGalleryEntry> _latestEntry;
    id <SCGallerySnap> _latestSnap;
    id <SCObserving> _entryObserveContext;
    SCUserSession *_userSession;
    NSArray *_thumbnailSizes;
    NSArray *_cornerRadii;
    NSMutableArray *_recentThumbnails;
}

- (void).cxx_destruct;
- (void)_cleanupAndReloadRecentThumbnail;
- (void)_generateGalleryThumbnailsWithLatestEntry:(id)arg1;
- (void)_generateGalleryThumbnailsWithLatestSnap:(id)arg1;
- (void)_loadRecentThumbnail;
- (id)_recentThumbnailPathAtIndex:(long long)arg1;
- (void)_updateRecentThumbnailImage:(id)arg1 snap:(id)arg2 index:(long long)arg3;
- (id)addObserver:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *cornerRadii; // @synthesize cornerRadii=_cornerRadii;
- (void)dataSource:(id)arg1 didChangeEntries:(id)arg2 failedEntries:(id)arg3 fetchEntryError:(id)arg4;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 thumbnailSizes:(id)arg2 cornerRadii:(id)arg3;
- (void)notifyObservers;
@property(retain, nonatomic) NSMutableArray *recentThumbnails; // @synthesize recentThumbnails=_recentThumbnails;
- (void)removeObserver:(id)arg1;
@property(readonly, nonatomic) NSArray *thumbnailSizes; // @synthesize thumbnailSizes=_thumbnailSizes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
