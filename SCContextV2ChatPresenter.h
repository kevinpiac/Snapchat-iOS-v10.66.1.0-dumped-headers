//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextV2ChatPresenting-Protocol.h"

@class NSString, SCUserSession;
@protocol NavigationDelegate, SCChatConversationManager, SCOperaImageProvider;

@interface SCContextV2ChatPresenter : NSObject <SCContextV2ChatPresenting>
{
    id <SCOperaImageProvider> _imageProvider;
    id <SCChatConversationManager> _converationManager;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (id)createContextMessagingControllerWithParentViewController:(id)arg1 withViewAboveKeyboard:(id)arg2 options:(unsigned long long)arg3 contextSession:(id)arg4;
- (id)initWithImageProvider:(id)arg1 conversationManager:(id)arg2 userSession:(id)arg3 navigationDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

