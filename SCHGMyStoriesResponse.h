//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, SCHGPostedStory;

@interface SCHGMyStoriesResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *groupStoriesArray; // @dynamic groupStoriesArray;
@property(readonly, nonatomic) unsigned long long groupStoriesArray_Count; // @dynamic groupStoriesArray_Count;
@property(nonatomic) _Bool hasMyStory; // @dynamic hasMyStory;
@property(retain, nonatomic) SCHGPostedStory *myStory; // @dynamic myStory;
@property(retain, nonatomic) NSMutableArray *ourStoriesArray; // @dynamic ourStoriesArray;
@property(readonly, nonatomic) unsigned long long ourStoriesArray_Count; // @dynamic ourStoriesArray_Count;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) long long responseTsMs; // @dynamic responseTsMs;
@property(copy, nonatomic) NSData *syncToken; // @dynamic syncToken;

@end

