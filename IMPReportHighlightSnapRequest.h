//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class IMPCommonReportInfo, NSString;

@interface IMPReportHighlightSnapRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) IMPCommonReportInfo *commonInfo; // @dynamic commonInfo;
@property(nonatomic) _Bool hasCommonInfo; // @dynamic hasCommonInfo;
@property(copy, nonatomic) NSString *highlightSnapId; // @dynamic highlightSnapId;

@end

