//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerProfilePresenterProtocol-Protocol.h"

@class NSString, SCUserSession, UIViewController;
@protocol NavigationDelegate;

@interface SCLensExplorerProfilePresenter : NSObject <SCLensExplorerProfilePresenterProtocol>
{
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    UIViewController *_profileViewController;
    CDUnknownBlockType _dismissBlock;
}

- (void).cxx_destruct;
- (void)_presentCommunityProfileFromViewController:(id)arg1 userId:(id)arg2 displayName:(id)arg3 loggingInfo:(id)arg4 dismissBlock:(CDUnknownBlockType)arg5;
- (void)_presentPublicProfileFromViewController:(id)arg1 profileId:(id)arg2 loggingInfo:(id)arg3 dismissBlock:(CDUnknownBlockType)arg4;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2;
- (void)presentProfileViewControllerFromViewController:(id)arg1 lensCreator:(id)arg2 sourcePageType:(long long)arg3 dismissBlock:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) UIViewController *profileViewController; // @synthesize profileViewController=_profileViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
