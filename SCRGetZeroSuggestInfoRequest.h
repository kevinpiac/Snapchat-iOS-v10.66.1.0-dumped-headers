//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCRGetSearchCardsRequest;

@interface SCRGetZeroSuggestInfoRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOriginalRequest; // @dynamic hasOriginalRequest;
@property(retain, nonatomic) NSMutableArray *infoRequestsArray; // @dynamic infoRequestsArray;
@property(readonly, nonatomic) unsigned long long infoRequestsArray_Count; // @dynamic infoRequestsArray_Count;
@property(retain, nonatomic) SCRGetSearchCardsRequest *originalRequest; // @dynamic originalRequest;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;

@end

