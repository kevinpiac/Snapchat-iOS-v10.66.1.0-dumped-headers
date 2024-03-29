//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCSearchContentViewControlling-Protocol.h"

@class NSString, SCBitmojiFriendCollectionContainerView, SCLazy, SCSearchContentViewControllerContext, SCSearchQueryResultController, SCSendToDocObjectRecipientDataSource, SCUserSession;
@protocol SCActionHandling;

@interface SCBitmojiFriendCollectionViewController : UIViewController <SCSearchContentViewControlling>
{
    SCBitmojiFriendCollectionContainerView *_collectionContainerView;
    SCSearchQueryResultController *_queryResultCoordinator;
    SCUserSession *_userSession;
    SCSendToDocObjectRecipientDataSource *_recipientDataSource;
    SCLazy *_userInfoProvider;
    SCSearchContentViewControllerContext *_searchContentViewControllerContext;
    id <SCActionHandling> _actionHandler;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (id)initWithUserSession:(id)arg1 actionHandler:(id)arg2;
- (void)loadView;
@property(retain, nonatomic) SCSearchContentViewControllerContext *searchContentViewControllerContext; // @synthesize searchContentViewControllerContext=_searchContentViewControllerContext;
- (void)searchControllerDidChangeToText:(id)arg1 byChangingCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

