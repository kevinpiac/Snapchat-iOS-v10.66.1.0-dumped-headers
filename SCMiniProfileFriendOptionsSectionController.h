//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMiniProfileSectionController.h"

#import "SCMiniProfileOptionRowControllerDelegate-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class Friend, NSString, SCSnapchatter, SCTempSnapchatter;
@protocol SCMiniProfileFriendOptionsSectionControllerDelegate;

@interface SCMiniProfileFriendOptionsSectionController : SCMiniProfileSectionController <SCMiniProfileOptionRowControllerDelegate, SCSnapchattersDataRequestListener>
{
    Friend *_friend;
    _Bool _shouldShowSnapAndChat;
    _Bool _shouldShowIgnore;
    _Bool _shouldShowIgnoreRecommended;
    _Bool _hidesActionButtons;
    long long _pageType;
    id <SCMiniProfileFriendOptionsSectionControllerDelegate> _delegate;
    SCSnapchatter *_snapchatter;
    SCTempSnapchatter *_tempSnapchatter;
}

- (void).cxx_destruct;
- (long long)_optionFromRowIndex:(long long)arg1;
- (void)_reload;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)initWithFriend:(id)arg1 hidesActionButtons:(_Bool)arg2 delegate:(id)arg3 pageType:(long long)arg4;
- (id)initWithSnapchatter:(id)arg1 hidesActionButtons:(_Bool)arg2 delegate:(id)arg3 pageType:(long long)arg4;
- (id)initWithTempSnapchatter:(id)arg1 delegate:(id)arg2 pageType:(long long)arg3;
- (long long)numberOfRows;
- (void)optionRowControllerDidSelect:(id)arg1;
- (id)rowControllerAtIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

