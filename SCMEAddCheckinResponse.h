//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMEMyExplorerStatus, SCMT1StickerID;

@interface SCMEAddCheckinResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMyNewStatus; // @dynamic hasMyNewStatus;
@property(nonatomic) _Bool hasSticker; // @dynamic hasSticker;
@property(retain, nonatomic) SCMEMyExplorerStatus *myNewStatus; // @dynamic myNewStatus;
@property(nonatomic) _Bool showPassportNotification; // @dynamic showPassportNotification;
@property(copy, nonatomic) NSString *speechText; // @dynamic speechText;
@property(copy, nonatomic) NSString *statusId; // @dynamic statusId;
@property(retain, nonatomic) SCMT1StickerID *sticker; // @dynamic sticker;

@end

