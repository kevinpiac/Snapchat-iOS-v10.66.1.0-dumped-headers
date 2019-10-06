//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchSectionCreating-Protocol.h"

@class NSString, SCScopedAccess, SCSearchNavigationCoordinator, SCSearchSession, SCSearchSnapchattersActionHandler, UIViewController;
@protocol NavigationDelegate, SCPageNameLogging, SCSearchCameraDismissing;

@interface SCSearchUniversalSearchSectionCreator : NSObject <SCSearchSectionCreating>
{
    SCSearchSession *_searchSession;
    SCScopedAccess *_friendsFeedDataAccess;
    SCSearchSnapchattersActionHandler *_snapchattersActionHandler;
    SCSearchNavigationCoordinator *_searchNavigationCoordinator;
    id <NavigationDelegate> _navigationDelegate;
    id <SCSearchCameraDismissing> _cameraDelegate;
    UIViewController<SCPageNameLogging> *_presentingViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCSearchCameraDismissing> cameraDelegate; // @synthesize cameraDelegate=_cameraDelegate;
- (id)initWithSearchSession:(id)arg1 friendsFeedDataAccess:(id)arg2 snapchattersActionHandler:(id)arg3;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak UIViewController<SCPageNameLogging> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak SCSearchNavigationCoordinator *searchNavigationCoordinator; // @synthesize searchNavigationCoordinator=_searchNavigationCoordinator;
- (id)sectionForDescriptor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
