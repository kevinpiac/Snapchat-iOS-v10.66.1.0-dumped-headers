//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCInAppRatingUserActionDelegate-Protocol.h"

@class NSString, SCInAppRatingFeatureSettingsPromptRecordsRecorder, SCLazy;
@protocol SCInAppRatingPageRouter, SCInAppRatingWorkflowDelegate;

@interface SCInAppRatingWorkflow : NSObject <SCInAppRatingUserActionDelegate>
{
    id <SCInAppRatingWorkflowDelegate> _workflowDelegate;
    id <SCInAppRatingPageRouter> _pageRouter;
    SCLazy *_submissionHandler;
    SCInAppRatingFeatureSettingsPromptRecordsRecorder *_promptRecordsRecorder;
}

- (void).cxx_destruct;
- (void)beginWorkflow;
- (id)initWithWorkflowDelegate:(id)arg1 pageRouter:(id)arg2 submissionHandler:(id)arg3 promptRecordsRecorder:(id)arg4;
- (void)userTappedExitLeaveFeedback;
- (void)userTappedLeaveFeedback;
- (void)userTappedNotNow;
- (void)userTappedSubmitFeedback:(id)arg1;
- (void)userTappedSure;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

