//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapNotificationPresenting-Protocol.h"

@class NSString, SCAppNotificationProvider, SCMapBitmojiAvatarGenerator;
@protocol SCBitmojiAvatarProvider, SCNotificationManager;

@interface SCMapNotificationPresenter : NSObject <SCMapNotificationPresenting>
{
    id <SCBitmojiAvatarProvider> _bitmojiAvatarProvider;
    SCMapBitmojiAvatarGenerator *_mapBitmojiAvatarGenerator;
    id <SCNotificationManager> _notificationManager;
    SCAppNotificationProvider *_notificationProvider;
}

- (void).cxx_destruct;
- (void)_completeNotification:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)displayNotificationForGhostModeCompleteWithResult:(CDUnknownBlockType)arg1;
- (id)initWithBitmojiAvatarProvider:(id)arg1 mapBitmojiAvatarGenerator:(id)arg2 notificationManager:(id)arg3 notificationProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

