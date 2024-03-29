//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCloudSyncOperationSnapshot-Protocol.h"

@class NSData, NSDate, NSString;

@interface SCCloudSyncOperationSnapshot : NSObject <SCCloudSyncOperationSnapshot>
{
    NSString *_objectID;
    NSDate *_createTimeUtc;
    NSData *_payload;
    NSString *_requestID;
    long long _seqNum;
    NSString *_targetEntryId;
}

+ (id)allKeys;
+ (id)cloudSyncOperationSnapshotWithCreateTimeUtc:(id)arg1 payload:(id)arg2 requestID:(id)arg3 seqNum:(long long)arg4 targetEntryId:(id)arg5;
+ (unsigned long long)countOfCloudSyncOperationSnapshotsForOwner:(id)arg1 options:(id)arg2;
+ (unsigned long long)countOfCloudSyncOperationSnapshotsWithOptions:(id)arg1;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (id)fetchCloudSyncOperationSnapshotsForOwner:(id)arg1;
+ (id)fetchCloudSyncOperationSnapshotsForOwner:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)fetchCloudSyncOperationSnapshotsForTargetEntryId:(id)arg1;
+ (id)fetchCloudSyncOperationSnapshotsWithOptions:(id)arg1;
+ (id)fetchFirstCloudSyncOperationSnapshotForOwner:(id)arg1;
+ (id)fetchLatestCloudSyncOperationSnapshotForOwner:(id)arg1;
+ (id)observe:(id)arg1 queue:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
+ (id)parseManagedObject:(id)arg1;
- (void).cxx_destruct;
- (_Bool)containsSnap:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSDate *createTimeUtc; // @synthesize createTimeUtc=_createTimeUtc;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 createTimeUtc:(id)arg2 payload:(id)arg3 requestID:(id)arg4 seqNum:(long long)arg5 targetEntryId:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(readonly, copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) long long seqNum; // @synthesize seqNum=_seqNum;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *targetEntryId; // @synthesize targetEntryId=_targetEntryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

