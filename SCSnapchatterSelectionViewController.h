//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SIGSubscreenViewController.h"

#import "UICollectionViewDelegate-Protocol.h"

@class NSString, SCSearchQueryResultController, SCSelectionTracker, SCSnapchatterSelectionConfiguration, SIGSearchQueryTextFieldHandler, SIGSectionIndexViewSynchronizer, UICollectionView;
@protocol SCSearchQueryCoordinating, SCSearchSectionCreating, SCSnapchatterSelectionDelegate;

@interface SCSnapchatterSelectionViewController : SIGSubscreenViewController <UICollectionViewDelegate>
{
    id <SCSearchSectionCreating> _sectionCreator;
    SCSelectionTracker *_selectionTracker;
    SCSnapchatterSelectionConfiguration *_configuration;
    id <SCSnapchatterSelectionDelegate> _delegate;
    SCSearchQueryResultController *_queryResultController;
    SIGSearchQueryTextFieldHandler *_textFieldHandler;
    id <SCSearchQueryCoordinating> _sectionCoordinator;
    SIGSectionIndexViewSynchronizer *_indexViewSynchronizer;
    long long _previousStatusBarStyle;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
- (void)_actionButtonPressed;
- (void)_dismissKeyboard;
- (id)initWithSectionCreator:(id)arg1 selectionTracker:(id)arg2 configuration:(id)arg3 delegate:(id)arg4;
- (id)loadScrollView;
- (void)loadView;
- (void)scrollViewDidScroll;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

