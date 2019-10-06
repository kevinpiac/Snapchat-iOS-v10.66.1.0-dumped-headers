//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString;
@protocol SCFriendUnifiedProfileCognacNotificationActionHandlerDelegate;

@interface SCFriendUnifiedProfileCognacNotificationActionHandler : NSObject <SCActionHandling>
{
    NSString *_friendDisplayName;
    NSString *_conversationId;
    id <SCFriendUnifiedProfileCognacNotificationActionHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didChangeCognacNotificationStatus:(_Bool)arg1;
- (void)_didFetchCurrentNotificationStatus:(_Bool)arg1 actionData:(id)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithFriendDisplayName:(id)arg1 conversationId:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

