//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCSAISnapInsights : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long impressions; // @dynamic impressions;
@property(copy, nonatomic) NSString *rawSnapId; // @dynamic rawSnapId;
@property(nonatomic) long long reach; // @dynamic reach;
@property(nonatomic) long long screenshots; // @dynamic screenshots;
@property(nonatomic) long long shares; // @dynamic shares;
@property(copy, nonatomic) NSString *thumbnailIv; // @dynamic thumbnailIv;
@property(copy, nonatomic) NSString *thumbnailKey; // @dynamic thumbnailKey;
@property(copy, nonatomic) NSString *thumbnailURL; // @dynamic thumbnailURL;

@end
