//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface STOVisibility_ContentGeoAccess : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *discoverFeedWhitelistArray; // @dynamic discoverFeedWhitelistArray;
@property(readonly, nonatomic) unsigned long long discoverFeedWhitelistArray_Count; // @dynamic discoverFeedWhitelistArray_Count;
@property(retain, nonatomic) NSMutableArray *searchWhitelistArray; // @dynamic searchWhitelistArray;
@property(readonly, nonatomic) unsigned long long searchWhitelistArray_Count; // @dynamic searchWhitelistArray_Count;
@property(retain, nonatomic) NSMutableArray *shareWhitelistArray; // @dynamic shareWhitelistArray;
@property(readonly, nonatomic) unsigned long long shareWhitelistArray_Count; // @dynamic shareWhitelistArray_Count;
@property(retain, nonatomic) NSMutableArray *snapcodeWhitelistArray; // @dynamic snapcodeWhitelistArray;
@property(readonly, nonatomic) unsigned long long snapcodeWhitelistArray_Count; // @dynamic snapcodeWhitelistArray_Count;

@end

