//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, SCShareFriendActionManager;

@protocol SCShareFriendActionManagerDelegate <NSObject>
- (void)shareFriendActionManagerDidCompleteExport:(SCShareFriendActionManager *)arg1 activityType:(NSString *)arg2 completed:(_Bool)arg3 activityError:(NSError *)arg4;
- (void)shareFriendActionManagerDidSendUsername:(SCShareFriendActionManager *)arg1;
- (void)shareFriendActionManagerTappedExportURL:(SCShareFriendActionManager *)arg1;
- (void)shareFriendActionManagerTappedSendUsername:(SCShareFriendActionManager *)arg1;
@end

