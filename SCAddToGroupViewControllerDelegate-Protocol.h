//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCAddToGroupViewController, SCDeepLinkURL, UIViewController;
@protocol SCNamedFriend;

@protocol SCAddToGroupViewControllerDelegate <NSObject>
- (void)didPressMischiefConfirmationButton:(NSArray *)arg1 viewController:(SCAddToGroupViewController *)arg2 groupName:(NSString *)arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 viewController:(UIViewController *)arg2 completion:(void (^)(void))arg3;
- (void)navigateToChatViewWithFriend:(id <SCNamedFriend>)arg1 deepLinkURL:(SCDeepLinkURL *)arg2 viewController:(SCAddToGroupViewController *)arg3;
- (void)navigateToChatViewWithGroupId:(NSString *)arg1;

@optional
- (void)didPressArroyoConfirmationButton:(NSArray *)arg1 viewController:(SCAddToGroupViewController *)arg2 groupName:(NSString *)arg3;
@end
