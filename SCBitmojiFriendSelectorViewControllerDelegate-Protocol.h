//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCBitmojiFriendSelectorViewController, SCSnapchatter;

@protocol SCBitmojiFriendSelectorViewControllerDelegate <NSObject>
- (void)bitmojiFriendSelector:(SCBitmojiFriendSelectorViewController *)arg1 didSelectSnapchatter:(SCSnapchatter *)arg2;
- (void)bitmojiFriendSelectorDidSelectCurrentUser:(SCBitmojiFriendSelectorViewController *)arg1;
- (void)bitmojiFriendSelectorDidSelectNone:(SCBitmojiFriendSelectorViewController *)arg1;
- (void)dismissBitmojiFriendSelector:(SCBitmojiFriendSelectorViewController *)arg1;
@end

