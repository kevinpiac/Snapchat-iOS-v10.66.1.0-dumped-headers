//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCActionable-Protocol.h"
#import "SCDiscoverFeedCollectionViewCellAnimating-Protocol.h"
#import "SCDiscoverFeedTileOperaBaseViewProviding-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCSeparatorConfigurable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCActionModel, SCDiscoverFeedStoryCircleView, SCEventListenerAnnouncer, SCLazy, UIColor, UILabel;
@protocol SCActionHandling;

@interface SCDiscoverFeedStoryListCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, SCActionable, SCEventAnnouncing, SCEventListener, SCViewModelConfigurable, SCDiscoverFeedTileOperaBaseViewProviding, SCSeparatorConfigurable, SCDiscoverFeedCollectionViewCellAnimating>
{
    SCDiscoverFeedStoryCircleView *_storyCircleView;
    UILabel *_titleLabel;
    SCLazy *_lazyActionSubtextLabel;
    SCLazy *_lazyActionButton;
    SCActionModel *_tapActionModel;
    SCActionModel *_longPressActionModel;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCLazy *_bottomSeparator;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
    unsigned long long _separatorMask;
    UIColor *_separatorColor;
}

+ (id)announcerIdentifier;
+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_calculateCellFrameAndDispatchEventIfNecessary:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)_compareAndUpdateViewModelIfNeeded:(id)arg1;
- (void)_handleLongPressAction:(id)arg1;
- (void)_handleTapAction:(id)arg1;
- (void)_handleTapActionOnActionButton:(id)arg1;
- (void)_initBottomSeparatorIfNeeded;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)addListener:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)operaBaseView;
- (void)removeListener:(id)arg1;
@property(copy, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) unsigned long long separatorMask; // @synthesize separatorMask=_separatorMask;
- (void)setHighlighted:(_Bool)arg1;
- (void)setImageDownloader:(id)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (_Bool)shouldAnimateOnTap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

