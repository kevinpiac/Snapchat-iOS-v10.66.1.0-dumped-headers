//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCCognacAppInstancesChatDock, SCCognacAppInstancesChatDockEntry;

@interface SCCognacLaunchMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCCognacAppInstancesChatDock *chatDock; // @dynamic chatDock;
@property(nonatomic) _Bool hasChatDock; // @dynamic hasChatDock;
@property(nonatomic) _Bool hasLaunchedChatDockEntry; // @dynamic hasLaunchedChatDockEntry;
@property(retain, nonatomic) SCCognacAppInstancesChatDockEntry *launchedChatDockEntry; // @dynamic launchedChatDockEntry;

@end

