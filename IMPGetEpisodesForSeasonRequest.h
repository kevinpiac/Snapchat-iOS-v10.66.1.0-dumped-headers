//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface IMPGetEpisodesForSeasonRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool consistent; // @dynamic consistent;
@property(copy, nonatomic) NSString *pageId; // @dynamic pageId;
@property(copy, nonatomic) NSString *seasonId; // @dynamic seasonId;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

