//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Value, NSData, NSString;

@interface SCAdsInitResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *batchTrackHostAndPathV2; // @dynamic batchTrackHostAndPathV2;
@property(nonatomic) _Bool hasTimeToLiveSeconds; // @dynamic hasTimeToLiveSeconds;
@property(copy, nonatomic) NSString *initHostAndPath; // @dynamic initHostAndPath;
@property(copy, nonatomic) NSString *initHostAndPathV2; // @dynamic initHostAndPathV2;
@property(copy, nonatomic) NSString *serveHostAndPath; // @dynamic serveHostAndPath;
@property(copy, nonatomic) NSString *serveHostAndPathBatch; // @dynamic serveHostAndPathBatch;
@property(copy, nonatomic) NSData *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) GPBInt32Value *timeToLiveSeconds; // @dynamic timeToLiveSeconds;
@property(copy, nonatomic) NSString *trackAndGetHostAndPath; // @dynamic trackAndGetHostAndPath;
@property(copy, nonatomic) NSString *trackHostAndPath; // @dynamic trackHostAndPath;
@property(copy, nonatomic) NSString *trackHostAndPathV2; // @dynamic trackHostAndPathV2;

@end

