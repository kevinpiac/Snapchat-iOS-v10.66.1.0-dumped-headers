//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, SCSessionRequestManager;
@protocol OS_dispatch_queue, SCOurStorySettingsActionHandlerDelegate;

@interface SCOurStorySettingsActionHandler : NSObject <SCActionHandling>
{
    NSObject<OS_dispatch_queue> *_announceQueue;
    SCSessionRequestManager *_requestManager;
    id <SCOurStorySettingsActionHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_deleteStory:(id)arg1;
- (void)_handleDeletionTap:(id)arg1;
- (void)_handleSaveTap:(id)arg1;
- (void)_handleShowStoryTap:(id)arg1 from:(id)arg2;
@property(nonatomic) __weak id <SCOurStorySettingsActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithRequestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

