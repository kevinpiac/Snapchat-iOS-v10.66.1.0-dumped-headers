//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSNumber, NSString, SCCDCloudSyncOperationSnapshotID, SCCDGalleryProfile;

@interface _SCCDCloudSyncOperationSnapshot : NSManagedObject
{
}

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(readonly, nonatomic) SCCDCloudSyncOperationSnapshotID *objectID;
- (long long)primitiveSeqNumValue;
@property long long seqNumValue;
- (void)setPrimitiveSeqNumValue:(long long)arg1;

// Remaining properties
@property(retain, nonatomic) NSDate *createTimeUtc; // @dynamic createTimeUtc;
@property(retain, nonatomic) SCCDGalleryProfile *owner; // @dynamic owner;
@property(retain, nonatomic) NSData *payload; // @dynamic payload;
@property(retain, nonatomic) NSString *requestID; // @dynamic requestID;
@property(retain, nonatomic) NSNumber *seqNum; // @dynamic seqNum;
@property(retain, nonatomic) NSString *targetEntryId; // @dynamic targetEntryId;

@end
