//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCBoltContentDescriptor;

@interface SCBoltCreateFromBytesResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCBoltContentDescriptor *contentDescriptor; // @dynamic contentDescriptor;
@property(copy, nonatomic) NSString *contentId; // @dynamic contentId;
@property(nonatomic) _Bool hasContentDescriptor; // @dynamic hasContentDescriptor;

@end

