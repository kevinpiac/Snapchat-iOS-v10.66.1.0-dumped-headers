//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SASMediaInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *bucket; // @dynamic bucket;
@property(copy, nonatomic) NSString *mediaPath; // @dynamic mediaPath;
@property(nonatomic) long long mediaSize; // @dynamic mediaSize;
@property(copy, nonatomic) NSString *thumbnailPath; // @dynamic thumbnailPath;

@end

