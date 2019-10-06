//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCManagedCapturerGLViewManagerAPI-Protocol.h"

@class NSString, SCVideoPreviewGLViewManager, UIView;
@protocol LSAGLView;

@interface SCManagedCapturerGLViewManagerAPIAdaptor : NSObject <SCManagedCapturerGLViewManagerAPI>
{
    SCVideoPreviewGLViewManager *_manager;
}

- (void).cxx_destruct;
- (void)configureWithCaptureResource:(id)arg1;
- (void)didBecomeActive;
- (void)didEnterBackground;
@property(readonly, nonatomic) SCVideoPreviewGLViewManager *manager; // @synthesize manager=_manager;
- (void)prepareViewIfNecessary;
- (void)setLensesActive:(_Bool)arg1;
@property(readonly, nonatomic) UIView<LSAGLView> *view;
- (void)willEnterForeground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
