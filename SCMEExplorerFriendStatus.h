//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCMEExplorerFriendStatus : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *status; // @dynamic status;
@property(retain, nonatomic) NSMutableArray *statusDataArray; // @dynamic statusDataArray;
@property(readonly, nonatomic) unsigned long long statusDataArray_Count; // @dynamic statusDataArray_Count;
@property(nonatomic) int statusType; // @dynamic statusType;
@property(nonatomic) double zoom; // @dynamic zoom;

@end

