//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCFriendsFeedLoggingServices : NSObject
{
    SCLazy *_friendsFeedFirstRenderLatencyLogger;
    SCLazy *_friendsFeedReadyLogger;
    SCLazy *_ghostToFeedLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLazy *friendsFeedFirstRenderLatencyLogger; // @synthesize friendsFeedFirstRenderLatencyLogger=_friendsFeedFirstRenderLatencyLogger;
@property(readonly, nonatomic) SCLazy *friendsFeedReadyLogger; // @synthesize friendsFeedReadyLogger=_friendsFeedReadyLogger;
@property(readonly, nonatomic) SCLazy *ghostToFeedLogger; // @synthesize ghostToFeedLogger=_ghostToFeedLogger;
- (id)initWithFriendsFeedFirstRenderLatencyLogger:(id)arg1 friendsFeedReadyLogger:(id)arg2 ghostToFeedLogger:(id)arg3;

@end

