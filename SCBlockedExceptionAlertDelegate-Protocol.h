//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString, SCAlertViewFlow;

@protocol SCBlockedExceptionAlertDelegate
- (void)didPressGrantExceptionForGroupId:(NSString *)arg1 blockedParticipantExceptions:(NSDictionary *)arg2;
- (void)didPressLeaveChatForGroupId:(NSString *)arg1 inAlertFlow:(SCAlertViewFlow *)arg2;
@end

