//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCManagedCapturerListener-Protocol.h"
#import "SCManagedLensesProcessorDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCVideoPreviewGLViewManagerApplicationLifecycleEvent-Protocol.h"

@class NSString, SCCaptureResource, UIView;
@protocol LSAGLView, SCVideoPreviewGLViewWatchdog;

@interface SCVideoPreviewGLViewManager : NSObject <SCTraceEnabled, SCManagedCapturerListener, SCManagedLensesProcessorDelegate, SCVideoPreviewGLViewManagerApplicationLifecycleEvent>
{
    SCCaptureResource *_resource;
    id <SCVideoPreviewGLViewWatchdog> _viewWatchdog;
    _Bool _areLensesActive;
    _Bool _shouldSetViewHiddenToNo;
    UIView<LSAGLView> *_view;
}

- (void).cxx_destruct;
- (id)_createLSAGLView;
- (_Bool)_shouldUseViewWatchdog;
- (void)_updateWatchdogRunningStatus;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (id)initWithCaptureResource:(id)arg1;
- (void)managedCapturer:(id)arg1 didChangeState:(id)arg2;
- (void)managedLensesProcessor:(id)arg1 didOutputTexture:(id)arg2;
- (void)managedLensesProcessorDidCallLenseResume:(id)arg1;
- (void)prepareViewIfNecessary;
- (void)setLensesActive:(_Bool)arg1;
@property(readonly, nonatomic) UIView<LSAGLView> *view; // @synthesize view=_view;
- (void)willEnterForeground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

