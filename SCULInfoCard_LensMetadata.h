//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSString;

@interface SCULInfoCard_LensMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBEnumArray *availableLensActionsArray; // @dynamic availableLensActionsArray;
@property(readonly, nonatomic) unsigned long long availableLensActionsArray_Count; // @dynamic availableLensActionsArray_Count;
@property(copy, nonatomic) NSString *deepLink; // @dynamic deepLink;
@property(copy, nonatomic) NSString *iconURL; // @dynamic iconURL;
@property(copy, nonatomic) NSString *publicName; // @dynamic publicName;

@end

