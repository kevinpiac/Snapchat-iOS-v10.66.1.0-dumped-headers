//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCBoltUserContext;

@interface SCBoltGetUploadLocationsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int batchSize; // @dynamic batchSize;
@property(nonatomic) _Bool hasUserContext; // @dynamic hasUserContext;
@property(retain, nonatomic) SCBoltUserContext *userContext; // @dynamic userContext;

@end
