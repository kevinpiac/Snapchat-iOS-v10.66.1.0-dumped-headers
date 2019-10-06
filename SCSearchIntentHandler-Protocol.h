//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEventAnnouncing-Protocol.h"

@class SCAppNotification, SCSearchNavigationCoordinator;
@protocol SCSearchIntent;

@protocol SCSearchIntentHandler <SCEventAnnouncing>
- (_Bool)handleIntent:(id <SCSearchIntent>)arg1;
- (_Bool)handleIntent:(id <SCSearchIntent>)arg1 notification:(SCAppNotification *)arg2;
- (_Bool)handleIntent:(id <SCSearchIntent>)arg1 notification:(SCAppNotification *)arg2 notificationDismissed:(_Bool)arg3;
@property(nonatomic) __weak SCSearchNavigationCoordinator *searchNavigationCoordinator;
@end
