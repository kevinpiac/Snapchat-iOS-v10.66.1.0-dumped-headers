//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer;
@protocol SCSearchTabTransitionControllingDelegate;

@protocol SCSearchTabTransitionControlling <NSObject>
@property(nonatomic) __weak id <SCSearchTabTransitionControllingDelegate> delegate;
- (UIGestureRecognizer *)gestureRecognizerForTabTransition;
- (void)switchToTabAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (struct CGRect)viewFrameForTabAtIndex:(unsigned long long)arg1 currentIndex:(unsigned long long)arg2 contentOffset:(struct CGPoint)arg3;
@end

