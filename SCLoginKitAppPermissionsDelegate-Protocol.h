//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString, SCLoginKitAppPermissionsViewController;

@protocol SCLoginKitAppPermissionsDelegate <NSObject>
- (void)appPermissionsVC:(SCLoginKitAppPermissionsViewController *)arg1 didRemoveAppWithAppId:(NSString *)arg2;
- (void)appPermissionsVC:(SCLoginKitAppPermissionsViewController *)arg1 didUpdateAppWithAppId:(NSString *)arg2 updatedApprovedScopes:(NSMutableArray *)arg3;
@end

