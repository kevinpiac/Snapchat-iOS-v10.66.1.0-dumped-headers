//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, VLKAuthRequest;

@interface VLKAuthResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRequestInfo; // @dynamic hasRequestInfo;
@property(nonatomic) _Bool hasResponseData; // @dynamic hasResponseData;
@property(retain, nonatomic) VLKAuthRequest *requestInfo; // @dynamic requestInfo;
@property(copy, nonatomic) NSData *responseData; // @dynamic responseData;

@end

