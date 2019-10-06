//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, SCSLIStoryFeedBaseInfo;

@interface SCSLIStoryFeedItemViewSession : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *attachedInfo; // @dynamic attachedInfo;
@property(retain, nonatomic) SCSLIStoryFeedBaseInfo *baseInfo; // @dynamic baseInfo;
@property(nonatomic) int entryEvent; // @dynamic entryEvent;
@property(nonatomic) int exitEvent; // @dynamic exitEvent;
@property(nonatomic) _Bool hasBaseInfo; // @dynamic hasBaseInfo;
@property(nonatomic) float impressionFraction; // @dynamic impressionFraction;
@property(nonatomic) int maxSubitemViewIndex; // @dynamic maxSubitemViewIndex;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(nonatomic) int numSubitemsAvailable; // @dynamic numSubitemsAvailable;
@property(nonatomic) int numUniqueSubitemsViewed; // @dynamic numUniqueSubitemsViewed;
@property(copy, nonatomic) NSString *subitemId; // @dynamic subitemId;
@property(nonatomic) int subitemIndex; // @dynamic subitemIndex;
@property(copy, nonatomic) NSString *tileId; // @dynamic tileId;
@property(nonatomic) float totalMediaDurationSecs; // @dynamic totalMediaDurationSecs;
@property(copy, nonatomic) NSString *triggeringItemId; // @dynamic triggeringItemId;
@property(nonatomic) int triggeringItemPlaylistOffset; // @dynamic triggeringItemPlaylistOffset;
@property(copy, nonatomic) NSString *variantId; // @dynamic variantId;
@property(nonatomic) long long viewSessionStartMsecs; // @dynamic viewSessionStartMsecs;
@property(nonatomic) int viewSessionType; // @dynamic viewSessionType;
@property(nonatomic) float viewTimeSecs; // @dynamic viewTimeSecs;
@property(nonatomic) _Bool withViewedState; // @dynamic withViewedState;

@end
