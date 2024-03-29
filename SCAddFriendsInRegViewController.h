//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCAddFriendsInRegOutgoingFriendsObservingDelegate-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCSearchContentViewControlling-Protocol.h"

@class NSString, SCAddFriendsInRegOutgoingFriendsObserver, SCAddFriendsScrollAnimatorDataCoordinator, SCAddFriendsV2View, SCDisposableObserverLifecycle, SCSearchContentViewControllerContext, SCSearchQueryResultController, SCUnauthenticatedContinueButton, UIButton;
@protocol SCActionHandling, SCPostRegAddFriendsPageDelegate, SCSearchQueryCoordinating, SCSearchSectionCreating, SCUnauthenticatedStyleHelper;

@interface SCAddFriendsInRegViewController : UIViewController <SCHeaderDelegate, SCAddFriendsInRegOutgoingFriendsObservingDelegate, SCSearchContentViewControlling>
{
    id <SCSearchQueryCoordinating> _queryCoordinator;
    id <SCSearchSectionCreating> _sectionCreator;
    SCAddFriendsInRegOutgoingFriendsObserver *_outgoingFriendsObserver;
    id <SCPostRegAddFriendsPageDelegate> _postRegAddFriendsPageDelegate;
    id <SCActionHandling> _actionHandler;
    SCDisposableObserverLifecycle *_disposableObserverLifecycle;
    SCAddFriendsV2View *_contentView;
    id <SCUnauthenticatedStyleHelper> _styleHelper;
    SCUnauthenticatedContinueButton *_continueButton;
    UIButton *_skipButton;
    SCAddFriendsScrollAnimatorDataCoordinator *_scrollAnimatorDataCoordinator;
    SCSearchQueryResultController *_queryResultController;
    _Bool _skipped;
    SCSearchContentViewControllerContext *_searchContentViewControllerContext;
}

- (void).cxx_destruct;
- (void)_addContinueButton;
- (void)_addSkipButton;
- (id)_addSnapcodeSearchBarButton;
- (void)_addSnapcodeSearchBarButtonPressed:(id)arg1;
- (void)_autoSkipIfNoSuggestion;
- (void)_continueButtonPressed;
- (void)_dismissKeyboard;
- (void)_observeNumberOfSnapchatters:(id)arg1;
- (void)_setContinueButtonVisibility:(_Bool)arg1;
- (void)_setupDismissKeyboardForScrollView;
- (id)initWithQueryCoordinator:(id)arg1 sectionCreator:(id)arg2 outgoingFriendsObserver:(id)arg3 postRegAddFriendsPageDelegate:(id)arg4 actionHandler:(id)arg5;
- (void)loadView;
- (void)outgoingFriendsStatusDidChange:(_Bool)arg1;
- (void)rightButtonPressed;
@property(retain, nonatomic) SCSearchContentViewControllerContext *searchContentViewControllerContext; // @synthesize searchContentViewControllerContext=_searchContentViewControllerContext;
- (void)searchControllerDidChangeToText:(id)arg1 byChangingCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)searchControllerDidTapClearButton;
- (_Bool)searchControllerShouldReturnWithSearchText:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

