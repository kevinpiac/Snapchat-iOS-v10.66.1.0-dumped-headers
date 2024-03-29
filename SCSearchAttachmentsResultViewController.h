//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSearchResultsViewController.h"

#import "SCEventListener-Protocol.h"

@class NSString, SCSearchMultiStateView;
@protocol SCSearchAttachmentsResultViewControllerDelegate;

@interface SCSearchAttachmentsResultViewController : SCSearchResultsViewController <SCEventListener>
{
    SCSearchMultiStateView *_rightBarButtonView;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_clearSearchViewContent;
- (void)_configureRightBarButtonItemActions;
- (void)_dismissSearchViewControllerWithActionType:(long long)arg1;
- (void)_dismissWithCloseButton;
- (void)_updateRightBarButtonStateWithSearchText:(id)arg1 isEditing:(_Bool)arg2;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithSearchSession:(id)arg1 queryCoordinator:(id)arg2 sectionCreator:(id)arg3;
- (_Bool)prefersStatusBarHidden;
- (id)queryWithSearchText:(id)arg1;
- (void)searchControllerDidBeginEditing;
- (void)searchControllerDidChangeToText:(id)arg1 byChangingCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)searchControllerDidEndEditing;
- (_Bool)shouldDisplayStatusBar;
- (_Bool)shouldShowGhostSihlouette;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SCSearchAttachmentsResultViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

