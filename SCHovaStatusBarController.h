//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol SCHovaStatusBarControllerDataSource;

@interface SCHovaStatusBarController : NSObject <SCTraceEnabled>
{
    _Bool _preparing;
    id <SCHovaStatusBarControllerDataSource> _dataSource;
    NSMutableDictionary *_statusBarSnapshots;
    NSMutableArray *_visibleStatusBarSnapshots;
    struct _NSRange _previousRange;
    struct _NSRange _preparingRange;
    struct CGRect _statusBarFrame;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCHovaStatusBarControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)init;
@property(nonatomic, getter=isPreparing) _Bool preparing; // @synthesize preparing=_preparing;
- (void)prepareToMoveToRange:(struct _NSRange)arg1;
@property(nonatomic) struct _NSRange preparingRange; // @synthesize preparingRange=_preparingRange;
@property(nonatomic) struct _NSRange previousRange; // @synthesize previousRange=_previousRange;
- (void)reloadData;
- (void)reloadDataWithRange:(struct _NSRange)arg1;
- (void)reloadDataWithTransitionCoordinator:(id)arg1;
- (void)removeAllStatusBarSnapshots;
@property(nonatomic) struct CGRect statusBarFrame; // @synthesize statusBarFrame=_statusBarFrame;
@property(retain, nonatomic) NSMutableDictionary *statusBarSnapshots; // @synthesize statusBarSnapshots=_statusBarSnapshots;
@property(retain, nonatomic) NSMutableArray *visibleStatusBarSnapshots; // @synthesize visibleStatusBarSnapshots=_visibleStatusBarSnapshots;
- (_Bool)shouldAnimateTransitionWithRange:(struct _NSRange)arg1;
- (void)statusBarFrameDidChange:(id)arg1;
- (id)statusBarSnapshotImageViewForIndex:(long long)arg1;
- (void)updateStatusBarStyleForViewController:(id)arg1;
- (void)updateStatusBarVisibilityForViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

