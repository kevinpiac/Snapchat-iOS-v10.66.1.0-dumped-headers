//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface SCSnapKitProtoClientSideExperiment : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int experimentId; // @dynamic experimentId;
@property(retain, nonatomic) NSMutableDictionary *experimentSettings; // @dynamic experimentSettings;
@property(readonly, nonatomic) unsigned long long experimentSettings_Count; // @dynamic experimentSettings_Count;
@property(copy, nonatomic) NSString *studyId; // @dynamic studyId;

@end

