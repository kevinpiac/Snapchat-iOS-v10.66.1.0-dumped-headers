//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, SCAlertViewFlow;
@protocol SCChatGroup;

@protocol SCEditGroupAlertViewDelegate
- (void)didPressAddToGroupOptionForGroup:(id <SCChatGroup>)arg1 inAlertFlow:(SCAlertViewFlow *)arg2;
- (void)didPressEditNameOptionForGroupId:(NSString *)arg1 inAlertFlow:(SCAlertViewFlow *)arg2;
- (void)didPressEditNotificationOptionForGroupId:(NSString *)arg1 notificationStatus:(_Bool)arg2;
- (void)didPressLeaveGroupOptionForGroupId:(NSString *)arg1 inAlertFlow:(SCAlertViewFlow *)arg2;
- (void)didPressMuteStoryOptionForGroup:(id <SCChatGroup>)arg1 inAlertFlow:(SCAlertViewFlow *)arg2;
@end
