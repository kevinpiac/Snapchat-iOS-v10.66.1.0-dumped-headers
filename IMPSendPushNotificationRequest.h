//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class IMPPushNotificationData, NSString;

@interface IMPSendPushNotificationRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *businessTitle; // @dynamic businessTitle;
@property(retain, nonatomic) IMPPushNotificationData *clientData; // @dynamic clientData;
@property(nonatomic) _Bool hasClientData; // @dynamic hasClientData;
@property(copy, nonatomic) NSString *inviterUserId; // @dynamic inviterUserId;
@property(copy, nonatomic) NSString *milestoneMessageType; // @dynamic milestoneMessageType;
@property(copy, nonatomic) NSString *recipientUserId; // @dynamic recipientUserId;
@property(copy, nonatomic) NSString *roleType; // @dynamic roleType;
@property(copy, nonatomic) NSString *senderUserId; // @dynamic senderUserId;
@property(nonatomic) int type; // @dynamic type;

@end

