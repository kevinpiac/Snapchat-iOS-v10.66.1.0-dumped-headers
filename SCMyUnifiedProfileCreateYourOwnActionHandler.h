//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCUserSession, UIViewController;

@interface SCMyUnifiedProfileCreateYourOwnActionHandler : NSObject <SCTraceEnabled, SCActionHandling>
{
    SCUserSession *_userSession;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
- (void)_handleCreateHomeFilterTap;
- (void)_presentInitialCYOController;
- (void)_presentManageHomeFilterController;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
