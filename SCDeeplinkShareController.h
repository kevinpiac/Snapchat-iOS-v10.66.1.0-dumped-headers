//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSendPreviewURLViewModelDelegate-Protocol.h"
#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"

@class NSString, NSURL, SCSendToTransitionProvider, SCUserSession, UIImage, UIViewController;
@protocol SCSendToScreen;

@interface SCDeeplinkShareController : NSObject <SCSendToDelegate, SCSendPreviewURLViewModelDelegate, SCSendToNavigationDelegate>
{
    SCUserSession *_userSession;
    UIViewController<SCSendToScreen> *_sendViewController;
    NSURL *_deeplinkURL;
    UIImage *_attachedImage;
    NSString *_sendingText;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    unsigned long long _deepLinkType;
    _Bool _statusBarHiddenPrevious;
    long long _previousStatusBarStyle;
}

- (void).cxx_destruct;
- (void)_sendDeeplinkShareToRecipients:(id)arg1 mischiefs:(id)arg2 additionalText:(id)arg3;
- (void)_sendToFromViewController:(id)arg1 previewViewModel:(id)arg2 pageType:(id)arg3;
- (void)didUpdateUrlSummary:(id)arg1;
- (void)dismissSendViewController:(id)arg1;
- (id)initWithUserSession:(id)arg1 deeplinkURL:(id)arg2 attachedImage:(id)arg3;
- (void)sendToFromViewController:(id)arg1 deepLinkType:(unsigned long long)arg2 pageType:(id)arg3 url:(id)arg4 attachedImage:(id)arg5;
- (void)sendToFromViewController:(id)arg1 lens:(id)arg2;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 mischiefs:(id)arg5 businessProfiles:(id)arg6 appStories:(id)arg7 gallery:(_Bool)arg8 inviteRecipientShown:(long long)arg9 additionalText:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

