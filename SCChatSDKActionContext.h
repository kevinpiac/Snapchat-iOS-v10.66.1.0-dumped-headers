//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatSDKActionContextProtocol-Protocol.h"

@class UIViewController;
@protocol NavigationDelegate, SCChatCellBaseGestureDelegate;

@interface SCChatSDKActionContext : NSObject <SCChatSDKActionContextProtocol>
{
    UIViewController<SCChatCellBaseGestureDelegate> *_parentViewController;
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (void)followDeepLinkWithUrl:(id)arg1 additionalInfo:(id)arg2;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (void)operaDidDisappear;
- (void)operaWillAppear;
@property(nonatomic) __weak UIViewController<SCChatCellBaseGestureDelegate> *parentViewController; // @synthesize parentViewController=_parentViewController;
- (id)presentingViewController;
- (void)preserveMessageForMessageId:(id)arg1 conversationId:(id)arg2;
- (id)userSession;

@end

