//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCPBSnapCreatorAttribution;

@interface SCPBGallerySnapSource : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *attributionArray; // @dynamic attributionArray;
@property(readonly, nonatomic) unsigned long long attributionArray_Count; // @dynamic attributionArray_Count;
@property(copy, nonatomic) NSString *cameraRollId; // @dynamic cameraRollId;
@property(retain, nonatomic) SCPBSnapCreatorAttribution *creatorAttribution; // @dynamic creatorAttribution;
@property(copy, nonatomic) NSString *externalId; // @dynamic externalId;
@property(nonatomic) _Bool hasCreatorAttribution; // @dynamic hasCreatorAttribution;
@property(copy, nonatomic) NSString *saverUserId; // @dynamic saverUserId;
@property(nonatomic) int type; // @dynamic type;

@end

