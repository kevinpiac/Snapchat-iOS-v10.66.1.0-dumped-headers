//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class IMPBusinessProfileAndUserData, IMPBusinessStory;

@interface IMPSearchBusinessProfileResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasProfile; // @dynamic hasProfile;
@property(nonatomic) _Bool hasStory; // @dynamic hasStory;
@property(retain, nonatomic) IMPBusinessProfileAndUserData *profile; // @dynamic profile;
@property(retain, nonatomic) IMPBusinessStory *story; // @dynamic story;

@end

