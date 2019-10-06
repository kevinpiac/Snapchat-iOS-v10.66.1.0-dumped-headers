//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "SCActionHandling-Protocol.h"

@class NSString, SCLazy, UIViewController;

@interface SCAddFriendsShareMySnapcodeToSMSActionHandler : NSObject <MFMessageComposeViewControllerDelegate, SCActionHandling>
{
    UIViewController *_presentingViewController;
    SCLazy *_mySnapcodeImageProvider;
    SCLazy *_mySnapcodeURLProvider;
}

- (void).cxx_destruct;
- (void)_presentMySnapcodeImage:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithPresentingViewController:(id)arg1 mySnapcodeImageProvider:(id)arg2 mySnapcodeURLProvider:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

