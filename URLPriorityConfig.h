//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface URLPriorityConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *postfixURL; // @dynamic postfixURL;
@property(copy, nonatomic) NSString *prefixURL; // @dynamic prefixURL;
@property(nonatomic) int priority; // @dynamic priority;
@property(copy, nonatomic) NSString *regexURL; // @dynamic regexURL;

@end

