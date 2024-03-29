//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCAdsAdResponseData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *adId; // @dynamic adId;
@property(copy, nonatomic) NSString *adKey; // @dynamic adKey;
@property(nonatomic) int adType; // @dynamic adType;
@property(copy, nonatomic) NSString *brandHeadlineMessage; // @dynamic brandHeadlineMessage;
@property(copy, nonatomic) NSString *brandName; // @dynamic brandName;
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(copy, nonatomic) NSString *creativeId; // @dynamic creativeId;
@property(nonatomic) _Bool isPrivateURL; // @dynamic isPrivateURL;
@property(retain, nonatomic) NSMutableArray *renditionsArray; // @dynamic renditionsArray;
@property(readonly, nonatomic) unsigned long long renditionsArray_Count; // @dynamic renditionsArray_Count;
@property(copy, nonatomic) NSString *tileHeadline; // @dynamic tileHeadline;
@property(copy, nonatomic) NSString *tileImageURL; // @dynamic tileImageURL;
@property(copy, nonatomic) NSString *tileLogoURL; // @dynamic tileLogoURL;

@end

