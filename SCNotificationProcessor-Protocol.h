//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCTimeboundCompletion;
@protocol SCNotification;

@protocol SCNotificationProcessor
- (void)processNotification:(id <SCNotification>)arg1;
- (long long)shouldFilterNotification:(id <SCNotification>)arg1;

@optional
- (long long)shouldFilterNotification:(id <SCNotification>)arg1 withSystemCompletion:(SCTimeboundCompletion *)arg2;
@end
