//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface SCGalleryEntryBuilder : NSObject
{
    NSString *_objectID;
    NSDate *_autosaveTimeUtc;
    NSString *_bitmojiComicId;
    NSDate *_createTimeUtc;
    NSString *_creatorUserId;
    NSDictionary *_dataVaultEncryption;
    NSDate *_duplicateTimeUtc;
    NSDate *_earliestSnapCreateTimeUtc;
    NSString *_entryId;
    int _entrySource;
    NSString *_externalId;
    NSDate *_featuredExpirationTimeUtc;
    int _galleryType;
    _Bool _isAutoClusterPrototype;
    _Bool _isPrivate;
    _Bool _isTemporary;
    int _pendingSyncs;
    NSString *_retryFromEntryId;
    NSString *_saverUserId;
    long long _seqNum;
    NSString *_snapsHash;
    NSDictionary *_snapsInfo;
    int _sources;
    NSDate *_syncedAutosaveTimeUtc;
    _Bool _syncedIsPrivate;
    NSString *_syncedTitle;
    NSString *_title;
    int _viewType;
}

+ (id)withGalleryEntry:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAutosaveTimeUtc:(id)arg1;
- (id)setBitmojiComicId:(id)arg1;
- (id)setCreateTimeUtc:(id)arg1;
- (id)setCreatorUserId:(id)arg1;
- (id)setDataVaultEncryption:(id)arg1;
- (id)setDuplicateTimeUtc:(id)arg1;
- (id)setEarliestSnapCreateTimeUtc:(id)arg1;
- (id)setEntryId:(id)arg1;
- (id)setEntrySource:(int)arg1;
- (id)setExternalId:(id)arg1;
- (id)setFeaturedExpirationTimeUtc:(id)arg1;
- (id)setGalleryType:(int)arg1;
- (id)setIsAutoClusterPrototype:(_Bool)arg1;
- (id)setIsPrivate:(_Bool)arg1;
- (id)setIsTemporary:(_Bool)arg1;
- (id)setObjectID:(id)arg1;
- (id)setPendingSyncs:(int)arg1;
- (id)setRetryFromEntryId:(id)arg1;
- (id)setSaverUserId:(id)arg1;
- (id)setSeqNum:(long long)arg1;
- (id)setSnapsHash:(id)arg1;
- (id)setSnapsInfo:(id)arg1;
- (id)setSources:(int)arg1;
- (id)setSyncedAutosaveTimeUtc:(id)arg1;
- (id)setSyncedIsPrivate:(_Bool)arg1;
- (id)setSyncedTitle:(id)arg1;
- (id)setTitle:(id)arg1;
- (id)setViewType:(int)arg1;

@end

