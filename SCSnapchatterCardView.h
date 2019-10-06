//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCBaseMediaCardView.h"

#import "SCActionMenuRenderableCellContentView-Protocol.h"
#import "SCFriendProfileCellViewDelegate-Protocol.h"

@class NSString, SCFriendProfileCellView, SCSnapchatterCardViewModel, UITapGestureRecognizer;
@protocol SCSnapchatterCardViewDelegate;

@interface SCSnapchatterCardView : SCBaseMediaCardView <SCFriendProfileCellViewDelegate, SCActionMenuRenderableCellContentView>
{
    SCSnapchatterCardViewModel *_viewModel;
    SCFriendProfileCellView *_profileView;
    _Bool _friendNotAdded;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <SCSnapchatterCardViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_initProfileView;
- (id)_requestContext;
- (void)_updateProfileView:(id)arg1 withFriend:(id)arg2 userSession:(id)arg3;
- (void)friendProfileCellView:(id)arg1 addFriendPressed:(id)arg2 friend:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 hasBorder:(_Bool)arg2 delegate:(id)arg3;
- (void)onTap:(id)arg1;
- (void)rerenderForActionMenuWithBoundingSize:(struct CGSize)arg1;
- (void)resetWithOriginalSettings;
- (void)setViewModel:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

