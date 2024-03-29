//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventListener-Protocol.h"
#import "SCOperaNotificationOptInStatusHandler-Protocol.h"

@class NSString;

@interface SCDiscoverFeedFriendStoryOptInStatusHandler : NSObject <SCEventListener, SCOperaNotificationOptInStatusHandler>
{
    CDUnknownBlockType _callback;
    NSString *_storyPosterUserId;
    NSString *_username;
}

- (void).cxx_destruct;
- (void)_callUpdateIsOptedInForNotifications:(_Bool)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithStoryPosterUserId:(id)arg1;
- (id)initWithStoryUsername:(id)arg1;
- (void)setCallbackForStoryUpdate:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

