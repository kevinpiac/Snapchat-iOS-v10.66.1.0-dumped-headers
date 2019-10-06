//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, SCCognacListHeaderView, SCCognacSettingsListActionHandler, UICollectionView;
@protocol SCCognacSettingsListViewControllerAudioDelegate, SCCognacSettingsListViewControllerDismissDelegate;

@interface SCCognacSettingsListViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSMutableArray *_viewModelArrays;
    NSArray *_headerViewModels;
    SCCognacListHeaderView *_headerView;
    UICollectionView *_collectionView;
    SCCognacSettingsListActionHandler *_actionHandler;
    id <SCCognacSettingsListViewControllerAudioDelegate> _audioDelegate;
    id <SCCognacSettingsListViewControllerDismissDelegate> _dismissDelegate;
}

- (void).cxx_destruct;
- (void)_makeScoreVisibilityViewModelWithExperimentManager:(id)arg1 playerItem:(id)arg2 gameSessionId:(id)arg3;
- (void)_makeViewModelsWithExperimentManager:(id)arg1 supportDataProvider:(id)arg2 playerItem:(id)arg3 gameSessionId:(id)arg4;
- (void)_updateStatusBar;
@property(nonatomic) __weak id <SCCognacSettingsListViewControllerAudioDelegate> audioDelegate; // @synthesize audioDelegate=_audioDelegate;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)dismiss;
@property(nonatomic) __weak id <SCCognacSettingsListViewControllerDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
- (id)initWithSupportActionHandler:(id)arg1 supportDataProvider:(id)arg2 viewLifeCycleAnnouncer:(id)arg3 eventLoggingController:(id)arg4 experimentManager:(id)arg5 playerItem:(id)arg6 gameSessionId:(id)arg7;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)resume;
- (void)updateGameAudioDisabled;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
