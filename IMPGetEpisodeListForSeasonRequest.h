//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface IMPGetEpisodeListForSeasonRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *pageId; // @dynamic pageId;
@property(nonatomic) int pageSize; // @dynamic pageSize;
@property(copy, nonatomic) NSString *seasonId; // @dynamic seasonId;
@property(copy, nonatomic) NSString *showId; // @dynamic showId;

@end

