//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SnapContextViewerContentInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *gameUserToken; // @dynamic gameUserToken;
@property(retain, nonatomic) NSMutableArray *mentionedFriendUserIdsArray; // @dynamic mentionedFriendUserIdsArray;
@property(readonly, nonatomic) unsigned long long mentionedFriendUserIdsArray_Count; // @dynamic mentionedFriendUserIdsArray_Count;

@end
