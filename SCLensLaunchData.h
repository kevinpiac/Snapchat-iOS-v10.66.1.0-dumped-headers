//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCLensLures, SCLensPersistentStore, SCLensSbSnappable, SCLensUserData;

@interface SCLensLaunchData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int entryPoint; // @dynamic entryPoint;
@property(nonatomic) _Bool hasLures; // @dynamic hasLures;
@property(nonatomic) _Bool hasPersistentStore; // @dynamic hasPersistentStore;
@property(nonatomic) _Bool hasSnappable; // @dynamic hasSnappable;
@property(nonatomic) _Bool hasUserData; // @dynamic hasUserData;
@property(retain, nonatomic) SCLensLures *lures; // @dynamic lures;
@property(retain, nonatomic) SCLensPersistentStore *persistentStore; // @dynamic persistentStore;
@property(retain, nonatomic) SCLensSbSnappable *snappable; // @dynamic snappable;
@property(retain, nonatomic) SCLensUserData *userData; // @dynamic userData;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

