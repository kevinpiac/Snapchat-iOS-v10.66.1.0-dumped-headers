//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpalaProfilePresenting-Protocol.h"

@class NSString, SCImpalaShowProfilePresenter, SCUserSession, UIViewController;
@protocol NavigationDelegate;

@interface SCImpalaProfilePresenter : NSObject <SCImpalaProfilePresenting>
{
    long long _sourcePageType;
    SCImpalaShowProfilePresenter *_presenter;
    SCUserSession *_userSession;
    UIViewController *_viewController;
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (void)_presentViewController:(id)arg1;
- (id)initWithUserSession:(id)arg1 viewController:(id)arg2 navigationDelegate:(id)arg3 sourcePageType:(long long)arg4;
@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (void)presentPublicProfileWithProfileId:(id)arg1;
- (void)presentPublisherProfileWithProfileId:(id)arg1 showId:(id)arg2;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

