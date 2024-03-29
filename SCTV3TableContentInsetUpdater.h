//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTV3TableContentInsetUpdater-Protocol.h"

@class NSMutableSet, NSString, SCTV3TableContentInsetUpdateMode;
@protocol SCTableControllerInsetUpdater;

@interface SCTV3TableContentInsetUpdater : NSObject <SCTV3TableContentInsetUpdater>
{
    id <SCTableControllerInsetUpdater> _tableControllerInsetUpdater;
    NSMutableSet *_views;
    SCTV3TableContentInsetUpdateMode *_updateMode;
}

- (void).cxx_destruct;
- (double)_getHeightFromAffectingViews;
- (void)addViewAlteringInset:(id)arg1;
- (id)initWithTableControllerInsetUpdater:(id)arg1;
- (void)removeViewAlteringInset:(id)arg1;
- (void)setUpdateMode:(id)arg1;
- (void)updateTableContentInset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

