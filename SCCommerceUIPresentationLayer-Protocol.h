//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol SCCommerceUIPresentationLayerDismissalDelegate;

@protocol SCCommerceUIPresentationLayer <NSObject>
@property(nonatomic) __weak id <SCCommerceUIPresentationLayerDismissalDelegate> delegate;
- (void)dismissAnimationWithCompletion:(void (^)(void))arg1;
- (void)presentAnimationWithCompletion:(void (^)(void))arg1;
@property(readonly, nonatomic) __weak UIView *presentedView;
- (void)setupToPresentView:(UIView *)arg1 inView:(UIView *)arg2;
@end
