//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface IMPUserDisplayInfoRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *callingUserId; // @dynamic callingUserId;
@property(retain, nonatomic) NSMutableArray *userIdsArray; // @dynamic userIdsArray;
@property(readonly, nonatomic) unsigned long long userIdsArray_Count; // @dynamic userIdsArray_Count;

@end

