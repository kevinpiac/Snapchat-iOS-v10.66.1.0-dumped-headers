//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCLogout;

@protocol SCLogoutWorkflowDelegate <NSObject>
- (void)didFailRequestWithLogout:(SCLogout *)arg1;
- (void)didFinishRequestWithLogout:(SCLogout *)arg1;
@end
