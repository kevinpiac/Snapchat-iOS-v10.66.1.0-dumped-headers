//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringBoolDictionary, NSString;

@interface IMPReportHighlightCallbackRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBStringBoolDictionary *actions; // @dynamic actions;
@property(readonly, nonatomic) unsigned long long actions_Count; // @dynamic actions_Count;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *originalPayload; // @dynamic originalPayload;
@property(copy, nonatomic) NSString *referenceId; // @dynamic referenceId;
@property(copy, nonatomic) NSString *source; // @dynamic source;

@end
