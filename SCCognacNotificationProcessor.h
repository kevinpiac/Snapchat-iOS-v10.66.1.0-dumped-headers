//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAppNotificationProcessor-Protocol.h"

@class SCCognacInviteSoundServices, SCCognacWebProxyPreloader;

@interface SCCognacNotificationProcessor : NSObject <SCAppNotificationProcessor>
{
    SCCognacInviteSoundServices *_soundServices;
    SCCognacWebProxyPreloader *_webProxyPreloader;
}

- (void).cxx_destruct;
- (void)_processCognacNotificationToUpdateUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1;
- (void)processNotification:(id)arg1;
- (void)removeNotification:(id)arg1;
- (long long)shouldFilterNotification:(id)arg1;
- (long long)shouldFilterNotification:(id)arg1 withSystemCompletion:(id)arg2;

@end

