//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCSSUBGetSubscriptionResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(nonatomic) _Bool shouldHideIcons; // @dynamic shouldHideIcons;
@property(nonatomic) _Bool shouldHideImage; // @dynamic shouldHideImage;
@property(retain, nonatomic) NSMutableArray *subscriptionsArray; // @dynamic subscriptionsArray;
@property(readonly, nonatomic) unsigned long long subscriptionsArray_Count; // @dynamic subscriptionsArray_Count;
@property(copy, nonatomic) NSString *toggleOnBackgroundColorEnd; // @dynamic toggleOnBackgroundColorEnd;
@property(copy, nonatomic) NSString *toggleOnBackgroundColorStart; // @dynamic toggleOnBackgroundColorStart;

@end

