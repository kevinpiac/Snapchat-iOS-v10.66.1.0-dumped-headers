//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCPBIntegerPoint;

@interface SCPBTextShadowParameters : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float blurRadius; // @dynamic blurRadius;
@property(copy, nonatomic) NSString *color; // @dynamic color;
@property(nonatomic) _Bool hasShadowOffset; // @dynamic hasShadowOffset;
@property(retain, nonatomic) SCPBIntegerPoint *shadowOffset; // @dynamic shadowOffset;

@end

