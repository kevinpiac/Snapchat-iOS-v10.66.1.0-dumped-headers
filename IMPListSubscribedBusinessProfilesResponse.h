//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface IMPListSubscribedBusinessProfilesResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *nextPageId; // @dynamic nextPageId;
@property(copy, nonatomic) NSString *pageId; // @dynamic pageId;
@property(retain, nonatomic) NSMutableArray *profilesArray; // @dynamic profilesArray;
@property(readonly, nonatomic) unsigned long long profilesArray_Count; // @dynamic profilesArray_Count;

@end
