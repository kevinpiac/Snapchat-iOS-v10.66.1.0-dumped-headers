//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSerengetiHookWithSession.h"

#import "SCExportMyStoriesManagerDelegate-Protocol.h"

@class NSString, SCExportMyStoriesManager;

@interface SCSerengetiSaveStoryToCameraRollHook : SCSerengetiHookWithSession <SCExportMyStoriesManagerDelegate>
{
    CDUnknownBlockType _completion;
    SCExportMyStoriesManager *_exportManager;
}

- (void).cxx_destruct;
- (void)handleSavedMyStories:(id)arg1 withError:(id)arg2;
- (void)handleStartSavingMyStories;
- (id)javascriptFunctionName;
- (void)updateSaveMyStories:(id)arg1 withProgress:(double)arg2;
- (void)viewController:(id)arg1 performHookWithParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
