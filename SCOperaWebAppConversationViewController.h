//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCEventListener-Protocol.h"
#import "SCOperaEventListener-Protocol.h"
#import "SCOperaWebAppChatAffordanceDataSource-Protocol.h"
#import "SCOperaWebAppChatAffordanceDelegate-Protocol.h"
#import "SCOperaWebAppConversationCellViewModelProvider-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString, SCOperaEventListenerAnnouncer, SCOperaWebAppChatAffordanceView, SCOperaWebAppChatHeaderView, SCOperaWebAppConversationViewLayout, SCOperaWebAppLayer, UICollectionView;

@interface SCOperaWebAppConversationViewController : UIViewController <SCOperaWebAppConversationCellViewModelProvider, SCOperaWebAppChatAffordanceDelegate, SCOperaWebAppChatAffordanceDataSource, SCOperaEventListener, UICollectionViewDataSource, UICollectionViewDelegate, SCEventListener, UIGestureRecognizerDelegate>
{
    SCOperaWebAppChatHeaderView *_headerView;
    UICollectionView *_collectionView;
    NSMutableArray *_viewModels;
    SCOperaWebAppConversationViewLayout *_layout;
    long long _firstUnreadChatIndex;
    _Bool _isDragging;
    double _containerYOffset;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    SCOperaWebAppLayer *_layer;
    SCOperaWebAppChatAffordanceView *_chatAffordanceView;
}

+ (id)_registeredOperaEvents;
- (void).cxx_destruct;
- (void)_animateChatAffordanceVisible:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didFinishInsertViewModel;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_layoutChatAffordanceFrame:(_Bool)arg1;
- (void)_scrollToBottomIfNecessary;
- (_Bool)_shouldUpdateHeaderView:(id)arg1;
- (void)_showChatAffordanceIfNecessary:(_Bool)arg1;
- (_Bool)_showingChats;
- (void)_updateGradientMask;
- (void)_updateWithNewCellViewModel:(id)arg1;
- (void)_updateWithShiftHeight:(double)arg1;
- (void)chatAffordanceTappedOnTop:(_Bool)arg1;
@property(retain, nonatomic) SCOperaWebAppChatAffordanceView *chatAffordanceView; // @synthesize chatAffordanceView=_chatAffordanceView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (double)extraBottomPadding;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)headerView;
- (id)initWithOperaEventAnnouncer:(id)arg1;
- (id)labelTextForBottom;
- (id)labelTextForTop;
@property(retain, nonatomic) SCOperaWebAppLayer *layer; // @synthesize layer=_layer;
- (void)loadView;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewDidLoad;
- (id)viewModels;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

