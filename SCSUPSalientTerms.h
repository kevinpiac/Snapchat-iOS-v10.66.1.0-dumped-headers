//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCSUPSalientTerms : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long lastUpdatedTimestampInMsecs; // @dynamic lastUpdatedTimestampInMsecs;
@property(retain, nonatomic) NSMutableArray *negativeSalientTermsArray; // @dynamic negativeSalientTermsArray;
@property(readonly, nonatomic) unsigned long long negativeSalientTermsArray_Count; // @dynamic negativeSalientTermsArray_Count;
@property(retain, nonatomic) NSMutableArray *salientTermsArray; // @dynamic salientTermsArray;
@property(readonly, nonatomic) unsigned long long salientTermsArray_Count; // @dynamic salientTermsArray_Count;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

