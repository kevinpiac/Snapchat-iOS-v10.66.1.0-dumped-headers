//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCCognacAppInstancesAppInstanceScope;

@interface SCCognacAppInstancesChatDock : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCCognacAppInstancesAppInstanceScope *appInstanceScope; // @dynamic appInstanceScope;
@property(retain, nonatomic) NSMutableArray *chatDockEntriesArray; // @dynamic chatDockEntriesArray;
@property(readonly, nonatomic) unsigned long long chatDockEntriesArray_Count; // @dynamic chatDockEntriesArray_Count;
@property(nonatomic) _Bool hasAppInstanceScope; // @dynamic hasAppInstanceScope;
@property(nonatomic) long long version; // @dynamic version;

@end

