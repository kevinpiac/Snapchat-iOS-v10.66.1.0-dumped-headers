//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SnapContextUserInfo, SnapContextViewerCreatorInfo;

@interface SnapContextBatchCTARequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasUserInfo; // @dynamic hasUserInfo;
@property(nonatomic) _Bool hasViewerCreatorInfo; // @dynamic hasViewerCreatorInfo;
@property(retain, nonatomic) NSMutableArray *requestsArray; // @dynamic requestsArray;
@property(readonly, nonatomic) unsigned long long requestsArray_Count; // @dynamic requestsArray_Count;
@property(retain, nonatomic) SnapContextUserInfo *userInfo; // @dynamic userInfo;
@property(retain, nonatomic) SnapContextViewerCreatorInfo *viewerCreatorInfo; // @dynamic viewerCreatorInfo;

@end

