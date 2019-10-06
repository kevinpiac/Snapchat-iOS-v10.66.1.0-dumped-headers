//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDeepLinkProcessor-Protocol.h"

@class NSString;
@protocol NavigationDelegate;

@interface SCLensExplorerDeepLinkProcessor : NSObject <SCDeepLinkProcessor>
{
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (void)_presentLensChallengeFeedWithId:(id)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3;
- (_Bool)canProcessForNonLoggedInUser;
- (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 additionalInfo:(id)arg3;
- (id)initWithNavigationDelegate:(id)arg1;
- (_Bool)needsNavigationDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

