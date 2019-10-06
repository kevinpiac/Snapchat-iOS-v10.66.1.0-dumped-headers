//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"

@class NSString, SCSearchModalPresentationController, SCSendToTransitionProvider, SCUserSession, Story, UIViewController;
@protocol SCSearchStoryShareSessionDelegate, SCSendToScreen;

@interface SCSearchStoryShareSession : NSObject <SCSendToDelegate, SCSendToNavigationDelegate>
{
    SCUserSession *_userSession;
    Story *_story;
    NSString *_dynamicStoryId;
    UIViewController<SCSendToScreen> *_sendVC;
    SCSearchModalPresentationController *_modalViewController;
    SCSendToTransitionProvider *_transitionProvider;
    id <SCSearchStoryShareSessionDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_dismiss;
- (id)customDismissalAnimator;
@property(nonatomic) __weak id <SCSearchStoryShareSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissSendViewController:(id)arg1;
- (id)initWithUserSession:(id)arg1 dynamicStory:(id)arg2 coverImage:(id)arg3;
- (void)leftButtonPressed;
- (void)send;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 mischiefs:(id)arg5 businessProfiles:(id)arg6 appStories:(id)arg7 gallery:(_Bool)arg8 inviteRecipientShown:(long long)arg9 additionalText:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
