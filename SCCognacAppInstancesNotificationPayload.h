//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCognacAppInstancesChatDock, SCCognacAppInstancesChatDockEntry;

@interface SCCognacAppInstancesNotificationPayload : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appDisplayName; // @dynamic appDisplayName;
@property(copy, nonatomic) NSString *appIconURL; // @dynamic appIconURL;
@property(retain, nonatomic) SCCognacAppInstancesChatDock *chatDock; // @dynamic chatDock;
@property(retain, nonatomic) SCCognacAppInstancesChatDockEntry *chatDockEntry; // @dynamic chatDockEntry;
@property(nonatomic) _Bool hasChatDock; // @dynamic hasChatDock;
@property(nonatomic) _Bool hasChatDockEntry; // @dynamic hasChatDockEntry;

@end

