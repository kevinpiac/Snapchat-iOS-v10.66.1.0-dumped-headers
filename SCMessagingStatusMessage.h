//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCMessagingCallingStatusMessage, SCMessagingMessageEraseStatusMessage, SCMessagingNameChangeStatusMessage, SCMessagingParticipantChangeStatusMessage, SCMessagingScreenCaptureStatusMessage;

@interface SCMessagingStatusMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMessagingCallingStatusMessage *callingStatus; // @dynamic callingStatus;
@property(retain, nonatomic) SCMessagingMessageEraseStatusMessage *messageErase; // @dynamic messageErase;
@property(retain, nonatomic) SCMessagingNameChangeStatusMessage *nameStatusChange; // @dynamic nameStatusChange;
@property(retain, nonatomic) SCMessagingParticipantChangeStatusMessage *participantChange; // @dynamic participantChange;
@property(retain, nonatomic) SCMessagingScreenCaptureStatusMessage *screenCapture; // @dynamic screenCapture;
@property(readonly, nonatomic) int statusOneOfCase; // @dynamic statusOneOfCase;

@end

