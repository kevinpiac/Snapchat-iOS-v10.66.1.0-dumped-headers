//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCLensExplorerStoryPlayerDelegate-Protocol.h"

@class NSString, SCLensExplorerDataStore, SCLensExplorerStoryPlayer;
@protocol SCActionHandling, SCLensExplorerEventsController, SCLensExplorerLensUnlockerProtocol, SCLensExplorerOperaPresenterFactoryProtocol, SCLensExplorerRouting;

@interface SCLensChallengesActionHandler : NSObject <SCLensExplorerStoryPlayerDelegate, SCActionHandling>
{
    id <SCLensExplorerLensUnlockerProtocol> _lensUnlocker;
    id <SCLensExplorerRouting> _lensExplorerRouter;
    SCLensExplorerStoryPlayer *_storyPlayer;
    id <SCActionHandling> _debugActionHandler;
    id <SCLensExplorerOperaPresenterFactoryProtocol> _operaPresenterFactory;
    SCLensExplorerDataStore *_storiesDataStore;
    id <SCLensExplorerEventsController> _eventsController;
}

- (void).cxx_destruct;
- (void)_handleOpenSectionWithSender:(id)arg1 actionModel:(id)arg2;
- (_Bool)_handleStartChallengeWithSender:(id)arg1 actionModel:(id)arg2;
- (void)_playStoryWithStoryItem:(id)arg1 fromSourceView:(id)arg2;
- (id)_presentingViewControllerForView:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithLensExplorerRouter:(id)arg1 lensUnlocker:(id)arg2 debugActionHandler:(id)arg3 operaPresenterFactory:(id)arg4 storiesDataStore:(id)arg5 eventsController:(id)arg6;
- (void)storyPlayer:(id)arg1 didFinishPlayingChallengeSnap:(id)arg2 hasUnviewedStories:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

