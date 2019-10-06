//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCSearchCardContainerContentViewControllerContext, UIColor, UIView;

@protocol SCSearchCardContainerContentViewControlling <NSObject>
@property(retain, nonatomic) SCSearchCardContainerContentViewControllerContext *cardContainerContext;

@optional
- (void)cardContainerTabDidCancelInteractiveChange;
- (void)cardContainerTabDidFinishInteractiveChange;
- (void)cardContainerTabDidSwitchFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 gesture:(long long)arg3;
- (void)cardContainerTabDidUpdateInteractiveChangeProgress:(double)arg1;
- (void)cardContainerTabWillStartInteractiveChangeFromSelectedIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)refreshByPullToRefresh;
- (_Bool)shouldDisableTopGradientViewAlpha;
- (_Bool)shouldEnableTabSwitchGesture;
- (UIView *)tabBarActionButon;
- (long long)tabBarInterfaceStyle;
- (UIColor *)tabBarTintColor;
@end

