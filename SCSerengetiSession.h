//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSerengetiViewControllerOpenURLDelegate-Protocol.h"

@class NSString, SCSnapchatterServices, SCUserSession;
@protocol NavigationDelegate, SCNotificationManager;

@interface SCSerengetiSession : NSObject <SCSerengetiViewControllerOpenURLDelegate>
{
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    SCSnapchatterServices *_snapchatterServices;
    id <SCNotificationManager> _notificationManager;
}

- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 snapchatterServices:(id)arg3 notificationManager:(id)arg4;
@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) id <SCNotificationManager> notificationManager; // @synthesize notificationManager=_notificationManager;
- (_Bool)serengetiViewController:(id)arg1 openURL:(id)arg2 additionalInfo:(id)arg3;
@property(readonly, nonatomic) SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

