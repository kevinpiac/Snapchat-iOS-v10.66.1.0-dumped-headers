//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCPageNameLogging-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"
#import "SCStoryManagementChromeViewControllerDelegate-Protocol.h"
#import "SCStoryManagementViewDelegate-Protocol.h"
#import "SCUpdateListener-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSDate, NSString, SCSectionBasedCollectionViewUpdater, SCStoryManagementChromeViewController, SCStoryManagementDataSource, SCStoryManagementSnapCollectionViewPagingController, SCStoryManagementSnapDataModel, SCStoryManagementView, UIGestureRecognizer;
@protocol SCActionHandling, SCImageDownloading, SCStoryManagementViewControllerDelegate;

@interface SCStoryManagementViewController : UIViewController <UICollectionViewDelegate, SCUpdateListener, SCStoryManagementChromeViewControllerDelegate, SCStoryManagementViewDelegate, SCShakeToReportDelegate, UIGestureRecognizerDelegate, SCPageNameLogging>
{
    SCStoryManagementView *_storyManagementView;
    SCStoryManagementDataSource *_dataSource;
    id <SCImageDownloading> _imageDownloader;
    id <SCActionHandling> _actionHandler;
    SCSectionBasedCollectionViewUpdater *_snapsCollectionViewUpdater;
    SCStoryManagementSnapCollectionViewPagingController *_pagingController;
    SCSectionBasedCollectionViewUpdater *_snapsInfoCollectionViewUpdater;
    SCStoryManagementChromeViewController *_chromeViewController;
    NSDate *_currentSnapViewStartTime;
    SCStoryManagementSnapDataModel *_currentSnap;
    UIGestureRecognizer *_dismissPanGesture;
    _Bool _isForSingleStorySnap;
    id <SCStoryManagementViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_currentViewerListCollectionView;
- (void)_dismissStoryManagementViewController;
- (void)_setUpSnapsCollectionViewPagingController;
- (void)_setUpSnapsCollectionViewUpdater;
- (void)_setUpSnapsInfoCollectionViewUpdater;
- (void)_updateDismissPanGesture;
- (void)_updateSelectedSnap;
- (id)defaultProjectNameV2;
- (id)defaultSubProjectName;
@property(nonatomic) __weak id <SCStoryManagementViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)dismissKeyboard;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithStoryManagementDataSource:(id)arg1 imageDownloader:(id)arg2 actionHandler:(id)arg3 isForSingleStorySnap:(_Bool)arg4;
- (void)loadView;
- (id)pageViewName;
- (void)scrollToSnapDataModel:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)storyManagementChromeViewControllerAddSnapButtonTapped:(id)arg1;
- (void)storyManagementViewDidTapDeleteButton:(id)arg1;
- (void)storyManagementViewDidTapSaveButton:(id)arg1;
- (void)storyManagementViewDidTapSendButton:(id)arg1;
- (void)storyManagementViewDidTapSettingButton:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

