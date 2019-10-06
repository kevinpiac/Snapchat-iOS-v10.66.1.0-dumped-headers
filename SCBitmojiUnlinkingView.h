//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SCAlertViewActionButton, SCLoadingIndicatorView, UIImageView, UILabel, UITableView;
@protocol SCBitmojiUnlinkingViewDelegate;

@interface SCBitmojiUnlinkingView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    id <SCBitmojiUnlinkingViewDelegate> _delegate;
    UIView *_bottomContainer;
    UITableView *_tableView;
    SCAlertViewActionButton *_unlinkButton;
    UILabel *_unlinkLabel;
    SCLoadingIndicatorView *_loadingIndicator;
    UIImageView *_avatarImageView;
    unsigned long long _numOfRows;
}

- (void).cxx_destruct;
- (id)_cellWithIndex:(long long)arg1;
- (id)getChangeOutfitCell;
- (id)getChangeSelfieCell;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshState;
- (void)setUnLinkButtonSelected:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)unlinkButtonPressed;
- (void)updateAvatarImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

