//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class IMPSeasonMetadataPage, IMPShowMetadata, IMPWatchedState, NSString, StoryDoc;

@interface IMPGetShowDisplayInfoResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSeasonsPage; // @dynamic hasSeasonsPage;
@property(nonatomic) _Bool hasShowMetadata; // @dynamic hasShowMetadata;
@property(nonatomic) _Bool hasUpNext; // @dynamic hasUpNext;
@property(nonatomic) _Bool hasUpNextWatchedState; // @dynamic hasUpNextWatchedState;
@property(nonatomic) long long initiallyDisplayedSeasonIndex; // @dynamic initiallyDisplayedSeasonIndex;
@property(nonatomic) long long publisherId; // @dynamic publisherId;
@property(copy, nonatomic) NSString *publisherName; // @dynamic publisherName;
@property(retain, nonatomic) IMPSeasonMetadataPage *seasonsPage; // @dynamic seasonsPage;
@property(retain, nonatomic) IMPShowMetadata *showMetadata; // @dynamic showMetadata;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) StoryDoc *upNext; // @dynamic upNext;
@property(retain, nonatomic) IMPWatchedState *upNextWatchedState; // @dynamic upNextWatchedState;

@end

