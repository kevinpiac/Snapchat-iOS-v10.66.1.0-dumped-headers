//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCGroupInvite, UIViewController;

@protocol SCGroupInviteProfileActionHandler <NSObject>
- (void)presentInviteEditorScreenForInvite:(SCGroupInvite *)arg1 fromBaseViewController:(UIViewController *)arg2 onFinish:(void (^)(_Bool))arg3;
- (void)presentInviteFriendsScreenForInvite:(SCGroupInvite *)arg1 fromBaseViewController:(UIViewController *)arg2 onFinish:(void (^)(_Bool))arg3;
@end
