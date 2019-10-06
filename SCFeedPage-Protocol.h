//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCPannableCellController-Protocol.h"
#import "SwipeView-Protocol.h"

@class NSString, SCAppNotification, SCChatMainViewController;
@protocol SCHovaOverscrollDelegate;

@protocol SCFeedPage <SCPannableCellController, SwipeView>
@property(nonatomic) __weak SCChatMainViewController *chatVC;
- (void)dismissFullScreenMedia;
@property(nonatomic) __weak id <SCHovaOverscrollDelegate> hovaOverscrollDelegate;
- (_Bool)isPlayingSnap;
- (_Bool)isPlayingSnapOrStory;
- (_Bool)isPlayingStory;
- (void)preparePanningStateWithIdentifier:(NSString *)arg1;
- (void)pushStartChatView;
- (void)scrollToTop:(_Bool)arg1;
@property(retain, nonatomic) SCAppNotification *sourceNotification;
- (_Bool)shouldSuppressNotification:(SCAppNotification *)arg1;
@end

