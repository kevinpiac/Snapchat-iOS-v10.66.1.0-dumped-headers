//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCCloudSyncTriggerUserContext;
@protocol SCGalleryProfile;

@interface SCCloudDeleteEntriesSnapshotBuilder : NSObject
{
    id <SCGalleryProfile> _profile;
    NSArray *_entryIds;
    _Bool _needRunImmediately;
    _Bool _deleteSharedSnapForAll;
    SCCloudSyncTriggerUserContext *_userContext;
}

+ (id)withCloudDeleteEntriesSnapshot:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setDeleteSharedSnapForAll:(_Bool)arg1;
- (id)setEntryIds:(id)arg1;
- (id)setNeedRunImmediately:(_Bool)arg1;
- (id)setProfile:(id)arg1;
- (id)setUserContext:(id)arg1;

@end

