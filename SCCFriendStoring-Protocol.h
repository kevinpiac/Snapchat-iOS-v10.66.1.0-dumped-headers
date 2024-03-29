//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerMarshallable-Protocol.h"

@class SCCAddFriendRequest;

@protocol SCCFriendStoring <NSObject, SCComposerMarshallable>
- (void)addFriendWithRequest:(SCCAddFriendRequest *)arg1 completion:(void (^)(_Bool))arg2;
- (void)getBestFriendsWithCompletion:(void (^)(NSArray *, NSDictionary *))arg1;
- (void)getFriendsWithCompletion:(void (^)(NSArray *, NSDictionary *))arg1;
- (void (^)(void))onFriendsUpdatedWithCallback:(void (^)(void))arg1;
@end

