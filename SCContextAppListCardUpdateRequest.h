//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCContextCardsRequest;

@interface SCContextAppListCardUpdateRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appIdsArray; // @dynamic appIdsArray;
@property(readonly, nonatomic) unsigned long long appIdsArray_Count; // @dynamic appIdsArray_Count;
@property(copy, nonatomic) NSString *cardId; // @dynamic cardId;
@property(nonatomic) _Bool hasOriginalRequest; // @dynamic hasOriginalRequest;
@property(retain, nonatomic) SCContextCardsRequest *originalRequest; // @dynamic originalRequest;

@end
