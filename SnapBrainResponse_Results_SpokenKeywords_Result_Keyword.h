//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SnapBrainResponse_Results_SpokenKeywords_Result_Keyword : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) double confidence; // @dynamic confidence;
@property(nonatomic) _Bool isBrand; // @dynamic isBrand;
@property(nonatomic) _Bool isProfanity; // @dynamic isProfanity;
@property(nonatomic) double length; // @dynamic length;
@property(nonatomic) double start; // @dynamic start;
@property(copy, nonatomic) NSString *word; // @dynamic word;

@end
