//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, SCCDCustomStickerOwnerID;

@interface _SCCDCustomStickerOwner : NSManagedObject
{
}

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (id)deletionSet;
@property(readonly, nonatomic) SCCDCustomStickerOwnerID *objectID;
- (id)stickersSet;

// Remaining properties
@property(retain, nonatomic) NSSet *deletion; // @dynamic deletion;
@property(retain, nonatomic) NSSet *stickers; // @dynamic stickers;
@property(retain, nonatomic) NSString *userId; // @dynamic userId;

@end

