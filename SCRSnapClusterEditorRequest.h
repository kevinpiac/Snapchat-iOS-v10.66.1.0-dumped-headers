//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface SCRSnapClusterEditorRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *curationType; // @dynamic curationType;
@property(copy, nonatomic) NSString *curatorEmail; // @dynamic curatorEmail;
@property(copy, nonatomic) NSString *curatorName; // @dynamic curatorName;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) long long timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSMutableDictionary *updateDict; // @dynamic updateDict;
@property(readonly, nonatomic) unsigned long long updateDict_Count; // @dynamic updateDict_Count;

@end
