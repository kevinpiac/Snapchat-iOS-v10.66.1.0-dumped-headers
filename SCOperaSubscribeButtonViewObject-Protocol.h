//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCOperaSubscribeButtonViewDelegate;

@protocol SCOperaSubscribeButtonViewObject <NSObject>
+ (double)largestExpectedWidth;
@property(nonatomic) __weak id <SCOperaSubscribeButtonViewDelegate> delegate;
- (id)initWithFrame:(struct CGRect)arg1 isSubscribed:(_Bool)arg2;
- (_Bool)isAnimating;
@property(nonatomic) _Bool isSubscribed;
- (void)updateIsSubscribedWithNoAnimations:(_Bool)arg1;
@end

