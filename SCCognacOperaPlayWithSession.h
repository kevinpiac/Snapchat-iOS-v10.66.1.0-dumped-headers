//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacOperaSession-Protocol.h"

@class NSString, SCCognacAppViewLifeCycleListenerAnnouncer, SCCognacOperaDataSource, SCCognacSwipeTransitionPresenter, SCOperaViewController;

@interface SCCognacOperaPlayWithSession : NSObject <SCCognacOperaSession>
{
    SCCognacSwipeTransitionPresenter *_swipeTransitionPresenter;
    SCOperaViewController *_operaVC;
    SCCognacAppViewLifeCycleListenerAnnouncer *_viewLifeCycleAnnouncer;
    SCCognacOperaDataSource *_dataSource;
}

+ (id)registeredEventsForOperaSession;
- (void).cxx_destruct;
- (CDUnknownBlockType)_playWithFriendsWVJBHandler;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)endSession;
@property(nonatomic) __weak SCOperaViewController *operaVC; // @synthesize operaVC=_operaVC;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)pauseSession;
- (id)registeredWVJBHandlerNameToHandler;
- (void)resumeSession;
@property(retain, nonatomic) SCCognacAppViewLifeCycleListenerAnnouncer *viewLifeCycleAnnouncer; // @synthesize viewLifeCycleAnnouncer=_viewLifeCycleAnnouncer;
- (void)startSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
