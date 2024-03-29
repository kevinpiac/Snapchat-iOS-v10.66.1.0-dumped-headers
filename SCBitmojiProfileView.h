//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCScalingButton.h"

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCProfileHeaderAvatarViewDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCBitmojiAvatarViewModel, SCCircularBadgeView, SCDisposableObserverLifecycle, SCProfileHeaderAvatarView, SCProfileHeaderStoryViewModel, SCShapeView, SCUserSession, UIView;

@interface SCBitmojiProfileView : SCScalingButton <SCTraceEnabled, SCDataCoordinatorListener, SCProfileHeaderAvatarViewDelegate>
{
    SCDisposableObserverLifecycle *_observerLifecycle;
    SCBitmojiAvatarViewModel *_bitmojiAvatarViewModel;
    SCProfileHeaderStoryViewModel *_storyViewModel;
    _Bool _badged;
    _Bool _showingBitmoji;
    _Bool _shouldRedisplayBadgeCount;
    _Bool _didRedisplayBadgeCount;
    SCProfileHeaderAvatarView *_profileHeaderAvatarView;
    long long _badgeStyle;
    UIView *_profileContentView;
    SCShapeView *_badgeView;
    SCCircularBadgeView *_circleBadgeIconView;
    CDUnknownBlockType _badgeFlipHandler;
    long long _currentBadgeCount;
    SCUserSession *_userSession;
    NSString *_bitmojiSelfieId;
    NSString *_bitmojiAvatarId;
}

- (void).cxx_destruct;
- (void)_animateBadgeIn;
- (void)_animateBadgeOut:(CDUnknownBlockType)arg1;
- (id)_badgeColor;
- (id)_badgePathForStyle:(long long)arg1;
- (void)_handleStoryOnMainThread:(id)arg1;
- (void)_refreshAvatarViewForStoryUpdatesWithLogIdentifier:(id)arg1;
- (void)_updateCircleBadgeIconWithCount:(unsigned long long)arg1;
- (void)_updateProfileHeaderView;
- (void)applicationWillEnterForeground:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType badgeFlipHandler; // @synthesize badgeFlipHandler=_badgeFlipHandler;
@property(readonly, nonatomic) long long badgeStyle; // @synthesize badgeStyle=_badgeStyle;
@property(retain, nonatomic) SCShapeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(retain, nonatomic) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
@property(retain, nonatomic) SCCircularBadgeView *circleBadgeIconView; // @synthesize circleBadgeIconView=_circleBadgeIconView;
@property(nonatomic) long long currentBadgeCount; // @synthesize currentBadgeCount=_currentBadgeCount;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
@property(nonatomic) _Bool didRedisplayBadgeCount; // @synthesize didRedisplayBadgeCount=_didRedisplayBadgeCount;
- (id)initWithFrame:(struct CGRect)arg1 userSession:(id)arg2;
- (_Bool)isAccessibilityElement;
@property(readonly, nonatomic, getter=isBadged) _Bool badged; // @synthesize badged=_badged;
@property(nonatomic, getter=isShowingBitmoji) _Bool showingBitmoji; // @synthesize showingBitmoji=_showingBitmoji;
- (void)layoutSubviews;
- (id)newBadgeView;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) UIView *profileContentView; // @synthesize profileContentView=_profileContentView;
@property(readonly, nonatomic) SCProfileHeaderAvatarView *profileHeaderAvatarView; // @synthesize profileHeaderAvatarView=_profileHeaderAvatarView;
- (void)removeInFlightAnimation;
- (void)setBadged:(_Bool)arg1 badgeCount:(long long)arg2 animated:(_Bool)arg3;
@property(nonatomic) _Bool shouldRedisplayBadgeCount; // @synthesize shouldRedisplayBadgeCount=_shouldRedisplayBadgeCount;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)updateVisibleBadgeWithCount:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)willHandleDisplayedStoryUploadSuccess:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

