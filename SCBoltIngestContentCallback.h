//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCBoltPubSubCallback, SCBoltSqsCallback;

@interface SCBoltIngestContentCallback : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int callbackOneOfCase; // @dynamic callbackOneOfCase;
@property(retain, nonatomic) SCBoltPubSubCallback *pubSubCallback; // @dynamic pubSubCallback;
@property(retain, nonatomic) SCBoltSqsCallback *sqsCallback; // @dynamic sqsCallback;

@end
