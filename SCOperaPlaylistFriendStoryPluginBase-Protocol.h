//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol SCOperaPlaylistFriendStoryPluginBase <NSObject>
- (_Bool)isViewingLongform;
- (void)stopLoggingEventIfNecessary;
- (long long)storyPlayMode;
- (void)updateFriendsList:(NSArray *)arg1;
- (long long)viewLocation;
- (long long)viewingType;
@end
