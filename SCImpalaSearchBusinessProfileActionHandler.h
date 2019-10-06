//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, SCSearchSession, UIViewController;
@protocol NavigationDelegate;

@interface SCImpalaSearchBusinessProfileActionHandler : NSObject <SCActionHandling>
{
    SCSearchSession *_session;
    id <NavigationDelegate> _navigationDelegate;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
- (void)_playBusinessProfileStoryWithId:(id)arg1 baseView:(id)arg2;
- (void)_presentProfile:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithSession:(id)arg1;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

