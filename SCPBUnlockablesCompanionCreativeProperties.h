//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCPBUnlockablesRatingStickerProperties;

@interface SCPBUnlockablesCompanionCreativeProperties : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *companionCreativeType; // @dynamic companionCreativeType;
@property(nonatomic) _Bool hasRatingStickerProperties; // @dynamic hasRatingStickerProperties;
@property(nonatomic) _Bool modifiable; // @dynamic modifiable;
@property(nonatomic) _Bool movable; // @dynamic movable;
@property(retain, nonatomic) SCPBUnlockablesRatingStickerProperties *ratingStickerProperties; // @dynamic ratingStickerProperties;

@end

