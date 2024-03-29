//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, SCCDCloudSyncOperationSnapshot, SCObjectPlaceholder;

@interface SCCloudSyncOperationSnapshotChangeRequest : NSObject
{
    SCCDCloudSyncOperationSnapshot *_cloudSyncOperationSnapshot;
    SCObjectPlaceholder *_objectPlaceholder;
}

+ (id)changeRequestForCloudSyncOperationSnapshot:(id)arg1;
+ (id)creationRequestWithCloudSyncOperationSnapshot:(id)arg1;
+ (void)deleteAllCloudSyncOperationSnapshots;
+ (void)deleteCloudSyncOperationSnapshots:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *createTimeUtc;
- (id)initWithCloudSyncOperationSnapshot:(id)arg1;
@property(readonly, copy, nonatomic) NSString *objectID;
@property(copy, nonatomic) NSData *payload;
@property(readonly, nonatomic) SCObjectPlaceholder *placeholderForCreatedCloudSyncOperationSnapshot;
@property(copy, nonatomic) NSString *requestID;
@property(nonatomic) long long seqNum;
- (void)setOwner:(id)arg1;
@property(copy, nonatomic) NSString *targetEntryId;
- (void)setWithCloudSyncOperationSnapshot:(id)arg1;

@end

