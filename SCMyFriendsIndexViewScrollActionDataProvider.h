//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCLazy;

@interface SCMyFriendsIndexViewScrollActionDataProvider : NSObject
{
    NSArray *_availableCategoriesArray;
    NSArray *_bestFriends;
    SCLazy *_snapchattersDataFetcher;
}

- (void).cxx_destruct;
- (id)initWithSnapchatterDataFecther:(id)arg1;
- (void)initializeAvailableCategoriesInAllFriendsSectionWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)initializeBestFriendsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

