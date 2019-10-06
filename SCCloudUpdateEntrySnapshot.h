//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCloudUpdateEntrySnapshot-Protocol.h"

@class NSDictionary, NSString, SCCloudSyncTriggerUserContext;
@protocol SCGalleryProfile, SCGallerySnap, SCGallerySnapDetail, SCGallerySnapMiniThumbnail;

@interface SCCloudUpdateEntrySnapshot : NSObject <SCCloudUpdateEntrySnapshot>
{
    _Bool _requiresSyncStatusUpdate;
    _Bool _deleteSharedSnapForAll;
    id <SCGalleryProfile> _profile;
    NSString *_entryId;
    NSString *_title;
    NSString *_deletedSnapId;
    id <SCGallerySnap> _snapPlaceholder;
    id <SCGallerySnapDetail> _detailPlaceholder;
    id <SCGallerySnapMiniThumbnail> _miniThumbnailPlaceholder;
    NSDictionary *_dataVaultEncryption;
    SCCloudSyncTriggerUserContext *_userContext;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSDictionary *dataVaultEncryption; // @synthesize dataVaultEncryption=_dataVaultEncryption;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, nonatomic) _Bool deleteSharedSnapForAll; // @synthesize deleteSharedSnapForAll=_deleteSharedSnapForAll;
@property(readonly, copy, nonatomic) NSString *deletedSnapId; // @synthesize deletedSnapId=_deletedSnapId;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) id <SCGallerySnapDetail> detailPlaceholder; // @synthesize detailPlaceholder=_detailPlaceholder;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *entryId; // @synthesize entryId=_entryId;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfile:(id)arg1 entryId:(id)arg2 title:(id)arg3 deletedSnapId:(id)arg4 snapPlaceholder:(id)arg5 detailPlaceholder:(id)arg6 miniThumbnailPlaceholder:(id)arg7 dataVaultEncryption:(id)arg8 userContext:(id)arg9 requiresSyncStatusUpdate:(_Bool)arg10 deleteSharedSnapForAll:(_Bool)arg11;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) id <SCGallerySnapMiniThumbnail> miniThumbnailPlaceholder; // @synthesize miniThumbnailPlaceholder=_miniThumbnailPlaceholder;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) id <SCGalleryProfile> profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) _Bool requiresSyncStatusUpdate; // @synthesize requiresSyncStatusUpdate=_requiresSyncStatusUpdate;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) id <SCGallerySnap> snapPlaceholder; // @synthesize snapPlaceholder=_snapPlaceholder;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) SCCloudSyncTriggerUserContext *userContext; // @synthesize userContext=_userContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

