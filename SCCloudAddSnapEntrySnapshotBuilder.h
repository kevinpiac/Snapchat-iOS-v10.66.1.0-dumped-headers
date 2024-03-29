//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SCCloudSyncTriggerUserContext;
@protocol SCGalleryEntry, SCGalleryProfile, SCGallerySnap, SCGallerySnapDetail, SCGallerySnapMiniThumbnail;

@interface SCCloudAddSnapEntrySnapshotBuilder : NSObject
{
    id <SCGalleryProfile> _profile;
    id <SCGalleryEntry> _entryPlaceholder;
    id <SCGallerySnap> _snapPlaceholder;
    id <SCGallerySnapDetail> _detailPlaceholder;
    id <SCGallerySnapMiniThumbnail> _miniThumbnailPlaceholder;
    NSString *_duplicatedFromSnapId;
    NSDictionary *_dataVaultEncryption;
    SCCloudSyncTriggerUserContext *_userContext;
}

+ (id)withCloudAddSnapEntrySnapshot:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setDataVaultEncryption:(id)arg1;
- (id)setDetailPlaceholder:(id)arg1;
- (id)setDuplicatedFromSnapId:(id)arg1;
- (id)setEntryPlaceholder:(id)arg1;
- (id)setMiniThumbnailPlaceholder:(id)arg1;
- (id)setProfile:(id)arg1;
- (id)setSnapPlaceholder:(id)arg1;
- (id)setUserContext:(id)arg1;

@end

