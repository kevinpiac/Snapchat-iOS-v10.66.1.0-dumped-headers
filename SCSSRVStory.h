//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCSSMMomentStoryCard, SCSSRVStoryMetadata;

@interface SCSSRVStory : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasMomentStoryCard; // @dynamic hasMomentStoryCard;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) SCSSRVStoryMetadata *metadata; // @dynamic metadata;
@property(retain, nonatomic) SCSSMMomentStoryCard *momentStoryCard; // @dynamic momentStoryCard;
@property(retain, nonatomic) NSMutableArray *snapsArray; // @dynamic snapsArray;
@property(readonly, nonatomic) unsigned long long snapsArray_Count; // @dynamic snapsArray_Count;

@end

