//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSNumber, NSString;

@interface SCFriendStoriesLoadingSession : NSObject
{
    _Bool _userInitiated;
    long long _loadContext;
    NSMutableSet *_loadingStoryIds;
    NSString *_username;
    long long _viewSource;
    NSNumber *_startTime;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) long long loadContext; // @synthesize loadContext=_loadContext;
@property(retain, nonatomic) NSMutableSet *loadingStoryIds; // @synthesize loadingStoryIds=_loadingStoryIds;
@property(copy, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) long long viewSource; // @synthesize viewSource=_viewSource;

@end

