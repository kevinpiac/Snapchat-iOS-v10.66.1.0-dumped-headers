//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface IMPGetSubscribersResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long count; // @dynamic count;
@property(copy, nonatomic) NSString *nextPageId; // @dynamic nextPageId;
@property(copy, nonatomic) NSString *pageId; // @dynamic pageId;
@property(retain, nonatomic) NSMutableArray *subscribersArray; // @dynamic subscribersArray;
@property(readonly, nonatomic) unsigned long long subscribersArray_Count; // @dynamic subscribersArray_Count;

@end
