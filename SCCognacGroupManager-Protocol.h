//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol SCCognacGroup;

@protocol SCCognacGroupManager <NSObject>
- (void)createGroupWithFriends:(NSArray *)arg1 completion:(void (^)(_Bool, NSString *, NSArray *))arg2;
- (id <SCCognacGroup>)existingGroupForFriends:(NSArray *)arg1;
- (id <SCCognacGroup>)groupForGroupId:(NSString *)arg1;
- (NSArray *)groupsForGroupIds:(NSArray *)arg1;
@end
