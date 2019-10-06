//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SCOAuth2ContentView, UIButton, UISwitch;

@protocol SCOAuth2ContentViewDelegate <NSObject>
- (void)didPressContinueButton:(UIButton *)arg1 view:(SCOAuth2ContentView *)arg2 permissions:(NSArray *)arg3;
- (void)didPressOtherButton:(UIButton *)arg1 view:(SCOAuth2ContentView *)arg2 permissions:(NSArray *)arg3;

@optional
- (void)switchChanged:(UISwitch *)arg1;
@end
