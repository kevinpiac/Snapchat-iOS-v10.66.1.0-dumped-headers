//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Friend, NSNumber, NSString, SCAlertGear;

@protocol SCAlertGearDelegate <NSObject>
- (void)alertGear:(SCAlertGear *)arg1 didNotificationStatusChangeForFriend:(Friend *)arg2;
- (void)alertGear:(SCAlertGear *)arg1 didSetDisplay:(NSString *)arg2 friend:(Friend *)arg3 shouldScroll:(_Bool)arg4;
- (_Bool)alertGear:(SCAlertGear *)arg1 notificationStatusForFriend:(Friend *)arg2;

@optional
- (NSString *)blockOrUnblockButtonTitle:(Friend *)arg1;
- (void)customOperationForBlock:(Friend *)arg1 blockReasonId:(NSNumber *)arg2;
- (void)customOperationForDeleteorIgnore:(Friend *)arg1;
- (void)customOperationForEditName:(Friend *)arg1;
- (void)customOperationForReport:(Friend *)arg1;
- (void)customOperationForUnBlock:(Friend *)arg1;
- (void)didUpdateMuteState;
- (NSString *)removeOrIgnoreButtonTitle:(Friend *)arg1;
@end

