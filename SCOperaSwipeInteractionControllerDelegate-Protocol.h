//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCOperaSwipeInteractionController, UIView;

@protocol SCOperaSwipeInteractionControllerDelegate <NSObject>
- (_Bool)didTouchLiveAreaAtLocation:(struct CGPoint)arg1 delegateView:(UIView *)arg2;
- (void)swipeInteractionController:(SCOperaSwipeInteractionController *)arg1 didFinishInteractionWithDelegateViewVisible:(_Bool)arg2;
- (void)swipeInteractionController:(SCOperaSwipeInteractionController *)arg1 didStartInteractionWithDelegateViewVisible:(_Bool)arg2;
- (void)swipeInteractionController:(SCOperaSwipeInteractionController *)arg1 didUpdateVisiblePercent:(double)arg2;
- (_Bool)swipeInteractionController:(SCOperaSwipeInteractionController *)arg1 shouldBeginPanWithDirection:(unsigned long long)arg2;
@end

