//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray;

@interface SCSUPReadReceipt : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *completeStories; // @dynamic completeStories;
@property(retain, nonatomic) NSMutableArray *impressionReceiptsArray; // @dynamic impressionReceiptsArray;
@property(readonly, nonatomic) unsigned long long impressionReceiptsArray_Count; // @dynamic impressionReceiptsArray_Count;
@property(nonatomic) long long lastUpdatedTimestampInMsecs; // @dynamic lastUpdatedTimestampInMsecs;
@property(copy, nonatomic) NSData *readStories; // @dynamic readStories;

@end

