//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCMapCurrentStatusViewController, SCMapMyStatus, UIView;

@protocol SCMapCurrentStatusViewControllerDelegate <NSObject>
- (void)mapCurrentStatusViewController:(SCMapCurrentStatusViewController *)arg1 didDeleteMyStatus:(SCMapMyStatus *)arg2 wasMostRecentStatus:(_Bool)arg3;
- (void)mapCurrentStatusViewController:(SCMapCurrentStatusViewController *)arg1 wantsToPresentStoryForUserId:(NSString *)arg2 fromBaseView:(UIView *)arg3;
- (void)mapCurrentStatusViewController:(SCMapCurrentStatusViewController *)arg1 wantsToShowProfileForUserId:(NSString *)arg2;
- (void)mapCurrentStatusViewControllerWantsToDismiss:(SCMapCurrentStatusViewController *)arg1;
@end

