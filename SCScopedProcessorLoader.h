//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSArray, NSString, SCScopedAccess, SCUserSession;
@protocol SCNotificationManager, SCNotificationProcessor;

@interface SCScopedProcessorLoader : NSObject <SCUserSessionScoped>
{
    id <SCNotificationManager> _notificationManager;
    NSArray *_processors;
    SCUserSession *_userSession;
    SCScopedAccess *_scopedConversationManager;
    id <SCNotificationProcessor> _chatNotificationProcessor;
    id <SCNotificationProcessor> _arroyoNotificationProcessor;
}

- (void).cxx_destruct;
- (void)_removeChatProcessors;
- (id)initWithUserSession:(id)arg1 notificationManager:(id)arg2;
- (void)invalidate;
- (_Bool)isLoaded;
- (void)setupScopedProcessors;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
