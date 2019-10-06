//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUBroadcastMobsModelLocation;

@protocol SOJUBroadcastMobsApiUpdateMobStoryRequest <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSArray *contributors;
@property(readonly, copy, nonatomic) NSString *customMobStorySubtype;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSNumber *enableAutosave;
@property(readonly, copy, nonatomic) SOJUBroadcastMobsModelLocation *geoFenceCenter;
@property(readonly, copy, nonatomic) NSString *geoSubtext;
@property(readonly, copy, nonatomic) NSString *idValue;
@property(readonly, copy, nonatomic) NSString *mischiefId;
@property(readonly, copy, nonatomic) NSString *privacyType;
@property(readonly, copy, nonatomic) NSString *typeVal;
@property(readonly, copy, nonatomic) NSArray *viewers;
@end

