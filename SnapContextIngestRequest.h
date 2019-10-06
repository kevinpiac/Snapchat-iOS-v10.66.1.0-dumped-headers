//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SnapContextInfo;

@interface SnapContextIngestRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) SnapContextInfo *contextInfo; // @dynamic contextInfo;
@property(copy, nonatomic) NSString *directSnapId; // @dynamic directSnapId;
@property(nonatomic) _Bool hasContextInfo; // @dynamic hasContextInfo;
@property(copy, nonatomic) NSString *snapId; // @dynamic snapId;
@property(nonatomic) int snapViewingContext; // @dynamic snapViewingContext;
@property(copy, nonatomic) NSString *sssId; // @dynamic sssId;
@property(copy, nonatomic) NSString *storyId; // @dynamic storyId;

@end

