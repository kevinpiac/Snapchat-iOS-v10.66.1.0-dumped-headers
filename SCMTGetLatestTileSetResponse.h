//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCMTRenderConfig;

@interface SCMTGetLatestTileSetResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRenderConfig; // @dynamic hasRenderConfig;
@property(retain, nonatomic) SCMTRenderConfig *renderConfig; // @dynamic renderConfig;
@property(retain, nonatomic) NSMutableArray *tileSetInfosArray; // @dynamic tileSetInfosArray;
@property(readonly, nonatomic) unsigned long long tileSetInfosArray_Count; // @dynamic tileSetInfosArray_Count;

@end

