//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, SCCDGalleryEntry, SCObjectPlaceholder;

@interface SCGalleryEntryChangeRequest : NSObject
{
    SCCDGalleryEntry *_galleryEntry;
    SCObjectPlaceholder *_objectPlaceholder;
}

+ (id)changeRequestForGalleryEntry:(id)arg1;
+ (id)creationRequestWithGalleryEntry:(id)arg1;
+ (void)deleteAllGalleryEntries;
+ (void)deleteGalleryEntries:(id)arg1;
- (void).cxx_destruct;
- (void)addHighlightedSnaps:(id)arg1;
- (void)addSnaps:(id)arg1;
- (void)addSyncedHighlightedSnaps:(id)arg1;
- (void)addSyncedSnaps:(id)arg1;
@property(copy, nonatomic) NSDate *autosaveTimeUtc;
@property(copy, nonatomic) NSString *bitmojiComicId;
@property(copy, nonatomic) NSDate *createTimeUtc;
@property(copy, nonatomic) NSString *creatorUserId;
@property(copy, nonatomic) NSDictionary *dataVaultEncryption;
@property(copy, nonatomic) NSDate *duplicateTimeUtc;
@property(copy, nonatomic) NSDate *earliestSnapCreateTimeUtc;
@property(copy, nonatomic) NSString *entryId;
@property(nonatomic) int entrySource;
@property(copy, nonatomic) NSString *externalId;
@property(copy, nonatomic) NSDate *featuredExpirationTimeUtc;
@property(nonatomic) int galleryType;
- (id)initWithGalleryEntry:(id)arg1;
- (void)insertHighlightedSnaps:(id)arg1 atIndexes:(id)arg2;
- (void)insertSnaps:(id)arg1 atIndexes:(id)arg2;
- (void)insertSyncedHighlightedSnaps:(id)arg1 atIndexes:(id)arg2;
- (void)insertSyncedSnaps:(id)arg1 atIndexes:(id)arg2;
@property(nonatomic) _Bool isAutoClusterPrototype;
@property(nonatomic) _Bool isPrivate;
@property(nonatomic) _Bool isTemporary;
@property(readonly, copy, nonatomic) NSString *objectID;
@property(nonatomic) int pendingSyncs;
@property(readonly, nonatomic) SCObjectPlaceholder *placeholderForCreatedGalleryEntry;
- (void)removeHighlightedSnaps:(id)arg1;
- (void)removeHighlightedSnapsAtIndexes:(id)arg1;
- (void)removeSnaps:(id)arg1;
- (void)removeSnapsAtIndexes:(id)arg1;
- (void)removeSyncedHighlightedSnaps:(id)arg1;
- (void)removeSyncedHighlightedSnapsAtIndexes:(id)arg1;
- (void)removeSyncedSnaps:(id)arg1;
- (void)removeSyncedSnapsAtIndexes:(id)arg1;
- (void)replaceHighlightedSnapsAtIndexes:(id)arg1 withHighlightedSnaps:(id)arg2;
- (void)replaceSnapsAtIndexes:(id)arg1 withSnaps:(id)arg2;
- (void)replaceSyncedHighlightedSnapsAtIndexes:(id)arg1 withSyncedHighlightedSnaps:(id)arg2;
- (void)replaceSyncedSnapsAtIndexes:(id)arg1 withSyncedSnaps:(id)arg2;
@property(copy, nonatomic) NSString *retryFromEntryId;
@property(copy, nonatomic) NSString *saverUserId;
@property(nonatomic) long long seqNum;
- (void)setOwner:(id)arg1;
- (void)setOwnerDeleted:(id)arg1;
- (void)setOwnerFailed:(id)arg1;
@property(copy, nonatomic) NSString *snapsHash;
@property(copy, nonatomic) NSDictionary *snapsInfo;
@property(nonatomic) int sources;
@property(copy, nonatomic) NSDate *syncedAutosaveTimeUtc;
@property(nonatomic) _Bool syncedIsPrivate;
@property(copy, nonatomic) NSString *syncedTitle;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) int viewType;
- (void)setWithGalleryEntry:(id)arg1;

@end

