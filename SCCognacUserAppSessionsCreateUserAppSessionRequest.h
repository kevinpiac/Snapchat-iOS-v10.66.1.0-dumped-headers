//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCognacAppsMajorUpdateVersion;

@interface SCCognacUserAppSessionsCreateUserAppSessionRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appInstanceId; // @dynamic appInstanceId;
@property(copy, nonatomic) NSString *buildId; // @dynamic buildId;
@property(nonatomic) _Bool hasMajorUpdateVersion; // @dynamic hasMajorUpdateVersion;
@property(retain, nonatomic) SCCognacAppsMajorUpdateVersion *majorUpdateVersion; // @dynamic majorUpdateVersion;

@end

