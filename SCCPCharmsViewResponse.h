//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, SCCPUUID;

@interface SCCPCharmsViewResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRequestId; // @dynamic hasRequestId;
@property(retain, nonatomic) SCCPUUID *requestId; // @dynamic requestId;
@property(nonatomic) long long requestTsMs; // @dynamic requestTsMs;
@property(retain, nonatomic) GPBInt32Array *viewedCharmIdsArray; // @dynamic viewedCharmIdsArray;
@property(readonly, nonatomic) unsigned long long viewedCharmIdsArray_Count; // @dynamic viewedCharmIdsArray_Count;

@end

