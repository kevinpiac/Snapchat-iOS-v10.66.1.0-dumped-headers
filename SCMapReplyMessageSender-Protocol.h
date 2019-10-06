//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCMapReplyMessageContent, SCMapStatusGroup, UIViewController;

@protocol SCMapReplyMessageSender <NSObject>
@property(readonly, nonatomic) unsigned long long mapSessionId;
- (void)messageFieldFocusedForUserId:(NSString *)arg1;
- (void)presentCameraForReplyingToUserId:(NSString *)arg1 replySource:(long long)arg2 statusGroup:(SCMapStatusGroup *)arg3 baseViewController:(UIViewController *)arg4 completion:(void (^)(_Bool))arg5;
- (void)sendMapReplyMessage:(SCMapReplyMessageContent *)arg1 toUserId:(NSString *)arg2 replySource:(long long)arg3 statusGroup:(SCMapStatusGroup *)arg4;
@end
