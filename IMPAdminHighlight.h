//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, StoryDoc;

@interface IMPAdminHighlight : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *coverSnapId; // @dynamic coverSnapId;
@property(nonatomic) _Bool hasStory; // @dynamic hasStory;
@property(nonatomic) _Bool isProcessing; // @dynamic isProcessing;
@property(retain, nonatomic) StoryDoc *story; // @dynamic story;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end

