//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol SCChatGroup;

@protocol SCGroupsStorage <NSObject>
- (id <SCChatGroup>)groupById:(NSString *)arg1;
- (void)putGroup:(id <SCChatGroup>)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)putGroups:(NSDictionary *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)removeGroupById:(NSString *)arg1 completionHandler:(void (^)(_Bool))arg2;
@end

