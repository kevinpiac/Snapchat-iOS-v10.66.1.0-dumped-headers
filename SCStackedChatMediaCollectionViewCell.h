//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCStackedCollectionViewCell.h"

@class SCBaseMediaThumbnailViewModel, SCUserSession, UIView;
@protocol SCChatSingleMediaThumbnailView;

@interface SCStackedChatMediaCollectionViewCell : SCStackedCollectionViewCell
{
    UIView<SCChatSingleMediaThumbnailView> *_mediaThumbnailView;
    SCUserSession *_userSession;
    SCBaseMediaThumbnailViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)_initLagunaViewWithParentVC:(id)arg1;
- (void)_initMediaViewWithParentVC:(id)arg1;
- (id)mediaThumbnailView;
- (void)setViewModel:(id)arg1 userSession:(id)arg2 parentVC:(id)arg3;
- (void)startAnimation;
- (void)stopAnimation;

@end
