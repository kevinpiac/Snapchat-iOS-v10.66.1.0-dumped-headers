//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCWAWebAttachmentResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int queryId; // @dynamic queryId;
@property(retain, nonatomic) NSMutableArray *queryResultsArray; // @dynamic queryResultsArray;
@property(readonly, nonatomic) unsigned long long queryResultsArray_Count; // @dynamic queryResultsArray_Count;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

