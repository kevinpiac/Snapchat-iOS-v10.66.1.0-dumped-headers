//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCR2FriendStoryHighlightScore : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *friendsArray; // @dynamic friendsArray;
@property(readonly, nonatomic) unsigned long long friendsArray_Count; // @dynamic friendsArray_Count;
@property(nonatomic) long long runTimestampInMsecs; // @dynamic runTimestampInMsecs;

@end

